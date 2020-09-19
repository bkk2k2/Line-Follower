int ir1=A5,ir2=A4,ir3=A3,ir_read1,ir_read2,ir_read3;
int plus1=7,plus2=5,plus3=3,ground1=6,ground2=4,ground3=2;
int motors_right_f=11,motors_right_b=9,motors_left_f=10,motors_left_b=8;
int white=0,black=1;
void forward(int t){
  digitalWrite(motors_right_f,HIGH);digitalWrite(motors_right_b,HIGH);
  digitalWrite(motors_left_f,HIGH);digitalWrite(motors_left_b,HIGH);
 }
 void right(int t){
  digitalWrite(motors_right_f,LOW);digitalWrite(motors_right_b,LOW);
  digitalWrite(motors_left_f,HIGH);digitalWrite(motors_left_b,LOW);
 }
 void left(int t){
  digitalWrite(motors_right_f,HIGH);digitalWrite(motors_right_b,LOW);
  digitalWrite(motors_left_f,LOW);digitalWrite(motors_left_b,LOW);
 }
 void stop(int t){
  digitalWrite(motors_right_f,LOW);digitalWrite(motors_right_b,LOW);
  digitalWrite(motors_left_f,LOW);digitalWrite(motors_left_b,LOW);
  delay(30);
 }
void setup() {
  // put your setup code here, to run once:
 pinMode(ir1,INPUT);
 pinMode(ir2,INPUT);
 pinMode(ir3,INPUT);
 pinMode(plus1,OUTPUT);pinMode(ground1,OUTPUT);
 pinMode(plus2,OUTPUT);pinMode(ground2,OUTPUT);
 pinMode(plus3,OUTPUT);pinMode(ground3,OUTPUT);
 digitalWrite(plus1,HIGH);digitalWrite(ground1,LOW);
 digitalWrite(plus2,HIGH);digitalWrite(ground2,LOW);
 digitalWrite(plus3,HIGH);digitalWrite(ground3,LOW);
 pinMode(motors_right_f,OUTPUT);
 pinMode(motors_right_b,OUTPUT);
 pinMode(motors_left_f,OUTPUT);
 pinMode(motors_left_b,OUTPUT);
 Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
 ir_read1=digitalRead(ir1);
 ir_read2=digitalRead(ir2);
 ir_read3=digitalRead(ir3);
 while(ir_read1==black&&ir_read2==white&&ir_read3==black){
  forward(0);
  delay(70);
  stop(0);
 ir_read1=digitalRead(ir1);
 ir_read2=digitalRead(ir2);
 ir_read3=digitalRead(ir3);
 }
 while(ir_read1==white&&ir_read2==black&&ir_read3==white){
  forward(0);
   delay(70);
  stop(0);
 ir_read1=digitalRead(ir1);
 ir_read2=digitalRead(ir2);
 ir_read3=digitalRead(ir3);
 }
 while(ir_read1==black&&ir_read2==white&&ir_read3==white){
  right(0);
   delay(70);
  stop(0);
 ir_read1=digitalRead(ir1);
 ir_read2=digitalRead(ir2);
 ir_read3=digitalRead(ir3);
 }
 while(ir_read1==black&&ir_read2==black&&ir_read3==white){
  right(0);
   delay(70);
  stop(0);
 ir_read1=digitalRead(ir1);
 ir_read2=digitalRead(ir2);
 ir_read3=digitalRead(ir3);
 }
 while(ir_read1==white&&ir_read2==white&&ir_read3==black){
  left(0);
   delay(70);
  stop(0);
 ir_read1=digitalRead(ir1);
 ir_read2=digitalRead(ir2);
 ir_read3=digitalRead(ir3);
 }
 while(ir_read1==white&&ir_read2==black&&ir_read3==black){
  left(0);
   delay(70);
  stop(0);
 ir_read1=digitalRead(ir1);
 ir_read2=digitalRead(ir2);
 ir_read3=digitalRead(ir3);
 }
 while(ir_read1==black&&ir_read2==black&&ir_read3==black){
  left(0);
  delay(70);
 stop(0);
 ir_read1=digitalRead(ir1);
 ir_read2=digitalRead(ir2);
 ir_read3=digitalRead(ir3);
 }
 while(ir_read1==white&&ir_read2==white&&ir_read3==white){
  right(0);
   delay(70);
  stop(0);
 ir_read1=digitalRead(ir1);
 ir_read2=digitalRead(ir2);
 ir_read3=digitalRead(ir3);
}
}
