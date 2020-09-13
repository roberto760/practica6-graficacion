#include <iostream>
#include <fstream>

using namespace std;

struct comando
{
    int id;
    int D1;
    int D2;
    int D3;
    int D4;
} fig[13];

void guardarImagenVectorial(char * nombreArchivo)
{
    ofstream archivo;
    int i;
    archivo.open(nombreArchivo);
    // Guardar la cantidad de figuras (cabecera)
    // y objetos
    archivo<<13<<'\n';
    for(i=0; i<12; i++)
    {
        archivo<<fig[i].id<<" "<<fig[i].D1<<" ";
        archivo<<fig[i].D2<<" "<<fig[i].D3<<" ";
        archivo<<fig[i].D4<<'\n';
    }
    archivo.flush();
    archivo.close();
}

int main()
{
    cout<<"Practica Guardar Imagen Vectorial \n\n";
    //Definir tamaño de ventana
    fig[0].id=0;
    fig[0].D1=400;
    fig[0].D2=400; //initwindow(400 ,400 ,"Titulo", 200, 50);

    // Crear escena
    // Sol
    cout<<"Comando para colocar el color de lápiz a amarillo \n"
    ;fig[1].id=1;
    fig[1].D1=14; //setcolor(YELLOW);

    cout<<"Comando para dibujar circulo \n";
    fig[2].id=4;
    fig[2].D1=300;
    fig[2].D2=100;
    fig[2].D3=40; //circle(300,100,40);

    cout<<"Comando para definir el color del contorno a rellenar \n";
    fig[3].id=2;
    fig[3].D1=14; //setfillstyle(1,YELLOW);

    cout<<"Comando para rellenar una figura cerrada \n";
    fig[4].id=3;
    fig[4].D1=14;
    fig[4].D2=300;
    fig[4].D3=100; //floodfill(300,100,YELLOW);

    // Casa
    cout<<"Comando para definir el color del lapiz \n";
    fig[5].id=1;
    fig[5].D1=9; //setcolor(BLUE);

    cout<<"Comando para dibujar una linea \n";
    fig[6].id=5;
    fig[6].D1=65;
    fig[6].D2=225;
    fig[6].D3=195;
    fig[6].D4=125; //line(65, 225, 195, 125);

    cout<<"Comando para dibujar una linea \n";
    fig[7].id=5;
    fig[7].D1=195;
    fig[7].D2=125;
    fig[7].D3=320;
    fig[7].D4=225; //line(195, 125, 320, 225);

    cout<<"Comando para dibujar un rectangulo \n";
    fig[8].id=6;
    fig[8].D1=123;
    fig[8].D2=180;
    fig[8].D3=264;
    fig[8].D4=280; //rectangle(123, 180, 264, 280);

    // Puerta
    cout<<"Comando para definir el color del lapiz \n";
    fig[9].id=1;
    fig[9].D1=12; //setcolor(RED);

    cout<<"Comando para dibujar un rectangulo \n";
    fig[10].id=6;
    fig[10].D1=180;
    fig[10].D2=230;
    fig[10].D3=215;
    fig[10].D4=280; //rectangle(180, 230, 215, 280);

    cout<<"Comando para definir el color del contorno a rellenar \n";
    fig[11].id=2;
    fig[11].D1=12; //setfillstyle(1,RED);

    cout<<"Comando para rellenar una figura cerrada \n";
    fig[12].id=3;
    fig[12].D1=12;
    fig[12].D2=200;
    fig[12].D3=250; //floodfill(200,250,RED);

    guardarImagenVectorial((char *)"casita.vec");
    cout<< "Objetos guardados!";
    return 0;
}
