void setup()
{
    for(int i=10;i<=13;i++){
    pinMode(i,OUTPUT);
  }  
}

void loop()
{
  for(int i=10;i<14;i++)
  {
    digitalWrite(i,HIGH);
    int j=i+1;
    if(j>13){
    j=10;
    }
    digitalWrite(j,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    digitalWrite(j,LOW);
  }
}
