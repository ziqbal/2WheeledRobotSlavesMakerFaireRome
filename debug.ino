
int sled=-1;
int sled12=-1;

void debugToggleSled(){
  
  if(sled==1){
    digitalWrite(13, HIGH); 
    
  }else{
    digitalWrite(13, LOW); 
    
  }
  sled=sled*-1;  
  
}

void debugToggleSled12(){
  
  if(sled12==1){
    digitalWrite(12, HIGH); 
    
  }else{
    digitalWrite(12, LOW); 
    
  }
  sled12=sled12*-1;  
}


int ledp1=1;
int ledp2=0;
int ledp3=0;
int ledpd=1;

void debugLedPattern(){

  if(ledp1==1){digitalWrite(12,HIGH);}else{digitalWrite(12,LOW);}
  if(ledp2==1){digitalWrite(13,HIGH);}else{digitalWrite(13,LOW);}
  if(ledp3==1){digitalWrite(11,HIGH);}else{digitalWrite(11,LOW);}
  
   if(ledpd==1){
    if(ledp1==1){ledp1=0;ledp2=1;return;}
    if(ledp2==1){ledp2=0;ledp3=1;ledpd=-1;return;}
    
    return;
   } 

   if(ledpd==-1){
    if(ledp3==1){ledp3=0;ledp2=1;return;}
    if(ledp2==1){ledp2=0;ledp1=1;ledpd=1;return;}
    
   return; 
   } 
  
} 
