#include <iostream>
#include <graphics.h>


using namespace std;

void dibujar(int fig[][2], int totalVertices)
{
    int i;

    for(i=0; i<totalVertices-1; i++)
    line(fig[i][0], fig[i][1], fig[i+1][0], fig[i+1][1]);

    line(fig[0][0], fig[0][1], fig[i][0], fig[i][1]);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int flecha[7][2]= {
        {20,  70},
        {20,  30},
        {80,  30},
        {80,  10},
        {120, 50},
        {80,  90},
        {80,  70}
};

//initwindow(140,100,"Práctica Dibujar Imagen 2D", 200, 50);
dibujar(flecha,7);

//while( !kbhit() );
//closegraph( );
        delay(1000); // Sea hace una pausa entre cada figuras witch(fig.id)
return 0;
}
