/* * Demo Boton LED
* MAIN
*
* El LED debe encenderse cuando se presione el botón y apagarse 
* cuando se vuelva a presionar.
*
* Version 1.0.0.1 Beta
* 
* 13/10/2015
*
* Anything change/use/copy of this code with no permission be penalyzed.
* 
* Copyright (c) 2015 RachSoft™
* All Rights Reserved
* 
* This product is protected by copyright and distributed under
* licenses restricting copying, distribution, and decompilation.
* Developed By Rachsoft™*/

int boton = 8;  //Pin del botón
int led = 4; // Pin del LED
int estado = 0; // Estado del botón
int salida = 0; // 0 LED Encendido; 1 LED Apagado
int estadoAnterior = 0; //Estado anterior del boton

void setup() {
  pinMode(boton, INPUT);  //Declaramos el boton como una entrada
  pinMode(led, OUTPUT);   //Declaramos el LED como salida
}

void loop() {
  estado = digitalRead(boton);  //Asigna el valor del boton al estado

  if((estado == HIGH) && (estadoAnterior == LOW)){
    salida = 1 - salida;
    delay(50);
  }

  estadoAnterior = estado;

  if(salida == 0){
    digitalWrite(led, HIGH);   //Apaga el LED
  } else {
    digitalWrite(led, HIGH);  //Enciende el LED
  }
}
