void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4, INPUT);
  Serial.println("###########");
  Serial.println("# Arduino #");
  Serial.println("# tester  #");
  Serial.println("#  V1.0   #");
  Serial.println("###########");

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  if(digitalRead(4) == HIGH) {
    Serial.println("Status: An");
   
  }


  else{
    Serial.println("Status: Aus");

    
  }
  

}
