

#include <Servo.h>

Servo pinkyandring;  
Servo middleandindex;  
Servo thumbextandflex;  
Servo thumbradial;  
Servo thumbcontract;  


void setup() {
  pinkyandring.attach(3); 
  middleandindex.attach(4); 
  thumbextandflex.attach(5); 
  thumbradial.attach(6); 
  thumbcontract.attach(7); 
}

void loop() {
  
    pinkyandring.write(45);
    middleandindex.write(45);
   // thumbextandflex.write(40);
    thumbradial.write(45);
    thumbcontract.write(100);   
    
    delay(2000);       
    
    pinkyandring.write(0);
    middleandindex.write(0);
    thumbextandflex.write(30);
    thumbradial.write(20);
    thumbcontract.write(20);
    delay(1000);
    
}
