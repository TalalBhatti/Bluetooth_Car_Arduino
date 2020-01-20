const int IN1 = 12;
const int IN2 = 10;
const int enA = 11;
const int IN3 = 5;
const int IN4 = 4;
const int enB = 3;

byte serialA;
void setup() {
  
 Serial.begin(9600);

    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(enA, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    pinMode(enB, OUTPUT);

}

void loop() {

if (Serial.available() > 0) {serialA = Serial.read();Serial.println(serialA);}

   switch (serialA) {
    // forward
   case 'F':
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW); 
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        digitalWrite(enA, HIGH);
        digitalWrite(enB, HIGH);
        break; 
        
         // left
    case 'L':
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW); 
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        digitalWrite(enA, HIGH);
        digitalWrite(enB, LOW);
        break; 
        
    // right
    case 'R':
        digitalWrite(IN1, LOW); 
        digitalWrite(IN2, HIGH); 
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        digitalWrite(enA, LOW);
        digitalWrite(enB, HIGH);
        break; 
       
    // forward left
    case 'G':
        digitalWrite(IN1, HIGH); 
        digitalWrite(IN2, LOW); 
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        digitalWrite(enA, HIGH);
        digitalWrite(enB, HIGH);
        break; 
    

    // forward right
    case 'I':
        digitalWrite(IN1, LOW); 
        digitalWrite(IN2, LOW); 
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        digitalWrite(enA, HIGH);
        digitalWrite(enB, HIGH);
        break; 
    

    // backward left
    case 'H':
        digitalWrite(IN1, HIGH); 
        digitalWrite(IN2, LOW); 
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        digitalWrite(enA, HIGH);
        digitalWrite(enB, HIGH);
        break; 
    
    // backward right
    case 'J':
        digitalWrite(IN1, LOW); 
        digitalWrite(IN2, HIGH); 
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        digitalWrite(enA, HIGH);
        digitalWrite(enB, HIGH);
        break; 
    
    // backward
    case 'B':
        digitalWrite(IN1, LOW); 
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        digitalWrite(enA, HIGH);
        digitalWrite(enB, HIGH);
        break; 
    
     // Stop
     case 'S':
        digitalWrite(IN1, LOW); 
        digitalWrite(IN2, LOW); 
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        digitalWrite(enA, LOW);
        digitalWrite(enB, LOW); }
    
    }
