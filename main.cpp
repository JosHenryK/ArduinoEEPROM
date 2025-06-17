#include <EEPROM.h>

#define EEPROMSize 1024 //Max 1kB

#define A0 8
#define A1 9
#define A2 10
#define A3 11
#define A4 12
#define A5 13
#define A6 14
#define A7 15
#define A8 16
#define A9 17

#define D0 0
#define D1 1
#define D2 2
#define D3 3
#define D4 4
#define D5 5
#define D6 6
#define D7 7

void setup() {
    pinMode(A0, INPUT);
    pinMode(A1, INPUT);
    pinMode(A2, INPUT);
    pinMode(A3, INPUT);
    pinMode(A4, INPUT);
    pinMode(A5, INPUT);
    pinMode(A6, INPUT);
    pinMode(A7, INPUT);
    pinMode(A8, INPUT);
    pinMode(A9, INPUT);

    pinMode(D0, OUTPUT);
    pinMode(D1, OUTPUT);
    pinMode(D2, OUTPUT);
    pinMode(D3, OUTPUT);
    pinMode(D4, OUTPUT);
    pinMode(D5, OUTPUT);
    pinMode(D6, OUTPUT);
    pinMode(D7, OUTPUT);
}

void loop() {
    address = B0000000000;
    for(int i = 0 ; i < 10 ; i++) {
        address = bitWrite(address, i, digitalRead(A0 + i));
    }
    PORTD = EEPROM.get(int(address));
}