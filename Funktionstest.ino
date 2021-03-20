void setup() {
  // Der Starttext:
  Serial.begin(9600);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  Serial.println("###########");
  Serial.println("# Arduino #");
  Serial.println("# tester  #");
  Serial.println("#  V1.0   #");
  Serial.println("###########");

}

void loop() {
  //Die loop die den Knopf checkt.
  digitalWrite(5, HIGH);
  delay(1000);
  if(digitalRead(4) == HIGH) {
    Serial.println("Button: An");
    Serial.println("Der Knopf funktioniert;")
  digitalWrite(5, LOW);
   
  }


  else{
    Serial.println("Button: Aus");

    
  }
  

}
