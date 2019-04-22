int buttonstate;

void setup() {
Serial.begin(9600); 
pinMode(2,OUTPUT);
pinMode(5,INPUT_PULLUPo);
}

void loop() {
digitalWrite (2,LOW);
buttonstate = digitalRead(5);
Serial.println(buttonstate);
}


