int left_sensor= 1;
int right_sensor=2;
int leftmotorfowd=3;
int rightmotorback=4;
int leftmotorback=5;
int rightmotorfowd=6;

void setup() {
  // put your setup code here, to run once:
  pinMode(left_sensor,INPUT);
  pinMode(right_sensor,INPUT);
  pinMode(leftmotorfowd,OUTPUT);
  pinMode(leftmotorback,OUTPUT);
  pinMode (rightmotorback,OUTPUT);
  pinMode(rightmotorfowd,OUTPUT);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:


if(digitalRead(left_sensor <500)   && digitalRead(right_sensor <500) ) //forward
{
  digitalWrite(leftmotorfowd,255);
  digitalWrite(rightmotorfowd,255);
}
else if(digitalRead(left_sensor <500)   && digitalRead(right_sensor >500) ) //right
{
  digitalWrite(leftmotorfowd,255);
  digitalWrite(rightmotorfowd,0);
}
else if(digitalRead(left_sensor >500)   && digitalRead(right_sensor <500) ) //left
{
  digitalWrite(leftmotorfowd,0);
  digitalWrite(rightmotorfowd,255);
}

else
{
 digitalWrite(leftmotorfowd,0);
  digitalWrite(rightmotorfowd,0);
}
}
