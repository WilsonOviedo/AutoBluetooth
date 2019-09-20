#define IN1 5
#define IN2 6
#define IN3 9
#define IN4 10

char data = "w";

void setup() {
  Serial.begin(9600);

  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);

}

void loop() {
  if(Serial.available()>0){

      data=Serial.read();

      switch(data){
        case 'F':
        frente();
        break;

        case 'B':
        atras();
        break;

        case 'L':
        izquierda();
        break;
        
        case 'R':
        derecha();
        break;  
        
        case 'S':
        parar();
        break;       
        }
    }
}

void frente(){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  }
  void atras(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  }
  void izquierda(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  }
  void derecha(){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  }
  void parar(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  }
