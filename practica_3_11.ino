int POT  = A0;//Byron Alejandro Pineda Barrientos
int LECTURA;//2022121
int Led =3;

void setup()
{
  Serial.begin(9600);
 pinMode(POT,INPUT);
   pinMode(Led,OUTPUT);

}

void loop()
{

 LECTURA = analogRead(POT)/4;
  analogWrite(Led,LECTURA);
  Serial.println(LECTURA);
  delay(100);
    
}