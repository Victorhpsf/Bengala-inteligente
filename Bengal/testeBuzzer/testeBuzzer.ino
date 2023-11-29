#include <Ultrasonic.h>   //Carrega a biblioteca Ultrasonic  
//#include <NewTone.h>    //Carrega a biblioteca Newtone  
   
// Define os pinos do sensor ultrassônico
const int trigPin = 13;  // Pino de disparo (Trigger)(Primeiro sensor)
const int trigPin1 = 11; // Pino de disparo (Trigger)(Segundo sensor)
const int echoPin = 12;  // Pino de eco (Echo)(Primeiro sensor)
const int echoPin1 = 10; // Pino de eco (Echo)(Segundo sensor)
const int buzzerPin = 9; // Altere o número do pino conforme necessário



//Dados do buzzer  
int frequencia = 2000;   
int Pinofalante = 2;   
    
int atraso = 1000;  
   

//Inicializa o sensor ultrasonico  
Ultrasonic ultrasonic(trigPin, echoPin);   
   
void setup()  
{  
  pinMode(Pinofalante,OUTPUT); //Pino do buzzer   
  Serial.begin(9600); //Inicializa a serial  
}  
   
void loop()  
{  
  float cmMsec, inMsec;  
    
  //Le os dados do sensor, com o tempo de retorno do sinal  
  long microsec = ultrasonic.timing();   
   
  //Calcula a distancia em centimetros  
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);   
    
  //Ajusta o atraso de acordo com a distancia  
  if (cmMsec > 80)  
  {  
    atraso = 2000;  
  }  
  else if (cmMsec >50 && cmMsec<80)  
  {  
    atraso = 1500;  
  }  
  else if (cmMsec >30 && cmMsec<50)  
  {  
    atraso = 1200;  
  }  
  else if (cmMsec > 10 && cmMsec < 30)  
  {  
    atraso = 700;  
  }  
  else if (cmMsec < 10)  
  {  
    atraso = 300;  
  }  
     
  //Apresenta os dados, em centimetros, na Serial  
  Serial.print("Cent: ");  
  Serial.print(cmMsec);  
  Serial.print(" atraso : ");  
  Serial.println(atraso);  
  //Emite o bip  
  //NewTone(Pinofalante, frequencia, tempo);  // remover essa merda aqui 
   
   
  delay(atraso);  
} 
