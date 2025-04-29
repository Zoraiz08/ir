const int IR = 3;


void setup() {
  pinMode(IR, INPUT);
  Serial.begin(9600);

}

void loop() {
  int valor = digitalRead(IR);
  Serial.println(valor);

}
