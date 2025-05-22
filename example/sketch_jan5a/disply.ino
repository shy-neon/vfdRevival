int toDigit (int number) {
  switch(number){
    case 1:
      return 207;
    case 2:
      return 146;
    case 3:
      return 134;
    case 4:
      return 204;
    case 5:
      return 164;
    case 6:
      return 160;
    case 7:
      return 143;
    case 8:
      return 128;
    case 9:
      return 132;
    case 0:
      return 129;
    case 'a':
      return 136;
    case 'b':
      return 224;
    case 'c':
      return 177;
    case 'd':
      return 194;
    case 'e':
      return 176;
    case 'f':
      return 184;
    case 'g':
      return 132;
    case 'h':
      return 232;
    case 'i':
      return 249;
    case 'l':
      return 241;
    case 'm':
      return 255;
    case 'n':
      return 234;
    case 'o':
      return 226;
    case 'p':
      return 152;
    case 's':
      return 164;
    case 't':
      return 224;
    case 'u':
      return 184;
    case 'v':
      return 193;
    case 'z':
      return 146;
    case 'y':
      return 196;
    default:
      return 255;
  }
}

void printString (char * string){
  unsigned long t, dt = 0;
  char * out;
  while(t < strlen(string)-3  ){
  print(string[3 + t], 1);
  delay(2);
  print(string[2 + t], 2);
  delay(18);
  print(string[1 + t], 3);
  delay(1);
  print(string[0 + t], 4);
  delay(1);
  
    if (millis() - dt > 500){
      t++;
      dt = millis();
    }
  }  
}

void print (int value, int display){
  int tube = 0;
  switch (display) {
    case 1:
      tube = 14;
      break;
    case 2:
      tube = 13;
      break;
    case 3:
      tube = 11;
      break;
    case 4:
      tube = 7;
      break;
  }
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, tube);
  shiftOut(dataPin, clockPin, LSBFIRST, toDigit(value));
  digitalWrite(latchPin, HIGH);
}