/* sample for digital weight scale of hx711
 * library design: Weihong Guan (@aguegu)
 * library host on
 *https://github.com/aguegu/ardulibs/tree/3cdb78f3727d9682f7fd22156604fc1e4edd75d1/hx711
 */
 // See original article and code / library link at http://arduinotronics.blogspot.com/2015/06/arduino-hx711-digital-scale.html

// Hx711.DOUT - pin #A3
// Hx711.SCK - pin #A2

#include <Hx711.h>
Hx711 scale(A3, A2);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(5*scale.getGram(), 1);
  Serial.println(" g");
  delay(200);
}
