
int trig1 = 13;
int echo1 = 12;
int trig2 = 4;
int echo2 = 3;
int piezo = 11;

int distancia1 = 0;
int duracao1 = 0;
int distancia2 = 0;
int duracao2 = 0;
 
void setup () {
  Serial.begin (9600);
  pinMode(echo1,INPUT);
  pinMode(trig1, OUTPUT);
  pinMode(trig2,OUTPUT);
  pinMode(piezo, OUTPUT);
  pinMode(echo2, INPUT);
}
void loop (){// distancia para o sensor 1
  digitalWrite(trig1,LOW);
  delay(200);
  digitalWrite(trig1,HIGH);
  delay(100);
  digitalWrite(trig1, LOW);// desliga 
  duracao1 = pulseIn(echo1,HIGH);
  distancia1 = duracao1 * 0.017;
    
    // distancia do sensor 2
  digitalWrite(trig2,LOW);
  delay(200);
  digitalWrite(trig2,HIGH);
  delay(100);
  digitalWrite(trig2, LOW);
  duracao1 = pulseIn(echo2,HIGH);
  distancia2 = duracao2 * 0.017;
  
    // para aparecer no monitor serial e controlar a distancia
    Serial.print(distancia1);
    Serial.print("//");
    Serial.println(distancia2);
  
  
    
  //---------------------- SENSOR 1!!------------
   if (90<=distancia1 && 60< distancia1)
  { 
    for(int i=1; i<=6; i++)// repete-> laço//for (inicialização; condição; incremento) {
    {
      tone(piezo,440,300);// toca o buzzer(portinha, dó, 300ms)
      delay(200);
      noTone(piezo);
      delay(200);
      //sensor 2
      digitalWrite(trig2, HIGH);
      delay(200);
      digitalWrite(trig2, LOW);
      duracao2 = pulseIn(echo2, HIGH);
      distancia2 = duracao2 * 0.017;
    }
   }
  // repete o mesmo processo para as demais distâncias
if (60<=distancia1 && 30< distancia1)
  { 
    for(int i=1; i<=6; i++)// repete-> laço//for (inicialização; condição; incremento) {
    {
      tone(piezo,352,300);// toca o buzzer(portinha,fá, 300ms)
      delay(200);
      noTone(piezo);// não apita
      delay(200);
      //sensor 2
      digitalWrite(trig2, HIGH);
      delay(200);
      digitalWrite(trig2, LOW);
      duracao2 = pulseIn(echo2, HIGH);
      distancia2 = duracao2 * 0.017;
    }
   }
  if  (distancia1<=30 && distancia1>5)
  { 
    for(int i=1; i<=6; i++)// repete-> laço//for (inicialização; condição; incremento) {
    {
      tone(piezo,396,300);// toca o buzzer(portinha,sol, 300ms)
      delay(200);
      noTone(piezo);// não apita
      delay(200);
      //sensor 2
      digitalWrite(trig2, HIGH);
      delay(200);
      digitalWrite(trig2, LOW);
      duracao2 = pulseIn(echo2, HIGH);
      distancia2 = duracao2 * 0.017;
    }
   }
   if  (distancia1=5)
  { 
    for(int i=1; i<=6; i++)// repete-> laço//for (inicialização; condição; incremento) {
    {
      tone(piezo,440,300);// toca o buzzer(portinha,lá, 300ms)
      delay(200);
      noTone(piezo);// não apita
      delay(200);
      //sensor 2
      digitalWrite(trig2, HIGH);
      delay(200);
      digitalWrite(trig2, LOW);
      duracao2 = pulseIn(echo2, HIGH);
      distancia2 = duracao2 * 0.017;
    }
   }
  //----------------------SENSOR 2----------------
  
   if (90<=distancia2 && 60< distancia2)
  { 
    for(int i=1; i<=6; i++)// repete-> laço//for (inicialização; condição; incremento) {
    {
      tone(piezo,264,300);// toca o buzzer(portinha, dó, 300ms)
      delay(200);
      noTone(piezo);
      delay(200);
      //sensor 2
      digitalWrite(trig1, HIGH);
      delay(200);
      digitalWrite(trig1, LOW);
      duracao1 = pulseIn(echo1, HIGH);
      distancia1 = duracao1 * 0.017;
    }
   }
   // repete o mesmo processo para as demais distâncias
if (60<=distancia2 && 30< distancia2)
  { 
    for(int i=1; i<=6; i++)// repete-> laço//for (inicialização; condição; incremento) {
    {
      tone(piezo,352,300);// toca o buzzer(portinha,fá, 300ms)
      delay(200);
      noTone(piezo);// não apita
      delay(200);
      //sensor 2
      digitalWrite(trig1, HIGH);
      delay(200);
      digitalWrite(trig1, LOW);
      duracao1 = pulseIn(echo1, HIGH);
      distancia1 = duracao1 * 0.017;
    }
   }
  
   if  (distancia2<=30 && distancia2>5)
  { 
    for(int i=1; i<=6; i++)// repete-> laço//for (inicialização; condição; incremento) {
    {
      tone(piezo,396,300);// toca o buzzer(portinha,sol, 300ms)
      delay(200);
      noTone(piezo);// não apita
      delay(200);
      //sensor 2
      digitalWrite(trig1, HIGH);
      delay(200);
      digitalWrite(trig1, LOW);
      duracao1 = pulseIn(echo1, HIGH);
      distancia1 = duracao1 * 0.017;
    }
   }
  
   if  (distancia2=5)
  { 
    for(int i=1; i<=6; i++)// repete-> laço//for (inicialização; condição; incremento) {
    {
      tone(piezo,440,300);// toca o buzzer(portinha,lá, 300ms)
      delay(200);
      noTone(piezo);// não apita
      delay(200);
      //sensor 2
      digitalWrite(trig1, HIGH);
      delay(200);
      digitalWrite(trig1, LOW);
      duracao1 = pulseIn(echo1, HIGH);
      distancia1 = duracao1 * 0.017;
    }
   }
}
  
