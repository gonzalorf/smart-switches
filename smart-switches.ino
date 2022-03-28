unsigned long debounceDelay = 50;

unsigned long lastDebounceTime0 = 0;
unsigned long lastDebounceTime1 = 0;
unsigned long lastDebounceTime2 = 0;
unsigned long lastDebounceTime3 = 0;
unsigned long lastDebounceTime4 = 0;
unsigned long lastDebounceTime5 = 0;
unsigned long lastDebounceTime6 = 0;
unsigned long lastDebounceTime7 = 0;
unsigned long lastDebounceTime8 = 0;
unsigned long lastDebounceTime9 = 0;

int switchState0 = HIGH;
int switchState1 = HIGH;
int switchState2 = HIGH;
int switchState3 = HIGH;
int switchState4 = HIGH;
int switchState5 = HIGH;
int switchState6 = HIGH;
int switchState7 = HIGH;
int switchState8 = HIGH;
int switchState9 = HIGH;

bool switchDone0 = false;
bool switchDone1 = false;
bool switchDone2 = false;
bool switchDone3 = false;
bool switchDone4 = false;
bool switchDone5 = false;
bool switchDone6 = false;
bool switchDone7 = false;
bool switchDone8 = false;
bool switchDone9 = false;

int relayState0 = HIGH;
int relayState1 = HIGH;
int relayState2 = HIGH;
int relayState3 = HIGH;
int relayState4 = HIGH;
int relayState5 = HIGH;
int relayState6 = HIGH;
int relayState7 = HIGH;

void setup() {
  Serial.begin(9600);
  
  // switches
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);

  // relays
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  
}

void loop() {

  int reading = digitalRead(2);
  if (reading != switchState0) {
    lastDebounceTime0 = millis();
    switchState0 = reading;
  }
  if ((millis() - lastDebounceTime0) > debounceDelay) {    
      if (reading == LOW && switchDone0 == false) {
        relayState0 = !relayState0;
        switchDone0 = true;
      }
      if (reading == HIGH) {
        switchDone0 = false;
      }    
  }

  reading = digitalRead(3);
  if (reading != switchState1) {
    lastDebounceTime1 = millis();
    switchState1 = reading;
  }
  if ((millis() - lastDebounceTime1) > debounceDelay) {    
      if (reading == LOW && switchDone1 == false) {
        relayState1 = !relayState1;
        switchDone1 = true;
      }
      if (reading == HIGH) {
        switchDone1 = false;
      }    
  }

  reading = digitalRead(4);
  if (reading != switchState2) {
    lastDebounceTime2 = millis();
    switchState2 = reading;
  }
  if ((millis() - lastDebounceTime2) > debounceDelay) {    
      if (reading == LOW && switchDone2 == false) {
        relayState2 = !relayState2;
        switchDone2 = true;
      }
      if (reading == HIGH) {
        switchDone2 = false;
      }    
  }

  reading = digitalRead(5);
  if (reading != switchState3) {
    lastDebounceTime3 = millis();
    switchState3 = reading;
  }
  if ((millis() - lastDebounceTime3) > debounceDelay) {    
      if (reading == LOW && switchDone3 == false) {
        relayState3 = !relayState3;
        switchDone3 = true;
      }
      if (reading == HIGH) {
        switchDone3 = false;
      }    
  }

  reading = digitalRead(6);
  if (reading != switchState4) {
    lastDebounceTime4 = millis();
    switchState4 = reading;
  }
  if ((millis() - lastDebounceTime4) > debounceDelay) {    
      if (reading == LOW && switchDone4 == false) {
        relayState4 = !relayState4;
        switchDone4 = true;
      }
      if (reading == HIGH) {
        switchDone4 = false;
      }    
  }

  reading = digitalRead(7);
  if (reading != switchState5) {
    lastDebounceTime5 = millis();
    switchState5 = reading;
  }
  if ((millis() - lastDebounceTime5) > debounceDelay) {    
      if (reading == LOW && switchDone5 == false) {
        relayState5 = !relayState5;
        switchDone5 = true;
      }
      if (reading == HIGH) {
        switchDone5 = false;
      }    
  }

  reading = digitalRead(8);
  if (reading != switchState6) {
    lastDebounceTime6 = millis();
    switchState6 = reading;
  }
  if ((millis() - lastDebounceTime6) > debounceDelay) {    
      if (reading == LOW && switchDone6 == false) {
        relayState6 = !relayState6;
        switchDone6 = true;
      }
      if (reading == HIGH) {
        switchDone6 = false;
      }    
  }

  reading = digitalRead(9);
  if (reading != switchState7) {
    lastDebounceTime7 = millis();
    switchState7 = reading;
  }
  if ((millis() - lastDebounceTime7) > debounceDelay) {    
      if (reading == LOW && switchDone7 == false) {
        relayState7 = !relayState7;
        switchDone7 = true;
      }
      if (reading == HIGH) {
        switchDone7 = false;
      }    
  }

  reading = digitalRead(10);
  if (reading != switchState8) {
    lastDebounceTime8 = millis();
    switchState8 = reading;
  }
  if ((millis() - lastDebounceTime8) > debounceDelay) {    
      if (reading == LOW && switchDone8 == false) {
        relayState7 = !relayState7;
        switchDone8 = true;
      }
      if (reading == HIGH) {
        switchDone8 = false;
      }    
  }

  reading = digitalRead(11);
  if (reading != switchState9) {
    lastDebounceTime9 = millis();
    switchState9 = reading;
  }
  if ((millis() - lastDebounceTime9) > debounceDelay) {    
      if (reading == LOW && switchDone9 == false) {
        relayState7 = !relayState7;
        switchDone9 = true;
      }
      if (reading == HIGH) {
        switchDone9 = false;
      }    
  }
  
  digitalWrite(12, relayState0);
  digitalWrite(13, relayState1);
  digitalWrite(14, relayState2);
  digitalWrite(15, relayState3);
  digitalWrite(16, relayState4);
  digitalWrite(17, relayState5);
  digitalWrite(18, relayState6);
  digitalWrite(19, relayState7);
}
