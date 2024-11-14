
int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(15, INPUT);
  pinMode(17, OUTPUT);
}

void loop() {
  val = digitalRead(15);
  Serial.println(val);
  if(val == 0){
    digitalWrite(17, HIGH);
  }else {
    digitalWrite(17, LOW);
  }
  delay(1000);
}
