#include <Arduino.h>

/*-----------Constantes----------------------*/
const int tempo_do_led1_ms=250,
          tempo_do_led2_ms=500,
          tempo_do_led3_ms=1000;

/*-------------Mapeamento de Hardware--------*/
#define led1 5
#define led2 21
#define led3 22

/*-------------Variávei Globais-------------*/
int tempo_atual_led1=0,
    tempo_atual_led2=0,
    tempo_atual_led3=0;

/*------------Configurações iniciais--------*/
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);

  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
}


/*--------------Loop Infinito--------------*/
void loop() {
  if ((millis()-tempo_atual_led1)>=tempo_do_led1_ms)
  {
  digitalWrite(led1,!digitalRead(led1));
  tempo_atual_led1=millis();
  }
  if ((millis()-tempo_atual_led2)>=tempo_do_led2_ms)
  {
  digitalWrite(led2,!digitalRead(led2));
  tempo_atual_led2=millis();
  }
  if ((millis()-tempo_atual_led3)>=tempo_do_led3_ms)
  {
  digitalWrite(led3,!digitalRead(led3));
  tempo_atual_led3=millis();
  }
}