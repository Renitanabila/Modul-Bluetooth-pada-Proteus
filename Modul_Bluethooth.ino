int ml=A0;
int h=225;
int l=0;
String motion;

void setup (){
  Serial.begin (9600);
  pinMode (ml,OUTPUT);
}
void loop (){
  Serial.println("Silahkan ketik 'p' untuk memutar, 's' untuk berhenti");
  while (Serial.available()==0) {  }

  motion=Serial.readString ();
  if (motion =="p"){
    analogWrite (ml,l);
  }

  if (motion=="s"){
    analogWrite(ml,h);
    delay (1000);
  }
}

