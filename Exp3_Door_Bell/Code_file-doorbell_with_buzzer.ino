int reading;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2,INPUT);
}

void loop()
{
  reading=digitalRead(2);
  
  if(reading==1)     
  { tone(13, 523, 1000); // play tone 60 (C5 = 523 Hz)
  } 
  
  else
    noTone(13);
  
}
