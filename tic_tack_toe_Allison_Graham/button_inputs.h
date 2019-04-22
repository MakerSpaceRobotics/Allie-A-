int getInput(){
  int x;
  while(!Buttonpress){
  digitalWrite(2,LOW);
if (!digitalRead(5)){
  Serial.println("2,5");
}
 digitalWrite(2,LOW); //column 2, row 5
 
if (!digitalRead(6)){
  Serial.println ("2,6");
 }
 digitalWrite(2,HIGH); //column 2, row 6

 if (!digitalRead(7)){
  Serial.println("2,7");
 }
 digitalWrite(2,HIGH);//column 2, row 7
 
digitalWrite(3,LOW);
if (!digitalRead(5)){
  Serial.println("3,5");
}
 digitalWrite(3,LOW); //column 3, row 5
 
if (!digitalRead(3)){
  Serial.println ("3,6");
 }
 digitalWrite(3,HIGH); //column 3, row 6

 if (!digitalRead(3)){
  Serial.println("3,7");
 }
 digitalWrite(3,HIGH);//column 2, row 7
 
digitalWrite(4,LOW);
if (!digitalRead(5)){
  Serial.println("3,5");
}
 digitalWrite(4,LOW); //column 4, row 5

if (!digitalRead(4)){
  Serial.println ("4,6");
 }
 digitalWrite(4,HIGH); //column 4, row 6

 if (!digitalRead(4)){
  Serial.println("4,7");
 }
 digitalWrite(3,HIGH);//column 2, row 7

}
}

