

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
  
   
for (int pos = 0; pos <= 20; pos += 1) { 
    pinkyandring.write(pos);
    delay(100);                       
  }
    
    

for (int pos = 0; pos <= 40; pos += 1) { 
    middleandindex.write(pos);
    delay(100);                       
  }
    
    

for (int pos = 0; pos <= 40; pos += 1) { 
    thumbextandflex.write(pos);
    delay(100);                       
  }
    
    

for (int pos = 0; pos <= 45; pos += 1) { 
    thumbradial.write(pos);
    delay(100);                       
  }
    
     

for (int pos = 0; pos <= 20; pos += 1) { 
    thumbcontract.write(pos);
    delay(100);                       
  }
    
    delay(1000);       
    
    

for (int pos = 20; pos >= 0; pos -= 1) { 
    pinkyandring.write(pos);              
    delay(100);                       
  }
    
    

for (int pos = 40; pos >= 0; pos -= 1) { 
    middleandindex.write(0);             
    delay(100);                       
  }
    
    

for (int pos = 40; pos >= 30; pos -= 1) { 
    thumbextandflex.write(pos);             
    delay(100);                       
  }
    
    

for (int pos = 45; pos >= 20; pos -= 1) { 
    thumbradial.write(pos);             
    delay(100);                       
  }
    
    

for (int pos = 20; pos >= 0; pos -= 1) { 
    thumbcontract.write(pos);            
    delay(100);                       
  }
    
    delay(1000);
    
}
