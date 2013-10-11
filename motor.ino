

void motorAPower(int power){
  analogWrite(9,power);    
}


void motorBPower(int power){
    analogWrite(10,power);      
}

void motorADir(int dir){
  if(dir==1){  
    digitalWrite(2, HIGH);  
    digitalWrite(3, LOW);
  }else{
    digitalWrite(2, LOW);  
    digitalWrite(3, HIGH);    
  }
}

void motorBDir(int dir){
  if(dir==1){  
    digitalWrite(4, HIGH);  
    digitalWrite(5, LOW);
  }else{
    digitalWrite(4, LOW);  
    digitalWrite(5, HIGH);    
  }
}

void motorNoPower(){
  motorAPower(0);
  motorBPower(0);
  
}
