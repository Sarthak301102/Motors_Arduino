// Motor Driver 1
// Motor A connections
int in1_1 = 4;
int in2_1 = 7;
// Motor B connections
int in3_1 = 10;
int in4_1 = 11;

// Motor Driver 2
// Motor C connections
int in1_2 = 12;
int in2_2 = 13;
// Motor D connections
int in3_2 = 0;
int in4_2 = 1;

// char b;

void setup() {
	pinMode(in1_1, OUTPUT);
	pinMode(in2_1, OUTPUT);
	pinMode(in3_1, OUTPUT);
	pinMode(in4_1, OUTPUT);

	pinMode(in1_2, OUTPUT);
	pinMode(in2_2, OUTPUT);
	pinMode(in3_2, OUTPUT);
	pinMode(in4_2, OUTPUT);
	
	// Turn off motors - Initial state
	digitalWrite(in1_1, LOW);
	digitalWrite(in2_1, LOW);
	digitalWrite(in3_1, LOW);
	digitalWrite(in4_1, LOW);

	digitalWrite(in1_2, LOW);
	digitalWrite(in2_2, LOW);
	digitalWrite(in3_2, LOW);
	digitalWrite(in4_2, LOW);

  // Serial.begin(9600);
}

// m: A,B cw
// n: A,B acw
// o: C,D cw
// p: C,D acw

void loop() {
  // b = Serial.read();
	directionControl();
	delay(1000);
}

// Control spinning direction of motors
void directionControl() {

	// Turn on motors -- 1010
	digitalWrite(in1_1, HIGH);
	digitalWrite(in2_1, LOW);
	digitalWrite(in3_1, HIGH);
	digitalWrite(in4_1, LOW);

	digitalWrite(in1_2, HIGH);
	digitalWrite(in2_2, LOW);
	digitalWrite(in3_2, HIGH);
	digitalWrite(in4_2, LOW);

	delay(2000);
	
	// Flip directions -- 0101
	digitalWrite(in1_1, LOW);
	digitalWrite(in2_1, HIGH);
	digitalWrite(in3_1, LOW);
	digitalWrite(in4_1, HIGH);

	digitalWrite(in1_2, LOW);
	digitalWrite(in2_2, HIGH);
	digitalWrite(in3_2, LOW);
	digitalWrite(in4_2, HIGH);

	delay(2000);
	
	// Turn off motors -- 0000
	digitalWrite(in1_1, LOW);
	digitalWrite(in2_1, LOW);
	digitalWrite(in3_1, LOW);
	digitalWrite(in4_1, LOW);
  // Turn off motors -- 0000
	digitalWrite(in1_2, LOW);
	digitalWrite(in2_2, LOW);
	digitalWrite(in3_2, LOW);
	digitalWrite(in4_2, LOW);
}