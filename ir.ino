//SENSOR
const int IR_D = 6;
const int IR_E = 7;

//MOTOR DRETA
const int IN1 = 5;
const int IN2 = 3;

//MOTOR ESQUERRA
const int IN3 = 9;
const int IN4 = 10;

//ON/OFF
const int EEP = 4;

void setup(){
//PIN DEL MOTORS --> SORTIDA
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
pinMode(EEP, OUTPUT);

//PIN DEL SENSOR --> ENTRADA
pinMode(IR_D, INPUT);
pinMode(IR_E, INPUT);
//DRIVER --> ON
digitalWrite(EEP, HIGH);

Serial.begin(9600);

}
int velocidad = 170;

void up(){
//motro dreta
analogWrite(IN1, velocidad);
analogWrite(IN2, 0);
//motor esquerra
analogWrite(IN3, velocidad);
analogWrite(IN4, 0);
}

void down(){
//motro dreta
analogWrite(IN1, 0);
analogWrite(IN2, velocidad);
//motor esquerra
analogWrite(IN3, 0);
analogWrite(IN4, velocidad);
}

void right(){
//motro dreta
analogWrite(IN1, 0);
analogWrite(IN2, velocidad);
//motor esquerra
analogWrite(IN3, 0);
analogWrite(IN4, 0);

}
void left(){
//motro dreta
analogWrite(IN1, 0);
analogWrite(IN2, 0);
//motro izquierda
analogWrite(IN3, 0);
analogWrite(IN4, velocidad);
}

void stop(){
//motro dreta
analogWrite(IN1, 0);
analogWrite(IN2, 0);
//motor esquerra
analogWrite(IN3, 0);
analogWrite(IN4, 0);
}

void loop(){
int VALOR_D = digitalRead(IR_D);
int VALOR_E = digitalRead(IR_E);

Serial.print("E:");
Serial.print(VALOR_E);
Serial.print(" d:");
Serial.print(VALOR_D);

if (VALOR_D > VALOR_E){

  right();
  Serial.println("r");
}else if (VALOR_D < VALOR_E){
  left();
  Serial.println("l");
}else{
  up();
  Serial.println("u");
  }
}
