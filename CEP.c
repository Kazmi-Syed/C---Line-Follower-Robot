//Global string to save the shortest path

void reverse(){
 whilee(PortB.f2 !=0 && PortB.f3 !=0 && PortB.f4 !=0 && PortB.f5 !=0)
 PortD.f1=0;
 PortD.f2=1;

 PortD.f3=0;
 PortD.f4=1;
 delay_ms(200);
}
void stop(){
             PortD.f1 = 0;
             PortD.f2 = 0;
             PortD.f3 =0;
             PortD.f4 = 0;
             delay_ms(100) ;
}

void turnLeft(){
while(portB.f7==1 && PortB.f4 != 0 && PortB.f5 != 0 && PortB.f6 != 0 && PortB.f3 != 0 ){
//The left movment by turning off the left motor and
//Turned on the right motor
//Assume
//Reversing right and moving forward the
 PortD.f2=1;
 PortD.f1=0;
 PortD.f3=1;
 PortD.f4=0;
 delay_ms(200);
}
 //GLOBALString = GLOBALSTRING + 'L'
}


void turnRight(){
while(PortB.f2==1 && PortB.f4 != 0 && PortB.f5 != 0 && PortB.f6 != 0 && PortB.f3 != 0 ){
//The left movment by turning off the right motor and
//Turned on the left motor
 PortD.f2=0;
 PortD.f1=1;
 PortD.f3=0;
 PortD.f4=1;
 delay_ms(300);

}
//GlobalSTRING = GLOBALSTRING+'R'
}

void goStraight(){
        //both motors on
 PortD.f1=1;
 PortD.f2=0;

 PortD.f3=1;
 PortD.f4=0;
 delay_ms(200);
}

void main() {

TRISB = 0b11111100;      //inputs for taking IR
TrisD = 0x00;
//USUALLY SENSORS will give 0 for detection of
//BLACKED portion
PortB.f0 = 0;
PortB.f1 = 0;
     while(1){
     LatD = PortD;
              if(PortB.f7 == 0){
              stop();
              turnLeft();
              }
              else if(PortB.f2 ==0){
              stop();
              turnRight();
              }
              else if (PortB == 0b11111100){
              stop();
              reverse();
              }
              else if(PortB.f4 == 0 && PortB.f5==0) {
              goStraight();}
     }

//SAve string to a nonvolatile memory

}