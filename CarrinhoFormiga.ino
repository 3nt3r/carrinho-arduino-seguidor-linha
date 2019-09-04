#include <Wire.h>

const int sensor_dir = 2; 
const int sensor_esq = 4;
int Entrada1 = 11;
int Entrada2 = 12;
int Entrada3 = 10;
int Entrada4 = 9;

void frente(){
  digitalWrite(Entrada1, HIGH);
  digitalWrite(Entrada2, LOW);
  digitalWrite(Entrada3, LOW);
  digitalWrite(Entrada4, HIGH);  
}

void esquerda(){
  digitalWrite(Entrada1, LOW);
  digitalWrite(Entrada2, LOW);
  digitalWrite(Entrada3, HIGH);
  digitalWrite(Entrada4, LOW);  
}

void direita(){
  digitalWrite(Entrada1, LOW);
  digitalWrite(Entrada2, LOW);
  digitalWrite(Entrada3, HIGH);
  digitalWrite(Entrada4, LOW);
}

void tras(){
  digitalWrite(Entrada1, LOW);
  digitalWrite(Entrada2, HIGH);
  digitalWrite(Entrada3, HIGH);
  digitalWrite(Entrada4, LOW);
}

/*=======================================*/

void setup(){
  pinMode(sensor_dir, INPUT);
  pinMode(sensor_esq, INPUT);
  pinMode(Entrada1, OUTPUT);
  pinMode(Entrada2, OUTPUT);
  pinMode(Entrada3, OUTPUT);
  pinMode(Entrada4, OUTPUT);
}

/*=======================================*/

void loop(){
  bool estadoD = digitalRead(sensor_dir);
  bool estadoE = digitalRead(sensor_esq);

  if(estadoD){
    esquerda();
    delay(250);
  }else if(estadoE){
    direita();
    delay(250);
  }else{
    frente();
  }
}
