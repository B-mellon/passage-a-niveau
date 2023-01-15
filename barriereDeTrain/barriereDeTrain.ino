/*
---------------- Passage à niveau automatique ----------------
    _________
    |  _  |    __
    | | | |____\/_     @Out : 2 leds, 2 servomoteurs 
    | |_| |       \      @In : 4 capteurs  
    | __  |  _  _  |
    |/  \_|_/ \/ \/   @author :
     \__/   \_/\_/  https://github.com/B-mellon

--------------------------------------------------------------
*/ 

/* Servo moteur */
#include <Servo.h>
Servo servos_barrieres;
#define portArduino_Barrieres 3
#define angleOuvert 0
#define angleFerme 90

/* Leds */
#define led2_Pin 6
#define led1_Pin 5
int timer = 5;
#define nombreClignotement 3


/* fonctions */ 
void clignoter()
{
    for(int count=1; count<=nombreClignotement; ++count){
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
      if(count < nombreClignotement){
        for(int i = 254; i>=0;i-=1){
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
    }
}

void ouvrir(){
    /*
    analogWrite(led1_Pin, 255);
    analogWrite(led2_Pin, 255);
    */
    servos_barrieres.write(angleOuvert);
    delay(500);
    analogWrite(led1_Pin, 0);
    analogWrite(led2_Pin, 0);

}
void fermer(){
    /*
    analogWrite(led1_Pin, 0);
    analogWrite(led2_Pin, 0);
    */
    clignoter();
    delay(1000);
    servos_barrieres.write(angleFerme);
}

/*  setup et boucle principale */
void setup(){
    servos_barrieres.attach(portArduino_Barrieres);
    pinMode(led2_Pin, OUTPUT);
    pinMode(led1_Pin, OUTPUT);
} 

void loop(){
  ouvrir();
  delay(5000);
  fermer();
  delay(5000);
}