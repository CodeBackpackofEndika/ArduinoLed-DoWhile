byte Led1=12; 
byte cont=0; 
byte tiempo=500; 
 
void setup() { 
pinMode(Led1,OUTPUT); 
digitalWrite(Led1,LOW); 
 
} 
 
void loop() { 
 
  do{ 
    if(cont<=10){ 
     digitalWrite(Led1,HIGH); 
     delay(tiempo); 
     digitalWrite(Led1,LOW); 
     delay(tiempo); 
     cont=cont+1; 
    } 
  }while(cont<=10); 
 
 
  } 
