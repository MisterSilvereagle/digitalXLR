// use library to calculate CRC checks
#include <CRC.h>

// define clock and data pins
#define XLR_CLK  2
#define XLR_DATA 3

#define MODE 0 // 0 = send, 1 = receive

void setup() {
  // set pin modes depending on mode.
  #if MODE == 0
    pinMode(XLR_CLK, OUTPUT);
    pinMode(XLR_DATA, OUTPUT);
  #else
    pinMode(XLR_CLK, INPUT);
    pinMode(XLR_DATA, INPUT);
  #endif
  
    
}

void loop() {
  // put your main code here, to run repeatedly:

}
