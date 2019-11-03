int data=0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2,  INPUT);
}

void loop()
{
  data=digitalRead(2);
  if(data==HIGH){
    digitalWrite(13,HIGH);
  }
  else
    digitalWrite(13,LOW);
  
}
