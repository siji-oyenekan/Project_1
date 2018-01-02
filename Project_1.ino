int buttons[] = {2, 3, 4, 5, 6}; // array of pins thagt the buttons will be attached to
const int led = 10; // the pin attached to the led
int brightness = 255; //brightnesss out of 255
int newbrightness ;
int change = 51;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  for (int i = 2; i < 6; i++) // for loop to set all of the buttons in the array to inputs using the pullup resistor in the arduino board
  { 
    pinMode(buttons[i], INPUT_PULLUP);
  }
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite( led, 255); // sets the led to brightness of 0
  high();
  brightness = newbrightness;
  println(brightness);
}

void high() {
  for (int i = 0; i < 6; i++) {
    if (buttons[i] == LOW)
    {
      newbrightness = brightness - change;
    }
  }
}

