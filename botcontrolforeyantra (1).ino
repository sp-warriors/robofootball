
int LM1=3,LM2=4,RM1=8,RM2=9;
char val=0;
void setup() 
{
 Serial.begin(9600);
 pinMode(3,OUTPUT); // postive of motor  left
 pinMode(4,OUTPUT); // negative of motor left
 pinMode(8,OUTPUT); // postive of right motor 
 pinMode(9,OUTPUT); // negative of right motor
  // put your setup code here, to run once:

}

void loop() 
{
  while(Serial.available()>0)
 {
  val=Serial.read();
  Serial.print(val);
 }
  if(val=='F') //  forward direction
  {
   digitalWrite(LM1,HIGH);
   digitalWrite(RM1,HIGH);
   digitalWrite(LM2,LOW);
   digitalWrite(RM2,LOW);
   
   }
   else if(val=='B') // reverse direction
  {
   digitalWrite(LM2,HIGH);
   digitalWrite(RM2,HIGH);
   digitalWrite(LM1,LOW);
   digitalWrite(RM1,LOW);
   
   }
   else if(val=='R') // right direction
  {
   digitalWrite(LM1,HIGH);
   digitalWrite(RM2,HIGH);
   digitalWrite(LM2,LOW);
   digitalWrite(RM1,LOW);
 
   }
   else if(val=='L') // left direction
  {
   digitalWrite(LM1,LOW);
   digitalWrite(RM1,HIGH);
   digitalWrite(LM2,HIGH);
   digitalWrite(RM2,LOW);
  }
  else if(val=='S') // stop
  {
   digitalWrite(LM1,LOW);
   digitalWrite(RM1,LOW);
   digitalWrite(LM2,LOW);
   digitalWrite(RM2,LOW); 
  }
  // put your main code here, to run repeatedly:

}   
