#include <Servo.h> 
 
//왼쪽 바퀴 
int IN1 = 3; // Motor A 방향설정 전진 
int IN2 = 5; // Motor A 방향설정 후진 
 
//오른쪽 바퀴 
int IN3 = 6;  // Motor B 방향설정 전진 
int IN4 = 11;  // Motor B 방향설정 후진 
 
int trigPin = 13;  //초음파 센서 핀 번호 
int echoPin = 12;  //초음파 센서 핀 번호 
 
const int flamePin = 2;  // 불꽃 감지 센서 핀 번
호 
int Flame = HIGH;  // 불꽃 감지 센서의 상태 값 
저장 변수 
int FL = HIGH; 
//서보모터 핀 번호 (노즐) 
 
Servo myservox;   //1 = 노즐 서보모터, 2 = 소
화기 서보모터 
Servo myservoy; 
int angle; 
 
int distance; //초음파 센서에서 계산한 거리 
float cycletime; //초음파 센서로 장애물을 인식할
때 걸린 시간 
 
void setup() { 
  Serial.begin(9600); 
 
  pinMode(IN1, INPUT); 
  pinMode(IN2, INPUT); 
 
  pinMode(IN3, INPUT); 
  pinMode(IN4, INPUT);
 
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
 
  pinMode(flamePin, INPUT); 
 
  myservox.attach(9); 
  myservoy.attach(10); 
} 
 
void loop() { 
  //장애물 감지하는 코드 
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(3); 
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW); 
  cycletime = pulseIn(echoPin, HIGH); 
//cycletime은 μs(마이크로 초)단위 
  distance = ((340 * cycletime) / 10000) / 2; // 
거리 = 속도(초음파속도=340m/s) * 시간(m/s) , 
distance는 cm단위 
 
  Serial.println("1"); 
  Serial.println(distance); //시리얼 모니터에서 거
리 확인 
 
  Flame = digitalRead(flamePin);   // 불꽃 감지 
센서값 입력 
  if (Flame == LOW) {             // 불꽃 감지 
센서의 값이 HIGH일 경우 (불꽃 감지 O) 
    myservoy.write(105); 
    myservox.write(0); 
 
    Serial.println("2_1"); 
    Serial.println("ON");  // 시리얼 통신에 센서
값 출력 
 
    analogWrite(IN1, 0);     // Motor A 방향설
정 전진
	    analogWrite(IN2, 0);     // Motor A 방향설
정 후진

    analogWrite(IN3, 0);     // Motor B 방향설
정 전진
    analogWrite(IN4, 0);     // Motor B 방향설
정 후진

  }
  else {  // 불꽃 감지 센서의 값이 0일 경우 (불
꽃 감지 X)
    myservoy.write(180);
    myservox.write(180);

    Serial.println("2_2");
    Serial.println("OFF");  //시리얼 통신에 센서
값 출력,불꽃 감지를 안하면 이동
    if (distance > 20) { //앞 사물과의 거리가
20cm보다 크면
      Serial.println("2_2_1");
      //전진 유지
      analogWrite(IN1, 150);     // Motor A 방
향설정 전진
      analogWrite(IN2, 0);      // Motor A 방향
설정 후진

      analogWrite(IN3, 150);    // Motor B 방
향설정 전진
      analogWrite(IN4, 0);     // Motor B 방향
설정 후진

    }
    else { //앞 사물과의 거리가 20cm보다 작거
나 같으면
      Serial.println("2_2_2");
      //0.5초 정지
      analogWrite(IN1, 0);     // Motor A 방향
설정 전진
      analogWrite(IN2, 0);     // Motor A 방향
설정 후진
 
      analogWrite(IN3, 0);     // Motor B 방향
설정 전진 
      analogWrite(IN4, 0);     // Motor B 방향
설정 후진 
 
      delay(500); 
 
      //1초 후진 
      analogWrite(IN1, 0);     // Motor A 방향
설정 전진 
      analogWrite(IN2, 150);    // Motor A 방
향설정 후진 
 
      analogWrite(IN3, 0);     // Motor B 방향
설정 전진 
      analogWrite(IN4, 150);    // Motor B 방
향설정 후진 
 
      delay(1000); 
 
      //0.75초 좌회전하며 회피 
      analogWrite(IN1, 0);     // Motor A 방향
설정 전진 
      analogWrite(IN2, 150);    // Motor A 방
향설정 후진 
 
      analogWrite(IN3, 150);   // Motor B 방향
설정 전진 
      analogWrite(IN4, 0);     // Motor B 방향
설정 후진 
 
      delay(750); 
    } 
  } 
}
