int IRsensor = A1;

void setup(){
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(IRsensor, INPUT);
}

void loop(){
  int val = analogRead(IRsensor );
  Serial.println(val);
  if(val>400)
  {
  digitalWrite(LED_BUILTIN ,LOW );
  }
  else
  {
  digitalWrite(LED_BUILTIN ,HIGH );
  Serial.println("up");
  delay(50);
  }
}