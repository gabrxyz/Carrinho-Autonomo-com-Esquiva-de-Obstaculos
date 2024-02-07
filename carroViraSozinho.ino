#include <Ultrasonic.h>
#include <Servo.h>

Ultrasonic ultrasonic(12, 13);
Servo servo;

int motorE = 2;
int motorD = 3;
int distancia;

// até agora não usei p nada
int posicaoServo;

// Var que lerá para qual percurso o carrinho deve ir

int distanciaSensorE;
int distanciaSensorD;

void setup() {
    servo.attach(11);
    pinMode(motorE, OUTPUT);
    pinMode(motorD, OUTPUT);
    
    Serial.begin(9600);
}

void loop() {
    distancia = ultrasonic.read(); // por padrão em CM
    posicaoServo = servo.read(); // entre 0 e 180
    servo.write(90);


    digitalWrite(motorE, HIGH);
    digitalWrite(motorD, HIGH);


    // se a distancia for menor que 40 CM vai exeacutar outro if que 
    // irá mover o servo para a esquerda, ler a distancia, depois mover para a direita e ler a distancia
    // ele irá na direção da maior distancia 

    if (distancia < 40) {

      digitalWrite(motorE, LOW);
      digitalWrite(motorD, HIGH);

            // codigo para mover o servo e com o sensor ler a distancia

            servo.write(0);
            distanciaSensorE = ultrasonic.read();
    delay(500);
            servo.write(180); 
            distanciaSensorD = ultrasonic.read();

            // aqui está o codigo que verifica qual distancia é maior

          if ( distanciaSensorE > distanciaSensorD ) {
 
              servo.write(90);
              digitalWrite(motorE, LOW);
              digitalWrite(motorD, HIGH);
              

          } else {
  
              servo.write(90);
              digitalWrite(motorE, HIGH);
              digitalWrite(motorD, LOW);
              

          }

  delay(15);

}