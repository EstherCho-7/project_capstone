# Capstone Project

# Topic
- 화재 감지 및 화재 진압을 위한 이동 로봇 설계 및 제작

## 주제 선정 이유
- 가을 및 겨울마다 이어지는 화재 소식에 영감을 얻음
- 2021년 12월 한 달 간 발생한 화재 건수는 3,453건
- 연소 확대 사유 중 가장 큰 이유는 부주의, 상위 항목 2가지는 '화재인지 및 신고 지연', '가연성 물질의 급격한 연소'
- 실내의 경우 화재 감지 사각지대 존재, 이를 이동 로봇이 항시 감지하며 화재 발견 시 진압을 목표로 함

## 하드웨어 설계
### Driving
- DC 모터
- 랙 및 피니언 (높이 조절을 위하여 설계 및 제작, 원 운동을 하는 모터의 힘을 직선 운동으로 변환)
- 분사 조절부 (샤워기 헤드 형태로 설계 및 제작, 일직선으로 분사되는 형태를 샤워기 헤드 형태를 이용하여 적절히 분사하기 위함)

### Sensor
- 불꽃감지센서 (적외선 감지)
- 초음파 센서 (전방 장애물 감지)

### Control
- Arduino UNO Board (추후 Arduino Mega Board로 교체)

## Result
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
