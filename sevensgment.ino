int sequence[][7] = {
    {1,1,1,1,1,1,0}, // 0
    {0,1,1,0,0,0,0}, // 1
    {1,1,0,1,1,0,1}, // 2
    {1,1,1,1,0,0,1}, // 3
    {0,1,1,0,0,1,1}, // 4
    {1,0,1,1,0,1,1}, // 5
    {1,0,1,1,1,1,1}, // 6
    {1,1,1,0,0,0,0}, // 7
    {1,1,1,1,1,1,1}, // 8
    {1,1,1,1,0,1,1}, // 9
    {1,1,1,0,1,1,1}, // A
    {0,0,1,1,1,1,1}, // b
    {1,0,0,1,1,1,0}, // C
    {0,1,1,1,1,0,1}, // d
    {1,0,0,1,1,1,1}, // E
    {1,0,0,0,1,1,1}  // F
};

void printNumber(int number) {
    for(int i=0; i<7; i++) {
        digitalWrite(i+1, sequence[number][i]);
    }
}

void setup() {
    for(int i=1; i<=7; i++) {
        pinMode(i, OUTPUT);
    }
}

void loop() {
    for(int i=0; i<16; i++) {
        printNumber(i);
        delay(1000);
    }
}