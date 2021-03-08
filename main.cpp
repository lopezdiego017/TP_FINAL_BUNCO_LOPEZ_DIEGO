#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include<ctime>
#include <conio.h>

using namespace std;

#include "rlutil.h"
#include "menu.h"
#include "Funciones Generales.h"
#include "modosolo.h"
#include "dosjugadores.h"
#include "puntos.h"
#include "cargamanual.h"
#include "Instrucciones.h"

using namespace rlutil;

MENU miMenu;

int main(){


int REC1[8] = {201,205,187,186,188,205,200,186};
int REC2[8] = {218,196,191,179,217,196,192,179};
int REC3[8] = {220,220,220,219,223,223,233,219};
int REC4[8] = {177,178,177,178,177,178,177,178};


    bool salir = false;
    bool dat = true,op1 = false, op2 = false;
    int  pTotales = 0;

    int opc;
    int vp[1];
    int vs[1];
     int puntosd = 0;




            SetColorB(10,6); // COLOR DE CUADROS.
            Rectangulo(50,1,21,2,REC2);
            TextColor(14); //COLOR DE TEXTO.

            Say(55,2,"***BUNCO***");

        miMenu.Add_Items("1.JUEGO NUEVO PARA UN JUGADOR",1);
        miMenu.Add_Items("2.JUEGO NUEVO PARA DOS JUGADORES", 2);
        miMenu.Add_Items("3.MOSTRAR PUNTUACION MAS ALTA" , 3);
        miMenu.Add_Items("4.MODO SIMULADO(CARGA DE DADOS MANUAL)" , 4);
        miMenu.Add_Items("5.REGLAMENTO" ,5);
        miMenu.Add_Items("6.SALIR" , 6);

         miMenu.Set_Space(2);//ESPACION HORISONTAL.

       do{
          SetColorA(80,22); //COLORES DEL MENU.
          Rectangulo(3,15,45, 15 , REC1); //RETANGULO DEL MENU.

          Rectangulo( 1 , 5, 115,35,REC4);// CUADRO  GRANDE.
          SetColorA(5,5);

          TextColor(15);

         Say(15 ,14,"**MENU PRINCIPAL**");// MENU.


         opc=miMenu.DrawV(6,17  );//DIMENCIOIN DE LOS PORRAFOS.

     //#########################################################################



        switch(opc){

         case 1:
                op1 = true;
                pTotales = UnJugador();
       break;
            Cls();
       case 2:

            op2=true;

               puntosd=dosjugadores();
        break;
       case 3:


        if(op1 == true||op2 == true) { MaximoPuntaje(pTotales,puntosd,vp,1,vs,1);}
        else {
                  SetColorC(4,9);
                    Rectangulo(5,34,39,2,REC2);
                    TextColor(3);
              Say(6,35,"**ERROR NO REALIZO NINGUNA PARTIDA**" );}
        break;
        case 4:

          CargaManual();
       break;

        case 5:


           break;
       case 6:
                salir = true;
        break;
       }

       }while(salir == false);


cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
return 0;

}
