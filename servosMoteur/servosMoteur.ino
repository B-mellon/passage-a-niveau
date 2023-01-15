#include <Servo.h>
Servo servos_barrieres;
#define portArduino_Barrieres 3
#define angleOuvert 0
#define angleFerme 90


void ouvrir(){
  servos_barrieres.write(angleOuvert);
}
void fermer(){
  servos_barrieres.write(angleFerme);
}


void setup(){
  servos_barrieres.attach(portArduino_Barrieres);
} 

void loop(){
  ouvrir();
  delay(1000);
  fermer();
  delay(1000);
}
