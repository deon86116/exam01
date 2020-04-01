// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library

//

#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;


int main()

{

    // basic printf demo = 16 by 18 characters on screen

     //Default Green on black text

    uLCD.line(0, 20 , 80, 20, 0xFFFFFF);
    uLCD.line(0, 100 , 80, 100, 0xFFFFFF);
    uLCD.line(0, 20 , 0, 100, 0xFFFFFF);
    uLCD.line(80, 20 , 80, 100, 0xFFFFFF);
    uLCD.text_width(1); //4X size text

    uLCD.text_height(1);


    uLCD.locate(4,4);
    
    uLCD.printf("\n106060022\n");

    

}