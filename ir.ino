//SENSOR
const int IR_D = 6;
const int IR_E = 7;

//MOTOR DRETA
const int IN1 = 3;
const int IN2 = 5;

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

}

void up(){
//motro dreta
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
//motor esquerra
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
}

void down(){
//motro dreta
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
//motor esquerra
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
}

void right(){
//motro dreta
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
//motor esquerra
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);

}
void left(){
//motro dreta
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
//motro izquierda
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
}

void stop(){
//motro dreta
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
//motor esquerra
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
}

void loop(){
int VALOR_D = digitalRead(IR_D);
int VALOR_E = digitalRead(IR_E);

if (comparar(VALOR_D, VALOR_E) == "r"){
  right();
}else if (comparar(VALOR_D, VALOR_E) == "l"){
  left();
}else{
  up();
  }
}
char comparar(int VALOR_D,int VALOR_E){
  if (VALOR_D == 1 || VALOR_E == 0){
    return "r";
  }else if (VALOR_D == 0 || VALOR_E == 1){
    return "l";
  }

}
