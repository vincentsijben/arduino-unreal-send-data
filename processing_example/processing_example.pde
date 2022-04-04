import processing.serial.*;
Serial myPort;

void setup() {
  printArray(Serial.list());
  myPort = new Serial(this, Serial.list()[2], 9600);
}

void draw(){
}

void mousePressed() {
  myPort.write('A');
}
