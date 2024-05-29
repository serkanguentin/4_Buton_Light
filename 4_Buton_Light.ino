/*
When I press the button, the light will turn on.
When I press it a second time, the light will turn off.

*/

#define Buton 8
#define Ledpin 10

int butonState = 0;

void setup() {

  pinMode(Buton, INPUT);
  pinMode(Ledpin, OUTPUT);


}

void loop() {

  
 
  if(digitalRead(Buton) == 1){
    butonState = !butonState;
    while(digitalRead(Buton) == 1){
      delay(100);
    }
    digitalWrite(Ledpin,butonState);
  }
 
}
