#include <iostream>
#include <graphics.h>
#include <fstream>

using namespace std;

struct comando
{
    int id;
    int D1;
    int D2;
    int D3;
    int D4;
}fig;

void leerImagenVectorial(char * nombreArchivo)
{
/*
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);*/
    ifstream archivo;
    int i, totalObjetos;

    archivo.open(nombreArchivo);
    // Necesitamos recuperar información del tamaño// de la imagen (cabecera)
    archivo >>totalObjetos;
    cout<<"objetos: "<<totalObjetos<<"\n";
    for(i=0; i<totalObjetos; i++)
    {
        archivo>>fig.id>>fig.D1>>fig.D2>>fig.D3>>fig.D4;
        cout<<fig.id<<"-"<<fig.D1<<" "<<fig.D2<<" "<<fig.D3<<" "<<fig.D4<<"\n";
        delay(1000); // Sea hace una pausa entre cada figuras witch(fig.id)
        switch(fig.id){
            case 0:
                //initwindow(fig.D1, fig.D2,"Practica Leer Imagen Vectorial", 200, 50);
              break;
            case 1:setcolor(fig.D1);
              break;
            case 2:
                //setfillstyle(1, fig.D1);
              break;
            case 3:
   // initgraph(&gd, &gm, NULL);
                floodfill(fig.D2, fig.D3, fig.D1);
              break;
            case 4:circle(fig.D1, fig.D2, fig.D3);
              break;
            case 5:line(fig.D1, fig.D2, fig.D3, fig.D4);
              break;
            case 6:rectangle(fig.D1, fig.D2, fig.D3, fig.D4);
              break;
        }
    }
    archivo.close();
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    leerImagenVectorial((char *)"casita.vec");
   // while( !kbhit() );
  //  closegraph( );
    delay(500000);
return 0;
}
