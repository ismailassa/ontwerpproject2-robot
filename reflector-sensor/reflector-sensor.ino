void setup()  
{ 
  Serial.begin(9600);  
  pinMode(16,OUTPUT);  
  pinMode(27, INPUT);
} 
int a, b;
void loop()  
{  
  digitalWrite(16,HIGH);  
  delayMicroseconds(500);  
  a = analogRead(27); 

  digitalWrite(16,LOW);
  delayMicroseconds(500);  
  b = analogRead(27);
  Serial.println(a); 
  Serial.println(b); 
} 
