
int relay = 7;
ldr = A0;
void setup() {
  // put your setup code here, to run once:
  pinMode(relay, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  ldr_value = analogRead(ldr)/4;

  if(ldr_value < 100){
    digitalWrite(relay, LOW);
  }
  else{
    digitalWrite(relay, HIGH);
  }
  delay(2000);
}
