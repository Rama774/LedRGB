int redPin=6;
int bluePin=5;
int greenPin=3;
void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
setColor(255,0,0);// red color
delay(1000);
setColor(0,255,0);//green color
delay(1000);
setColor(0,0,255);//blue color
delay(1000);
setColor(255,255,255);// white color
delay(1000);
setColor(170,0,255);//purple color
delay(1000);
}
void setColor(int redValue, int greenValue, int blueValue){
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);

}