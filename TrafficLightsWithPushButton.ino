int red = 10;
int yellow = 9;
int green = 8;

void setup(){
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}
void loop(){
    if (digitalRead(button) == HIGH){
        delay(15); // software debounce
        if (digitalRead(button) == HIGH) {
            // if the switch is HIGH, ie. pushed down - change the lights!
            changeLights();
            delay(15000); // wait for 15 seconds
        }
    }
}
}

void changeLights(){
    // green off, yellow on for 3 seconds
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(3000);

    // turn off yellow, then turn red on for 5 seconds
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(5000);

    // turn off red and yellow, then turn on green
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(3000);
}
