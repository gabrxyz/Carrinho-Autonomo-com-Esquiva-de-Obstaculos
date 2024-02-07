#Carrinho Autônomo com Esquiva de Obstáculos

Este é um projeto de um carrinho autônomo capaz de evitar obstáculos utilizando um sensor ultrassônico e um servo motor. O carrinho é controlado por um Arduino e equipado com dois motores de corrente contínua, um para cada roda, permitindo movimentação independente.
Componentes Utilizados

    Arduino Uno
    Sensor Ultrassônico HC-SR04
    Servo Motor SG90
    Dois motores de corrente contínua
    Chassi para carrinho com rodas
    Bateria para alimentação

#Funcionamento

O carrinho se move para frente até detectar um obstáculo a uma distância inferior a 40 cm. Nesse momento, o servo motor gira para varrer o ambiente em busca de obstáculos. O carrinho se move na direção com maior distância livre, evitando colisões.