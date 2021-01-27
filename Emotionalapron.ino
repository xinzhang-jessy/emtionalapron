

const int redPins=[11,8,5,14];
const int greenPins=[10,7,4,15];
const int bluePins=[9,6,3,16];
int switchPin = 2;
int soundPin = 0;

void setup()        
 {
  for (int i; i<sizeof(redPins); i++){
    pinMode(redPins[i], OUTPUT);
    pinMode(greenPins[i],OUTPUT);
    pinMode(bluePins[i],OUTPUT);
  }
   pinMode(switchPin,INPUT);
 }
 
void loop() 
 {
  int value = analogRead(soundPin);

  if (value < 150){
    color(0,0,255);//R:0,G:0,B:255********Blue
    delay(1000);//delay 1 second
  }else if (value <300){
    color(0,255,0);//R:0,G:255,B:0********Green
    delay(1000);
  }else {
    //three color:
    color(255,0,0);//R:255,G:0,B:0********Red
    delay(1000);//delay 1 second
  }

 }
void color(unsigned char red,unsigned char green,unsigned char blue)//函数功能声明
{
   for (int i; i<sizeof(redPins); i++){
    analogWrite(redPins[i], red);
  }
  for (int i; i<sizeof(greenPins); i++){
    analogWrite(greenPins[i], green);
  }
  for (int i; i<sizeof(redPins); i++){
    analogWrite(bluePins[i], blue);
  }
}
