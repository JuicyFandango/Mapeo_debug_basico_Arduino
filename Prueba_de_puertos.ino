//Delay de impresión
int delayVal = 500;

void setup() {
  Serial.begin(9600);
  Serial.println("      Lectura de entradas       ");
  Serial.println("================================");

  // Entradas análogas
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);

  // Entradas digitales
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  //Lectura Digital
  Serial.println("================================");
  Serial.println("====== Entradas digitales ======");
  Serial.println("================================");
  for( int i = 1 ; i < 13 ; i++ ){
    Serial.print('D');
    Serial.print(i);
    Serial.print(':');
    Serial.println(digitalRead(i));
  }
  
  Serial.println("================================");
  Serial.println("====== Entradas anàlogas  ======");
  Serial.println("================================");
  for( int i = 1 ; i < 5 ; i++ ){
    Serial.print('A');
    Serial.print(i);
    Serial.print(':');
    Serial.println(analogRead(i));
  }
  Serial.println("================================");
  //
  delay(delayVal);
}
