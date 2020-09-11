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

    // Casa
    setcolor(BLUE);
    line(65, 225, 195, 125);
    line(195, 125, 320, 225);
    rectangle(123, 180, 264,280);

    // Puerta
    setcolor(RED);
    rectangle(180, 230, 215, 280);
    setfillstyle(1,RED);
    floodfill(200,250,RED);

    while( !kbhit() );

    closegraph();
    guardarImagen((char *)"casita.img");
    return 0;
}
    void guardarImagen(char * nombreArchivo) //Ahora creamos función guardarImagen(),y la invocaremos antes de terminar el programa principal no se si va aqui o antes de }.
    { ofstream archivo;int i,j,tamX,tamY;

    tamX=getmaxx();
    tamY=getmaxy();
    archivo.open(nombreArchivo);
    // Necesitamos guardar información del tamaño
    // de la imagen (cabecera)
    archivo <<tamX<<" "<<tamY<<'\n';
    for(i=0;i<tamX;i++)
        for(j=0;j<tamY;j++)
        { archivo << getpixel(i,j)<<" ";
        }
archivo.flush();
archivo.close();
}
