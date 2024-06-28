// Below is the constants for the inputs coming from the receiver
#define CAR_LIGHTS_INPUT A0

// Below is the cosntants for the output pins of the LEDS
#define RIGHT_BRAKE_LIGHTS_OUTPUT 2
#define LEFT_BRAKE_LIGHTS_OUTPUT 3
#define RIGHT_FRONT_LIGHTS_OUTPUT 4
#define LEFT_FRONT_LIGHTS_OUTPUT 5

// Variables will change:
int buttonState = 0;         // current state of the button

void setup() {
  // put your setup code here, to run once:
  pinMode(CAR_LIGHTS_INPUT, INPUT);
  
  pinMode(RIGHT_BRAKE_LIGHTS_OUTPUT, OUTPUT);
  pinMode(LEFT_BRAKE_LIGHTS_OUTPUT, OUTPUT);
  pinMode(RIGHT_FRONT_LIGHTS_OUTPUT, OUTPUT);
  pinMode(LEFT_FRONT_LIGHTS_OUTPUT, OUTPUT);
    
  Serial.begin(9600);
}

void loop() {
  // read the pushbutton input pin:
  buttonState = analogRead(CAR_LIGHTS_INPUT);
  
    // if the state has changed, increment the counter
    if (buttonState > 200) {
      digitalWrite(RIGHT_BRAKE_LIGHTS_OUTPUT, HIGH);
      digitalWrite(LEFT_BRAKE_LIGHTS_OUTPUT, HIGH);   
      digitalWrite(RIGHT_FRONT_LIGHTS_OUTPUT, HIGH); 
      digitalWrite(LEFT_FRONT_LIGHTS_OUTPUT, HIGH);
    } else {
      digitalWrite(RIGHT_BRAKE_LIGHTS_OUTPUT, LOW);
      digitalWrite(LEFT_BRAKE_LIGHTS_OUTPUT, LOW);   
      digitalWrite(RIGHT_FRONT_LIGHTS_OUTPUT, LOW); 
      digitalWrite(LEFT_FRONT_LIGHTS_OUTPUT, LOW);
    }
}
