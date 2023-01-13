<h1 style="text-align:center;color:rgb(30, 161, 179)">
    Portions de Code
</h1>

# <em style="font-style:normal;color:orange"> Variation luminosité leds </em>

![leds](img/leds.gif)

## Leds 

- Annode : patte longe, connectée du côté du port numérique
- Cathode : patte courte, connectée à la masse

## Connections 

- pin 6 -> led 1 (cathode, patte courte = branché direction à la masse) -> resistance 220 ohm -> masse | GND
- pin 5 -> led 2 (cathode, patte courte = branché direction à la masse) -> resistance 220 ohm -> masse | GND

## Code 

```c++
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
```

# <em style="font-style:normal;color:orange"> Servo moteur </em>

## Servomoteur 

- orange = signal 
- rouge = +5v
- noir / brun = gnd

## Connections 




## Code 

```c++

```