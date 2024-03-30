#include <LedControl.h>
int DIN = 10;
int CS =  9;
int CLK = 8;

LedControl lc=LedControl(DIN,CLK,CS,0);

void setup(){
 lc.shutdown(0,false);       
 lc.setIntensity(0,15);      //Adjust the brightness maximum is 15
 lc.clearDisplay(0);    
}

void loop(){ 
    
    //Facial Expression
    byte smile[8]=   {0xFF,0xFF,0x18,0x18,0x18,0x18,0xFF,0xFF};
    byte neutral[8]= {0x42,0xA5,0x99,0x81,0x81,0x42,0x24,0x18};
    byte sad[8]=  {0x83,0xC5,0xA9,0x91,0x81,0x81,0x81,0x81};
     byte happy[8]=  {0xFF,0x10,0x10,0x10,0x10,0x10,0x10,0xFF};
     byte sorry[8]= {0xFF,0x10,0x10,0x10,0x10,0x10,0x10,0x10};
    
  
//Facial Expression   
    printByte(smile);
    delay(3000);
    printByte(neutral);
    delay(3000);
    printByte(sad);
    delay(3000);
    printByte(happy);
    delay(3000);    
    printByte(sorry);
    delay(3000);
}

void printByte(byte character [])
{
  int i = 0;
  for(i=0;i<8;i++)
  {
    lc.setRow(0,i,character[i]);
  }
}
