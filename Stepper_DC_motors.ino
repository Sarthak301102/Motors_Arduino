#define dir1 2
#define step1 3
#define dir2 4
#define step2 5
#define in1_1 6
#define in2_1 7
#define in3_1 8
#define in4_1 9
#define in1_2 10
#define in2_2 11
#define in3_2 12
#define in4_2 13

char a;
void setup() {
  // put your setup code here, to run once:
  pinMode(step1,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(step2,OUTPUT);
  pinMode(dir2,OUTPUT);
  pinMode(in1_1,OUTPUT);
  pinMode(in2_1,OUTPUT);
  pinMode(in3_1,OUTPUT);
  pinMode(in4_1,OUTPUT);
  pinMode(in1_2,OUTPUT);
  pinMode(in2_2,OUTPUT);
  pinMode(in3_2,OUTPUT);
  pinMode(in4_2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
a = Serial.read();
  


if(a =='a') { // 90 clkwise stepper 1
  digitalWrite(dir1,HIGH);
  for(int i = 0; i < 50; i++) {
  digitalWrite(step1, HIGH);
  delayMicroseconds(2000);
  digitalWrite(step1, LOW);
  delayMicroseconds(2000);
  }
}
if(a =='s'){//90 anticlkwise stepper 1
  digitalWrite(dir1,LOW);

  for(int i = 0; i < 50; i++) {
  digitalWrite(step1, HIGH);
  delayMicroseconds(2000);
  digitalWrite(step1, LOW);
  delayMicroseconds(2000);
  }
}
if(a =='d') { // 90 clkwise stepper 2
  digitalWrite(dir2,HIGH);
  for(int i = 0; i < 50; i++) {
  digitalWrite(step2, HIGH);
  delayMicroseconds(2000);
  digitalWrite(step2, LOW);
  delayMicroseconds(2000);
  }
}
if(a =='f'){//90 anticlkwise stepper 2
  digitalWrite(dir2,LOW);

  for(int i = 0; i < 50; i++) {
  digitalWrite(step2, HIGH);
  delayMicroseconds(2000);
  digitalWrite(step2, LOW);
  delayMicroseconds(2000);
  }
}
//for pump
if(a=='g'){//fwd 
  digitalWrite(in1_1,HIGH);
  digitalWrite(in2_1,LOW);
  digitalWrite(in3_1,HIGH);
  digitalWrite(in4_1,LOW);
  digitalWrite(in1_2,LOW);
  digitalWrite(in2_2,HIGH);
  digitalWrite(in3_2,LOW);
  digitalWrite(in4_2,HIGH);
  delay(2000);
  digitalWrite(in1_1,LOW);
  digitalWrite(in2_1,LOW);
  digitalWrite(in3_1,LOW);
  digitalWrite(in4_1,LOW);
  digitalWrite(in1_2,LOW);
  digitalWrite(in2_2,LOW);
  digitalWrite(in3_2,LOW);
  digitalWrite(in4_2,LOW);
}
if(a=='h'){//back 
  digitalWrite(in1_1,LOW);
  digitalWrite(in2_1,HIGH);
  digitalWrite(in3_1,LOW);
  digitalWrite(in4_1,HIGH);
  digitalWrite(in1_2,HIGH);
  digitalWrite(in2_2,LOW);
  digitalWrite(in3_2,HIGH);
  digitalWrite(in4_2,LOW);
  delay(2000);
  digitalWrite(in1_1,LOW);
  digitalWrite(in2_1,LOW);
  digitalWrite(in3_1,LOW);
  digitalWrite(in4_1,LOW);
  digitalWrite(in1_2,LOW);
  digitalWrite(in2_2,LOW);
  digitalWrite(in3_2,LOW);
  digitalWrite(in4_2,LOW);
}
if(a=='j'){//right  
  digitalWrite(in1_1,HIGH);
  digitalWrite(in2_1,LOW);
  digitalWrite(in3_1,HIGH);
  digitalWrite(in4_1,LOW);
  digitalWrite(in1_2,HIGH);
  digitalWrite(in2_2,LOW);
  digitalWrite(in3_2,HIGH);
  digitalWrite(in4_2,LOW);
  delay(2000);
  digitalWrite(in1_1,LOW);
  digitalWrite(in2_1,LOW);
  digitalWrite(in3_1,LOW);
  digitalWrite(in4_1,LOW);
  digitalWrite(in1_2,LOW);
  digitalWrite(in2_2,LOW);
  digitalWrite(in3_2,LOW);
  digitalWrite(in4_2,LOW);
}
if(a=='k'){//left
  digitalWrite(in1_1,LOW);
  digitalWrite(in2_1,HIGH);
  digitalWrite(in3_1,LOW);
  digitalWrite(in4_1,HIGH);
  digitalWrite(in1_2,LOW);
  digitalWrite(in2_2,HIGH);
  digitalWrite(in3_2,LOW);
  digitalWrite(in4_2,HIGH);
  delay(2000);
  digitalWrite(in1_1,LOW);
  digitalWrite(in2_1,LOW);
  digitalWrite(in3_1,LOW);
  digitalWrite(in4_1,LOW);
  digitalWrite(in1_2,LOW);
  digitalWrite(in2_2,LOW);
  digitalWrite(in3_2,LOW);
  digitalWrite(in4_2,LOW);
}
}

  