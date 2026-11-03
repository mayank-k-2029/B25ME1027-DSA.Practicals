void setup(){
  Serial.begin(9600);
}

void loop(){
  if (Serial.available()>0){
    char recievedChar = Serial.read();

 //PrintThe character that you have sent, then print the echo right next to it
Serial.print("Sent: ");
Serial.print(recievedChar);
Serial.print(" -> Echo: ");
Serial.print(recievedChar);
  }
}
