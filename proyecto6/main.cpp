#include <iostream>
#include <graphics.h>

using namespace std;
int main()
{
    cout << "Ventana de texto" << endl;
    initwindow( 400 , 400 , "Libreria WinBGIm",200,50);

    putpixel(200,200,YELLOW);
    line(10,20,380,390);
    setcolor(GREEN);
    circle(200,200,100);

    while( !kbhit() );

    closegraph( );
    return 0;
}
