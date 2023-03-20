long int i= millis();
#define IRpin 12
void setup() {
  // put your setup code here, to run once:
  Serial.begin(19200);
  pinMode(IRpin, INPUT);
}
  int counter=0;
  int taco =digitalRead(IRpin);
  for(i=0;i<=60000;i++){
    if(taco==1){
      counter+=1;
    }
  }
 
void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.print("Speed of motor: ");
  Serial.print(counter);
  Serial.println("rpm");

  delay(1000);
}
