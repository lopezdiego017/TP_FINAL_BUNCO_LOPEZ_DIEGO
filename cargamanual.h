
#include "Funciones Generales.h"
int CargaManual();


int CargaManual(){





    int Ronda=1;
    int V[3];
    char n1[15];
    int REC1[8] = {201,205,187,186,188,205,200,186};
    int REC4[8] = {177,178,177,178,177,178,177,178};


    int PuntosTirada=0;
    int PuntosTotales=0;
    int Buncos=0;
    int CantFallidas=0;
    int PuntosRonda=0;
    int CantTiradas=0;
    int ordenarVector=0;



    system("color 8");
    SetColorC(9,22);
    Rectangulo(55,9,50,4,REC1);
    TextColor(10);
    Say(55,8,"*INGRESE UN NOMBRE*");
    TextColor(14);
    Say(58 ,11,"NOMBRE: "); cin>>n1;
    Cls();

    do{

     SetColorC(5,19);
    Rectangulo(5  ,3,  110  , 25   ,REC4);

        CargarVector(V, 3);  CantTiradas++;
        caradado(V,3);

        SetColorB(10,9);;

         Rectangulo(51,0,10,2,REC1);

         TextColor(3);

        Say( 53, 1 ,"RONDA:" ); cout<<Ronda;





            SetColorA(15,8);
            Rectangulo(33,5,12,2,REC3);
            TextColor(12);
           Say(35,6,"BUNCOS: "); cout<<Buncos;

            SetColorB(18,5);
           Rectangulo(48,5,26,2,REC3);
           TextColor(8);
        Say(49,6,"PUNTOS DE ESTA RONDA: "); cout<<PuntosRonda;

        SetColorC(18,8);
        Rectangulo(78,5,32,2,REC3);
        TextColor(15);
        Say(79,6,"PUNTOS TOTALES DE LA PARTIDA:"); cout<<PuntosTotales;


               PuntosTirada=AnalizarTirada(V, 3, Ronda);

              PuntosRonda=PuntosRonda+PuntosTirada;

                PuntosTotales=PuntosTotales+PuntosTirada;

                if(PuntosTirada==21){ Buncos++;}
                if(PuntosTirada==0) {CantFallidas=CantFallidas+1;}

         if(PuntosRonda>=21){
            Ronda++;
            PuntosRonda=0;}
            if(Ronda<=6){

                      cout<<endl;
                  cout<<endl;
                    cout<<endl;
                      cout<<endl;
                        cout<<endl;
                          cout<<endl;
                            cout<<endl;
                            cout<<endl;



                system("pause");
                Cls();







    SetColorA(8,10);
    Rectangulo(80,19,33,2,REC2);
        TextColor(13);
    Say(81,20,"CANTIDAD DE TIRADAS FALLIDAS: "); cout<<CantFallidas;
    SetColorC(14,9);
    Rectangulo(9,19,34,2,REC2);
    TextColor(7);
    Say(10,20,"TIRADAS REALIZAS DE LA PARTIDA: "); cout<<CantTiradas;
            }






      } while(Ronda<=6);





    cls();

 SetColorC(82,4) ;
    Rectangulo(55,15,55,2,REC1);
    TextColor(1);
    Say(58,16,"** CANTIDAD DE RONDAS TOTALES FINALIZADAS **");



 SetColorB(20,3) ;
    Rectangulo(55,19,35,2,REC1);
    TextColor(6);
    Say(57,20,"JUGADOR:");cout<<n1;
    PuntosTotales=PuntosTotales-CantFallidas*2;

 SetColorB(32,3) ;
    Rectangulo(55,27,34,2,REC1);
    TextColor(3);
    Say(57,28,"CANTIDAD DE BUNCOS OBTENIDOS:"); cout<<Buncos;



SetColorA(44,5) ;
    Rectangulo(55,23,34,2,REC1);
    TextColor(4);
    Say(57,24,"CANTIDAD DE TIRADAS FALLIDAS:"); cout<<CantFallidas;

   SetColorA(60,6) ;
    Rectangulo(55,35,39,2,REC1);
    TextColor(5);
    Say(57,36,"TIRADAS REALIZADAS DE LA PARTIDA:"); cout<<CantTiradas;

    SetColorC(30,10) ;
    Rectangulo(55,31,32,2,REC1);
    TextColor(9);
    Say(57,32,"PUNTAJE TOTAL OBTENIDO:");cout<<PuntosTotales;



    }






























































