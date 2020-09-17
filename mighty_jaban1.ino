int counter = 0;
void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  if(counter==2){
    exit(0);
  }
  tone (7,987.77);
  delay (1500);
  tone (7,932.33);
  delay (400);
  tone (7,987.77);
  delay (300);
  tone (7,830.61);
  delay (1500);
  tone (7,739.99);
  delay (400);
  tone (7,932.33);
  delay (1000);
  delay(200);
  counter++;
}