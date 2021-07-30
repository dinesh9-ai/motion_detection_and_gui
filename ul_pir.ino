int in=2;
int l=13;
int p=LOW;
int a=0;
int t=12;
int e=11;
float pt;
float dist ;
float ss=776.5;
float df;
int po();
float ul();
void setup() {
  pinMode(in,INPUT);
  pinMode(l,OUTPUT);
  pinMode(e,INPUT);
  pinMode(t,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  df=0;
  a=digitalRead(in);
  if (a==HIGH){
    digitalWrite(l,HIGH);
    if (p==LOW){
      //Serial.println("motion detected");
      p=HIGH;
       df=ul();
       int a1=int(df);
       Serial.println(df);
    }}else{
      digitalWrite(l,LOW);
    if(p==HIGH)
    {//Serial.println("motion ended");
     p=LOW;
    }}
   

delay(100);
}
float ul()
{digitalWrite(t,LOW);
delayMicroseconds(2000);
digitalWrite(t,HIGH);
delayMicroseconds(15);
digitalWrite(t,LOW);
delayMicroseconds(10);
pt=pulseIn(e,HIGH);
pt=pt/1000000;
//Serial.println(pt);
pt=pt/3600;
dist=pt*ss;
dist=dist/2;
dist=dist*63360;
return dist;
}
