/* Definitions for the  LEDS, switches and potentiometer on the software serial Sheild
   author: nns
   created 15 Oct 2014
   modified 03 Nov 2019 LGT
*/
//Preprocessor port Definitions
//Hardware port definitions
#define LED_RED 3
#define LED_YELLOW 5
#define LED_PINK 6
#define LED_WHITE 9
#define LED_GREEN 10
#define LED_BLUE 11

#define EMU A1

#define SWITCH1 A4
#define SWITCH2 A5

#define POTENTIOMETER A0
//----------------------------------------------------------------------------
//Configuration of the LEDs, switches & Potentiometers 
void setup(){
  // initialize the digital pins as outputs.
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_PINK, OUTPUT);
  pinMode(LED_WHITE, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);

  // Open hardware serial communications and wait for port to open:
  Serial.begin(57600);
  Serial.println("Software serial LED test program");

  // now setup the switches
  pinMode(SWITCH1, INPUT_PULLUP);
  pinMode(SWITCH2, INPUT_PULLUP);

  // now setup the POTENTIOMETER
  pinMode(POTENTIOMETER, INPUT);
}
//-----------------------------------------------------------------------------
//ADD YOUR FUNCTIONS HERE
//Function setLEDs 
void setLEDs(boolean state ) {
  Serial.print("Set LEDs to");
  Serial.println(state);
  digitalWrite(LED_PINK, state);
  digitalWrite(LED_WHITE, state);
  digitalWrite(LED_GREEN, state);
  digitalWrite(LED_BLUE, state);
}
//Function blinkLEDs
void blinkLEDs(boolean state){
  Serial.print("Set LEDs to");
  Serial.println(state);
  digitalWrite(LED_PINK, state);
  digitalWrite(LED_WHITE, state);
  digitalWrite(LED_GREEN, state);
  digitalWrite(LED_BLUE, state);
}
//Function cycleLEDs
const int interval =200;
void cycleLEDs(boolean state){
  Serial.print("Set LEDs to");
  Serial.println(state);
  digitalWrite(LED_PINK, state);
  delay(interval);
  digitalWrite(LED_WHITE, state);
  delay(interval);
  digitalWrite(LED_GREEN, state);
  delay(interval);
  digitalWrite(LED_BLUE, state);
  delay(interval);
}
//Function manualControl & Better manual Control
void manualControl(){
  int myvalue =analogRead(POTENTIOMETER);
   if (myvalue >= 0 and myvalue <= 255){
      digitalWrite(LED_PINK,HIGH);
      digitalWrite(LED_WHITE,LOW);
      digitalWrite(LED_GREEN,LOW);
      digitalWrite(LED_BLUE, LOW);
    }
    if (myvalue >= 260 and myvalue <= 510){
      digitalWrite(LED_PINK,LOW);
      digitalWrite(LED_WHITE,HIGH);
      digitalWrite(LED_GREEN,LOW);
      digitalWrite(LED_BLUE, LOW);
    }
    if (myvalue >= 520 and myvalue <= 765){
       digitalWrite(LED_PINK,LOW);
      digitalWrite(LED_WHITE,LOW);
      digitalWrite(LED_GREEN,HIGH);
      digitalWrite(LED_BLUE, LOW);
    }
    if (myvalue >= 775 and myvalue <= 1023){
      digitalWrite(LED_PINK,LOW);
      digitalWrite(LED_WHITE,LOW);
      digitalWrite(LED_GREEN,LOW);
      digitalWrite(LED_BLUE, HIGH);
    }
  }
//------------------------------------------------------------------------------
//Main loop
void loop(){ 
  // run over and over :
  // check the state of a switch
  //For loop for cycleLEDs
  /*for(int i=0; i < 4; i++){
    int sw2 = digitalRead(SWITCH2);
    if(sw2 ==LOW){
      Serial.println("Switch 2 pressed");
      cycleLEDs(HIGH);
    }else{
      if(sw2 ==HIGH){
        Serial.println("Switch 2 is released");
        cycleLEDs(LOW);
      }
      break;
    }   
  }
*/
  //For loop for manualControl
  manualControl();
//---------------------------------------------------------------------------------
}
