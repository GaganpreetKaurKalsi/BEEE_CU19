int sensorValue;

void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorValue=analogRead(A0);
  Serial.println(sensorValue);
  delay(300);
  if(sensorValue>600){
    digitalWrite(13,HIGH);
  }
  else
    digitalWrite(13,LOW);
}
