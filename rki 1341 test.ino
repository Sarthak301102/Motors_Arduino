void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT); //PWM
  pinMode(4, OUTPUT);//DIRECTION(DIR) 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(4,HIGH); //1 direction
  analogWrite(3,255); //100% duty cycle
  delay(2000); //2 sec delay
  analogWrite(3,0); //0% duty cycle
  delay(1000);
  analogWrite(3,64);//25% duty cycle
  digitalWrite(4, LOW); // anti direction
  delay(2000);// 2 sec delay

  }
