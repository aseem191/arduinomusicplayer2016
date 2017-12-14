#include "pitches.h"

//Pirates of the Carribean
int melody1[] = {
NOTE_A2,NOTE_C3,NOTE_D3,NOTE_D3,NOTE_D3,NOTE_E3,
NOTE_F3,NOTE_F3,NOTE_F3,NOTE_G3,NOTE_E3,NOTE_E3,NOTE_D3,NOTE_C3,
NOTE_D3,

NOTE_A2,NOTE_C3,NOTE_D3,NOTE_D3,NOTE_D3,NOTE_E3,
NOTE_F3,NOTE_F3,NOTE_F3,NOTE_G3,NOTE_E3,NOTE_E3,NOTE_D3,NOTE_C3,
NOTE_D3,

NOTE_A2,NOTE_C3,NOTE_D3,NOTE_D3,NOTE_D3,NOTE_E3,
NOTE_G3,NOTE_G3,NOTE_G3,NOTE_G3,NOTE_AS3,NOTE_AS3,NOTE_A3,NOTE_G3,
NOTE_A3,

NOTE_A2,NOTE_C3,NOTE_D3,NOTE_D3,NOTE_F3,NOTE_E3,NOTE_D3,NOTE_D3,
NOTE_D3,NOTE_C3,NOTE_D3
};
int tempo1[] = {
16,16,10,10,16,16,10,10,16,16,10,10,16,16,4,

16,16,10,10,16,16,10,10,16,16,10,10,16,16,4,

16,16,10,10,16,16,10,10,16,16,10,10,16,16,4,

16,16,10,10,10,3,10,10,16,16,4
};

//Pokemon theme
int melody2[] = {
NOTE_G2,NOTE_B2,NOTE_D3,NOTE_F3,NOTE_E3,NOTE_DS3,NOTE_D3,

NOTE_C3,NOTE_B2,NOTE_C3,

NOTE_G2,NOTE_B2,NOTE_D3,NOTE_C3,NOTE_B2,NOTE_C3,NOTE_D3,

NOTE_F3,NOTE_E3,NOTE_C3,NOTE_D3
};
float tempo2[] = {
4,12,1.9,4,22,22,1.75,

10,10,10,

4,12,1.9,8,12,12,3,

8,8,8,2
};

//Fur Elise by Beethoven
int melody3[] = {
NOTE_E3,NOTE_DS3,NOTE_E3,NOTE_DS3,NOTE_E3,NOTE_B2,NOTE_D3,NOTE_C3,NOTE_A2,

NOTE_C2,NOTE_E2,NOTE_A2,NOTE_B2,NOTE_E2,NOTE_A2,NOTE_B2,NOTE_C3,

NOTE_E3,NOTE_DS3,NOTE_E3,NOTE_DS3,NOTE_E3,NOTE_B2,NOTE_D3,NOTE_C3,NOTE_A2,

NOTE_C2,NOTE_E2,NOTE_A2,NOTE_B2,NOTE_E2,NOTE_C3,NOTE_B2,NOTE_A2,

NOTE_B2,NOTE_C3,NOTE_D3,NOTE_E3,NOTE_G2,NOTE_F3,NOTE_E3,NOTE_D3,

NOTE_G2,NOTE_E3,NOTE_D3,NOTE_C3,NOTE_G2,NOTE_D3,NOTE_C3,NOTE_B2,

NOTE_E3,NOTE_DS3,NOTE_E3,NOTE_DS3,NOTE_E3,NOTE_B2,NOTE_D3,NOTE_C3,NOTE_A2,

NOTE_C2,NOTE_E2,NOTE_A2,NOTE_B2,NOTE_E2,NOTE_C3,NOTE_B2,NOTE_A2
};
int tempo3[] = {
16,16,16,16,16,16,16,16,4,

16,16,16,6,16,16,16,4,

16,16,16,16,16,16,16,16,4,

16,16,16,6,16,16,16,4,

16,16,16,6,16,16,16,8,

16,16,16,6,16,16,16,4,

16,16,16,16,16,16,16,16,4,

16,16,16,6,16,16,16,4
};

//Darude - Sandstorm
int melody4[] = {
NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,

NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,

NOTE_E3,NOTE_E3,NOTE_E3,NOTE_E3,NOTE_E3,NOTE_E3,NOTE_E3,

NOTE_D3,NOTE_D3,NOTE_D3,NOTE_D3,NOTE_D3,NOTE_D3,NOTE_D3,

NOTE_D3,NOTE_A2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,

NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,

NOTE_E3,NOTE_E3,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,

NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_E3,


NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,

NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,

NOTE_E3,NOTE_E3,NOTE_E3,NOTE_E3,NOTE_E3,NOTE_E3,NOTE_E3,

NOTE_D3,NOTE_D3,NOTE_D3,NOTE_D3,NOTE_D3,NOTE_D3,NOTE_D3,

NOTE_D3,NOTE_A2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,

NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,

NOTE_E3,NOTE_E3,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,

NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_B2,NOTE_E3
};
int tempo4[] = {
16,16,16,16,8,

16,16,16,16,16,16,8,

16,16,16,16,16,16,8,

16,16,16,16,16,16,8,

16,16,16,16,16,16,8,

16,16,16,16,16,16,8,

16,16,16,16,16,16,8,

16,16,16,16,16,16,8,8,

16,16,16,16,8,

16,16,16,16,16,16,8,

16,16,16,16,16,16,8,

16,16,16,16,16,16,8,

16,16,16,16,16,16,8,

16,16,16,16,16,16,8,

16,16,16,16,16,16,8,

16,16,16,16,16,16,8,8
};

//Final Countdown
int melody5[] = {
NOTE_B2,NOTE_A2,NOTE_B2,NOTE_E2,

NOTE_C3,NOTE_B2,NOTE_C3,NOTE_B2,NOTE_A2,

NOTE_C3,NOTE_B2,NOTE_C3,NOTE_E2,

NOTE_A2,NOTE_G2,NOTE_A2,NOTE_G2,NOTE_FS2,NOTE_A2,NOTE_G2,

NOTE_B2,NOTE_A2,NOTE_B2,NOTE_E2,

NOTE_C3,NOTE_B2,NOTE_C3,NOTE_B2,NOTE_A2,

NOTE_C3,NOTE_B2,NOTE_C3,NOTE_E2,

NOTE_A2,NOTE_G2,NOTE_A2,NOTE_G2,NOTE_FS2,NOTE_A2,NOTE_G2
};
float tempo5[] = {
8,8,1.75,.7,

8,8,4,4,.7,

8,8,1.75,.7,

8,8,4,4,4,4,.7,

8,8,1.75,.7,

8,8,4,4,.7,

8,8,1.75,.7,

8,8,4,4,4,4,.7,
};

int melody6[] = {
NOTE_A2,NOTE_F2,NOTE_F2,NOTE_D2,NOTE_F2,NOTE_F2,

NOTE_F2,NOTE_D2,NOTE_F2,NOTE_F2,NOTE_F2,NOTE_A2,

NOTE_A2,NOTE_F2,NOTE_F2,NOTE_D2,NOTE_F2,NOTE_F2,

NOTE_F2,NOTE_D2,NOTE_F2,NOTE_F2,NOTE_F2,NOTE_A2,

NOTE_A2,NOTE_C3,NOTE_AS2,NOTE_A2,NOTE_G2,NOTE_F2,

NOTE_G2,NOTE_G2,NOTE_G2,NOTE_F2,NOTE_A2,NOTE_G2,NOTE_G2,NOTE_G2,NOTE_F2,NOTE_G2,
NOTE_A2,NOTE_D2
};
float tempo6[] = {
8,4,12,16,8,4,

12,16,8,4,4,2,

8,4,12,16,8,4,

12,16,8,4,4,2,

4,4,8,8,8,1.5,

8,8,8,6,8,4,8,12,4,6,6,2
};


int buttonPushed = 0;
int button = 4;
int soundSensor = A0;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led1 = 8;
int led2 = 9;
int led3 = 10;
int speaker = 12;
int taps = 0;
int loops = 0;
int loops2 = 0;
int loops3 = 0;
int loops4 = 0;
int loops5 = 0;
int tapCount = 0;
int pressCount = 0;
int sensorState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(speaker, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*pressCount = 0;
  loops = 0;
  loops2 = 0;
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  sensorState = digitalRead(button);
  while(sensorState == LOW){
    sensorState = digitalRead(button);
  }
  pressCount = 1;
  while(sensorState == HIGH){
        sensorState = digitalRead(button);
      }
  digitalWrite(led1, HIGH);
  while(loops <= 40){
    sensorState = digitalRead(button);
    if(sensorState == HIGH){
      loops = 11;
      pressCount = 2;
      while(sensorState == HIGH){
        sensorState = digitalRead(button);
      }
      digitalWrite(led2, HIGH);
      while(loops2 <= 40){
        sensorState = digitalRead(button);
        if(sensorState == HIGH){
          loops2 = 11;
          pressCount = 3;
          digitalWrite(led3, HIGH);
        }
        else{
          loops2 += 1;
          delay(50);
        }
      }
    }
    else{
      loops += 1;
      delay(50);
    }
  }
  if(pressCount == 1){
    playMelody1();
  }
  if(pressCount == 2){
    playMelody2();
  }
  if(pressCount == 3){
    playMelody3();
  }
}*/
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  tapCount = 0;
  loops = 0;
  loops2 = 0;
  loops3 = 0;
  loops4 = 0;
  loops5 = 0;
  sensorState = analogRead(soundSensor);
  while(sensorState < 3){
    if(digitalRead(button) == HIGH){
      buttonPushed = 1;
      while(digitalRead(button) == HIGH){}
    }
    while(buttonPushed == 1){
      if(digitalRead(button) == HIGH){
        while(digitalRead(button) == HIGH){}
        buttonPushed = 0;
      }
    }
    sensorState = analogRead(soundSensor);
  }
  tapCount = 1;
  digitalWrite(led1, HIGH);
  delay(100);
  while(loops <= 1000){
    sensorState = analogRead(soundSensor);
    if(sensorState >= 3){
      loops = 1001;
      delay(100);
      tapCount = 2;
      digitalWrite(led2, HIGH);
      while(loops2 <= 1000){
        sensorState = analogRead(soundSensor);
        if(sensorState >= 3){
          loops2 = 1001;
          delay(100);
          tapCount = 3;
          digitalWrite(led3, HIGH);
          while(loops3 <= 1000){
            sensorState = analogRead(soundSensor);
            if(sensorState >= 3){
              loops3 = 1001;
              delay(100);
              tapCount = 4;
              digitalWrite(led4, HIGH);
              while(loops4 <= 1000){
                sensorState = analogRead(soundSensor);
                if(sensorState >= 3){
                  loops4 = 1001;
                  delay(100);
                  tapCount = 5;
                  digitalWrite(led5, HIGH);
                  while(loops5 <= 1000){
                   sensorState = analogRead(soundSensor);
                   if(sensorState >= 3){
                    loops5 = 1001;
                    delay(100);
                    tapCount = 6;
                    digitalWrite(led6, HIGH);
                   }
                   else{
                    loops5 += 1;
                    delay(3);
                   }
                  }
                }
                else{
                  loops4 += 1;
                  delay(3);
                }
              }
            }
            else{
             loops3 += 1;
             delay(3);
            }
          }
        }
        else{
         loops2 +=1;
         delay(3);
        }
      }
    }
    else{ 
      loops +=1;
      delay(3);
    }
  }
  if(tapCount == 1){
    playMelody1();
  }
  if(tapCount == 2){
    playMelody2();
  }
  if(tapCount == 3){
    playMelody3();
  }
  if(tapCount == 4){
    playMelody4();
  }
  if(tapCount == 5){
    playMelody5();
  }
  if(tapCount == 6){
    playMelody6();
  }
    
}

void playMelody1(){
  int numnotes = 0;
  int notelength = 0;
  while(numnotes < (sizeof(melody1)/sizeof(int))){
    notelength = 800/tempo1[numnotes];
    tone(12, melody1[numnotes], notelength);
    delay(notelength*1.2);
    noTone(12);
    delay(10);
    numnotes += 1;
  }
}
void playMelody2(){
  int numnotes = 0;
  int notelength = 0;
  while(numnotes < (sizeof(melody2)/sizeof(int))){
    notelength = 1000/tempo2[numnotes];
    tone(12, melody2[numnotes], notelength);
    delay(notelength*1.2);
    noTone(12);
    delay(10);
    numnotes += 1;
  }
}
void playMelody3(){
  int numnotes = 0;
  int notelength = 0;
  while(numnotes < (sizeof(melody3)/sizeof(int))){
    notelength = 1000/tempo3[numnotes];
    tone(12, melody3[numnotes], notelength);
    delay(notelength*1.2);
    noTone(12);
    delay(10);
    numnotes += 1;
  }
}
void playMelody4(){
  int numnotes = 0;
  int notelength = 0;
  while(numnotes < (sizeof(melody4)/sizeof(int))){
    notelength = 650/tempo4[numnotes];
    tone(12, melody4[numnotes], notelength);
    delay(notelength*1.2);
    noTone(12);
    delay(10);
    numnotes += 1;
  }
}
void playMelody5(){
  int numnotes = 0;
  int notelength = 0;
  while(numnotes < (sizeof(melody5)/sizeof(int))){
    notelength = 400/tempo5[numnotes];
    tone(12, melody5[numnotes], notelength);
    delay(notelength*1.2);
    noTone(12);
    delay(10);
    numnotes += 1;
  }
}
void playMelody6(){
  int numnotes = 0;
  int notelength = 0;
  while(numnotes < (sizeof(melody6)/sizeof(int))){
    notelength = 850/tempo6[numnotes];
    tone(12, melody6[numnotes], notelength);
    delay(notelength*1.2);
    noTone(12);
    delay(10);
    numnotes += 1;
  }
}

