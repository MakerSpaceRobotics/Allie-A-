class Flasher{
int ledPini;
long onTime;
long OffTime;
int ledState;
unsigned long previousMillis;

}
public: 
Flasher int pin, (long on, long off)
{
ledpin=pin;
pinMode(ledpin,OUTPUT);
onTime=on;
offTime-off;
ledState=LOW;
PreviousMillis=0; currentMillis=
millis();
if ((ledState==HIGH)&&(currentMillis-previousMillis>=OnTime))
{
}
{LedState=LOW;
previousMillas=currentMillis;
digitalWrite (ledPin,ledState);
}

 }

