#include"Funciones Generales.h"

    int maxi=0;
    int  myd=0;
void MaximoPuntaje(int x, int f,int v[],int t ,int vs[],int l){
    SetColorC(7 , 2  );

 int REC4[8] = {177,178,177,178,177,178,177,178};
     Rectangulo(   3 , 31, 45,8,REC4);

if(x>maxi){maxi=x;}

    TextColor(12);
   Say(5,33,"MAYOR PUNTACION DE UN  JUGADOR:"); cout<< maxi;

    TextColor(10);

Say(4,35,"============================================");


if(f>myd) {myd=f;}

    TextColor(5);
Say(5,37, "MAYOR  PUNTUACION  DE DOS  JUGADORES:"); cout<<myd;

}
