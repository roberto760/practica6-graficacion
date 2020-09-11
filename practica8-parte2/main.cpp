#include <iostream>
#include <graphics.h>
#include <fstream>

using namespace std;

void leerImagen(char * nombreArchivo)
{ ifstream archivo;
  int i,j,tamX,tamY;
  int color;

  archivo.open(nombreArchivo);
  // Necesitamos recuperar información del tamaño
  // de la imagen (cabecera)
  archivo >>tamX >>tamY;
 cout<<"Tamaño en X: "<<tamX<<", tamaño en Y: "<<tamY;
 for(i=0;i<tamX;i++)
    for(j=0;j<tamY;j++)
    {archivo >> color;
     cout << color<<" ";
    putpixel(i,j,color);
    }
    archivo.close();
}
 int main()
{ initwindow(400 ,400 ,"Práctica Leer Imagen", 200, 50);
leerImagen((char *)"casita.img");
while( !kbhit() );
closegraph( );
    return 0;
}
