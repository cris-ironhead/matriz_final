#include <Servo.h>

Servo servogarra;  
Servo servoderecho;
Servo servoizquierdo;
Servo servobase;


int matriz [4][20]={         {10,20,30,40,50,60,70,80,90,100,110,120,140,140},          {160,170,185,110},          {85,95,105,110,120,130,140,150,160,170,180},{}    };

void setup() {
servogarra.attach(8);
servogarra.write(110);
servoizquierdo.attach(10);
servoderecho.attach(11);
servobase.attach(12);
servobase.write(85);
delay(3000);



servoderecho.write(matriz[0][8]);
delay(100);
servoderecho.write(matriz[0][9]);
delay(100);
servoderecho.write(matriz[0][10]);
delay(100);
servoderecho.write(matriz[0][11]);
delay(100);
servoderecho.write(matriz[0][12]);
delay(100);
servoderecho.write(matriz[0][13]);
delay(100);






servogarra.write(matriz[1][2]);
delay(100);









servoderecho.write(matriz[0][13]);
delay(100);
servoderecho.write(matriz[0][12]);
delay(100);
servoderecho.write(matriz[0][11]);
delay(100);
servoderecho.write(matriz[0][10]);
delay(100);
servoderecho.write(matriz[0][9]);
delay(100);
servoderecho.write(matriz[0][8]);
delay(100);

servobase.write(matriz[2][0]);
delay(100);
servobase.write(matriz[2][1]);
delay(100);
servobase.write(matriz[2][2]);
delay(100);
servobase.write(matriz[2][3]);
delay(100);
servobase.write(matriz[2][4]);
delay(100);
servobase.write(matriz[2][5]);
delay(100);
servobase.write(matriz[2][6]);
delay(100);
servobase.write(matriz[2][7]);
delay(100);
servobase.write(matriz[2][8]);
delay(100);
servobase.write(matriz[2][9]);
delay(100);
servobase.write(matriz[2][10]);
delay(100);


servoderecho.write(matriz[0][8]);
delay(100);
servoderecho.write(matriz[0][9]);
delay(100);
servoderecho.write(matriz[0][10]);
delay(100);
servoderecho.write(matriz[0][11]);
delay(100);
servoderecho.write(matriz[0][12]);
delay(100);
servoderecho.write(matriz[0][13]);
delay(100);


servogarra.write(matriz[1][3]);


}

void loop() {
/////////////////////////////////////////////////////////////////////////////////////////////////////////////






} 
