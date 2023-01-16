#include <IRremote.h>

IRrecv irrecv(7);

decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(13, OUTPUT);
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    if (results.value == 0x20DF02FD){
      digitalWrite(13, LOW);
      }
    if (results.value == 0x20DF827D){
      digitalWrite(13, HIGH);
      }
    irrecv.resume(); // Receive the next value
    
  }
}
