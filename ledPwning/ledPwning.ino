#define led2_Pin 6
#define led1_Pin 5
int timer = 5;

void clignoter()
{
      for(int i = 0; i<=255;i+=1){
      if(i<155){
        timer = 5;
      }else{
        timer = 3;
      }
       analogWrite(led1_Pin, i);
       analogWrite(led2_Pin, i);
       delay(timer);
    }
    for(int i = 254; i>0;i-=1){
       if(i<155){
         timer = 5;
       }else{
        timer = 3;
       }
       analogWrite(led1_Pin, i);
       analogWrite(led2_Pin, i);
       delay(timer);
    }
    delay(100);
}


// setup 
void setup(){
    pinMode(led2_Pin, OUTPUT);
    pinMode(led1_Pin, OUTPUT);
}

// main loop 
void loop(){
  clignoter();
}
