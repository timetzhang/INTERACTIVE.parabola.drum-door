void setup() {
  // put your setup code here, to run once:
  pinMode(15, OUTPUT);
  pinMode(A3, INPUT);
  //Serial.begin(9600);
  digitalWrite(15, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (analogRead(A3) > 100) {
    digitalWrite(15, LOW);
    delay(1000);
    digitalWrite(15, HIGH);
    delay(600);
  }
}
