<h1 style="text-align:center;color:rgb(30, 161, 179)">
    Portions de Code
</h1>

# <em style="font-style:normal;color:orange"> Variation luminosité leds </em>

## Connections 

- pin 6 -> led 1 -> resistance 220 ohm -> masse 
- pin 5 -> led 2 -> resistance 220 ohm -> masse 

## Code 

```c++
#define led2_Pin 6
#define led1_Pin 5
#define timer 5

// setup 
void setup(){
    pinMode(led2_Pin, OUTPUT);
    pinMode(led1_Pin, OUTPUT);
}

// main loop 
void loop(){
    for(int i = 0; i<=255;i+=1){
       analogWrite(led1_Pin, i);
       analogWrite(led2_Pin, i);
       delay(timer);
    }
    delay(100);
    for(int i = 254; i>0;i-=1){
       analogWrite(led1_Pin, i);
       analogWrite(led2_Pin, i);
       delay(timer);
    }
}
```

# <em style="font-style:normal;color:orange"> Servo moteur </em>

## Connections 


## Code 

```c++
void lo
```