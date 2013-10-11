

int mode=0;

int ldr0; 
int ldr1; 
int ldr2; 
int ldr3; 
int ldr4; 
int ldr5; 

void setup() {   

  Serial.begin(9600);  

  pinMode(13, OUTPUT);    
  pinMode(12, OUTPUT);    
  pinMode(11, OUTPUT);    
 
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);  
        
  pinMode(4, OUTPUT);  
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);  
    
    
  motorNoPower();
  
}


void loop() {
  
  delay(25);
   
  
  ldr0=analogRead(A0);
  ldr1=analogRead(A1);
  ldr2=analogRead(A2);
  ldr3=analogRead(A3);
  ldr4=analogRead(A4);
  ldr5=analogRead(A5);
  
  Serial.print(ldr0);
  Serial.print(",");
  Serial.print(ldr1);
  Serial.print(",");
  Serial.print(ldr2);
  Serial.print(",");
  Serial.print(ldr3);
  Serial.print(",");
  Serial.print(ldr4);
  Serial.print(",");
  Serial.print(ldr5);
  
  Serial.println("");
  
  if(ldr0<600){
    motorNoPower();
    debugLedPattern();
    return;
  }
  
  debugToggleSled(); 
  
  if(ldr1<600){
    motorADir(1);
  }else{
    motorADir(0);  
  }  
  if(ldr2<600){
    motorBDir(1);
  }else{
    motorBDir(0);  
  }  
  
  if(ldr3<600){
    motorAPower(0);
  }else{
    motorAPower(255);  
  }  
  if(ldr4<600){
    motorBPower(0);
  }else{
    motorBPower(255);  
  }  
    
  
   if(ldr5>600){
    debugToggleSled12(); 
   }
    
}
