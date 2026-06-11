//Importando a biblioteca do Servomotor
#include <Servo.h>

//Instanciando um objeto chamado Servo
Servo servo;

//Crio uma função que inicializa os pino e componentes
void setup () {
  Serial.begin(9600); //Velocidade de comunicação
//9600 bites por segundo
    servo.attach(3);//Pino onde ligamos o sinal do servidor do Servermotor no PWM (~)
};
//Crio uma função que se repete infinitamente
void loop () {;
  servo.write(180);
  delay(1000);
  servo.write(0);
  delay(1000);          
              
	for (int posicao = 0; posicao <= 180; posicao ++){
	servo.write(posicao);
	Serial.println(posicao);
	delay(30);
    };
};