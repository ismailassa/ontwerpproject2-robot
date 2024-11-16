class Reflector {
  private:
    int digitalPin;
    int analogPin;
  
  public:
    Reflector(int dPin, int aPin): digitalPin(dPin), analogPin(aPin){
      pinMode(dPin,OUTPUT);
      pinMode(aPin, INPUT);
    }

    bool detectHole() {
      int a, b;
      digitalWrite(this->digitalPin, HIGH);
      delayMicroseconds(500);
      a = analogRead(this->analogPin);

      digitalWrite(this->digitalPin, LOW);
      delayMicroseconds(500);
      b = analogRead(this->analogPin);
      return (b - a) == 0;
    }

    void debugMethod(){
      int a, b;
      digitalWrite(this->digitalPin, HIGH);
      delayMicroseconds(500);
      a = analogRead(this->analogPin);

      digitalWrite(this->digitalPin, LOW);
      delayMicroseconds(500);
      b = analogRead(this->analogPin);
      Serial.println(b - a);
    }
};


Reflector r1(16, 28);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(r1.detectHole());
}


