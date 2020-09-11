#include <iostream>
#include <graphics.h>
#include <fstream>

using namespace std;

int main()
{
    initwindow(400 ,400 ,"Práctica Guardar Imagen", 200, 50);
    // Crear escena
    // Sol
    setcolor(YELLOW);
    circle(300,100,40);
    setfillstyle(1,YELLOW);
    floodfill(300,100,YELLOW);

    cout << "Hello world!" << endl;
    return 0;
}
