# Capstone Project

# Topic
- 화재 감지 및 화재 진압을 위한 이동 로봇 설계 및 제작

## 주제 선정 이유
- 가을 및 겨울마다 이어지는 화재 소식에 영감을 얻음
- 2021년 12월 한 달 간 발생한 화재 건수는 3,453건
- 연소 확대 사유 중 가장 큰 이유는 부주의, 상위 항목 2가지는 '화재인지 및 신고 지연', '가연성 물질의 급격한 연소'
![화재건수](https://github.com/user-attachments/assets/38d3386a-390b-43d9-9f03-ba1bbfd11781)
![확대사유](https://github.com/user-attachments/assets/d28dc8c2-51e3-401d-ae1f-20db6d8ae19a)
- 화재 발견 초기에 적절한 진압 시 화재로 인한 인명피해 및 재산 피해 감소 효과
- 실내의 경우 화재 감지 사각지대 존재, 이를 이동 로봇이 항시 감지하며 초기 화재 발견 시 진압을 목표로 함

## Driving principle
1. 이동 로봇이 순찰하며 전방에 벽을 감지 후 90도 선회 (사각지대를 최소화하기 위함)
2. 순찰 도중 불꽃 감지 센서가 일정 이상의 적외선을 감지하면 불꽃으로 간주한 후 구동 정지
3. 화재 감지 방향을 향해 소화액을 분사 후 해당 장애물을 피하여 다른 방향으로 구동
![작동원리 순서도](https://github.com/user-attachments/assets/e6feb109-5d37-40b9-bdae-7a0b691d205d)


## Hardware
### Driving
- DC 모터
- 랙 및 피니언 (높이 조절을 위하여 설계 및 제작, 원 운동을 하는 모터의 힘을 직선 운동으로 변환)
![높이 조절](https://github.com/user-attachments/assets/9472e69d-795e-468d-ab83-735fdb8ba60f)
- 분사 조절부 (샤워기 헤드 형태로 설계 및 제작, 일직선으로 분사되는 형태를 샤워기 헤드 형태를 이용하여 적절히 분사하기 위함)
![분사부](https://github.com/user-attachments/assets/70d5c782-54dd-41cb-bd9a-7ceb898b951f)
![image](https://github.com/user-attachments/assets/8e771e7a-ae84-402e-bbdc-2c50d334df7a)


### Sensor
- 불꽃감지센서 (적외선 감지)

![image](https://github.com/user-attachments/assets/baf3fd3f-cf25-4b11-a72c-8c7a52aea91f)
- 초음파 센서 (전방 장애물 감지)

![image](https://github.com/user-attachments/assets/0dd54f43-ce4e-48e4-a99b-acaa8296deb0)

### Control
- Arduino UNO Board (추후 Arduino Mega Board로 교체)

![image](https://github.com/user-attachments/assets/41abf87c-677f-4c56-9169-c6cbe620e69c)

### Fire extinguish
- 차량용 혹은 주방용 소화기 (스프레이 형태)

## Result
- 최종 형상:

![최종 형상](https://github.com/user-attachments/assets/5a213b8b-4e2b-4ab6-83d5-cbc5e0db345a)
![시연 사진](https://github.com/user-attachments/assets/33f109ea-f032-4b31-815b-41cbe42fb8c9)

- 불꽃 감지 거리: 15cm
- 소화액 분사 거리: 15-25cm
- 총 6회 분사, 5회 성공
- 성공률 83.33%

## Reference
- [국가화재정보시스템](https://nfds.go.kr/stat/theme.do)
- 이재수, 이승민, 김세건, 이태경, 송문규, ‘선박화재의 탐지를 위한 불꽃감지 센서의 개발’, 한국통신
학회 학술대회, 서울시, 2010. 
- Abdullah Al Rakib, Moklesur Rahman, Shamsul Alam Anik, Fayez Ahmed Jahangir Masud, Ashiqur 
Rahman, Saddam Hossain, and Fysol Ibna Abbas, ‘Fire Detection and Water Discharge Activity for Fire 
Fighting Robots using IoT’, European Journal of Engineering and Technology Research, Vol .7, Issue.2, 
2022, pp. 129-131.
- 김종진, ‘초음파센서를 이용한 주차관리시스템 개선’, 경북대학교 석사학위 논문, 2011.
