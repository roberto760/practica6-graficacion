#include <iostream>
#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    cout << "Ventana de texto" << endl;
  //  initwindow( 400 , 400 , "Libreria WinBGIm",200,50);

    putpixel(200,200,YELLOW);
    line(10,20,380,390);
    setcolor(GREEN);
    circle(200,200,100);

   // while( !kbhit() );
//sleep(10);
    delay(500000);


    closegraph( );
    return 0;
}
