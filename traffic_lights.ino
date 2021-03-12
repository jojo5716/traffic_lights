# define CAR_RED 4
# define CAR_YELLOW 3
# define CAR_GREEN 2

# define PERSON_RED 9
# define PERSON_GREEN 8


void setup() {
  // put your setup code here, to run once:
  pinMode(CAR_RED, OUTPUT);
  pinMode(CAR_YELLOW, OUTPUT);
  pinMode(CAR_GREEN, OUTPUT);
  
  pinMode(PERSON_RED, OUTPUT);
  pinMode(PERSON_GREEN, OUTPUT);
}

void loop() {
  digitalWrite(CAR_RED, HIGH);
  digitalWrite(PERSON_GREEN, HIGH);
  delay(5000);

  // Person Warning Stop
  Person_Warning_Stop();

  // Car Start
  digitalWrite(CAR_RED, LOW);
  digitalWrite(CAR_GREEN, HIGH);
  digitalWrite(PERSON_RED, HIGH);
  delay(4000);

  Car_Warning_Stop();
  
  digitalWrite(CAR_YELLOW, HIGH);
  digitalWrite(PERSON_RED, HIGH);
  delay(1500);

  digitalWrite(CAR_YELLOW, LOW);
  digitalWrite(CAR_RED, HIGH);
  delay(2000);

  digitalWrite(PERSON_RED, LOW);
  delay(200);
  // [END] Car Start
}

void Person_Warning_Stop(){
  for (int i = 0; i <= 5; i ++) {
    digitalWrite(CAR_RED, HIGH);
    digitalWrite(PERSON_GREEN, LOW);
    delay(200);
    
    digitalWrite(CAR_RED, HIGH);
    digitalWrite(PERSON_GREEN, HIGH);
    delay(200);
  }
  
  digitalWrite(CAR_RED, HIGH);
  digitalWrite(PERSON_GREEN, LOW);
  digitalWrite(PERSON_RED, HIGH);
  delay(1000);
}

void Car_Warning_Stop() {
  for (int i = 0; i <=5; i++) {
    digitalWrite(CAR_GREEN, HIGH);
    digitalWrite(PERSON_RED, HIGH);
    delay(200);
    
    digitalWrite(CAR_GREEN, LOW);
    digitalWrite(PERSON_RED, HIGH);
    delay(200);
  }
}