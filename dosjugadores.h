#include "Funciones Generales.h"

int dosjugadores();


int dosjugadores(){

    int const t=3;
    int v[t];
    int ronda=1;
    char nj1[20];
    char nj2[20];
    bool flag=false;
    bool dosjg=true;
    bool res=true;
    int puntosAcum=0;
    int puntosAcum2=0;
    int puntosTotales=0;
    int puntosTotales2=0;
    int cantBuncos=0;
    int cantFallidas=0;
    int cantBuncos2=0;
    int cantFallidas2=0;
    int x=1;
    int ct=0;
    int puntosCorte=0;
    int puntosCorte2=0;
    int pun=0;
    int cb=0;
    int pt=0;
    int maxpunt=0;
    int REC1[8] = {201,205,187,186,188,205,200,186};
    int REC2[8] = {218,196,191,179,217,196,192,179};
    int REC3[8] = {220,220,220,219,223,223,223 ,219};
    //=============================================================================================
system("color 8");
    SetColorC(9,22);
    Rectangulo(14,8,45,4,REC1);
    TextColor(10);
   Say(14,7,"*INGRESE NOMBRE DEL JUGADOR 1*");
    TextColor(14);
   Say(16,10,"NOMBRE:"); cin>>nj1;

    SetColorC(9,22);
    Rectangulo(63,8,45,4,REC1);
    TextColor(10);
    Say(63,7,"*INGRE NNOMBRE DEL JUGARDOR 2*");
    TextColor(14);
    Say(65,10,"NOMBRE:");cin>>nj2;
    Cls();


    //============================================================================================

for(ronda=1;ronda<=6;ronda++){
        int resto=0;
        int resto2=0;
       if(ct==1){resto=puntosCorte-21;dosjg=true;}
        puntosCorte=0;
        puntosCorte=puntosCorte+resto;
        if(pt==1) {resto2=puntosCorte2-21; dosjg=false;}
        puntosCorte2=0;
        puntosCorte2=puntosCorte2+resto2;
     cb=0;
     pt=0;
     ct=0;

    while(cb!=1){



             while(dosjg==true){




                            SetColorC(9,10);

                        Rectangulo(5  ,3,  110  , 25   ,REC2);

            SetColorC(15,12);
              Rectangulo(11,4,29,2,REC1);
              TextColor(1);
             Say(12,5,"TURNO DEL JUGADOR:"); cout<<nj1;





        cout<<endl<<endl;
        if(puntosAcum!=0||ronda>6) {
                SetColorC(13,9);
                Rectangulo(43,4,31,2,REC1);
                TextColor(10);
                Say(44,5,"PUNTOS DE LA TIRADA ANTERIOR:");cout<<puntosAcum;

         SetColorC(14,7);
        Rectangulo(82,4,25,2,REC1);
        TextColor(6);
      Say(83,5,"PUNTOS DE ESTA RONDA:" ); cout<<puntosCorte;}

        if(puntosAcum!=0||ronda>6) {
                    SetColorC(10,2);
                    Rectangulo(9,20,32 ,2,REC1);
                    TextColor(13);
                    Say(10,21,"PUNTOS TOTALES DE LA PARTIDA:"); cout<<puntosTotales;

        SetColorC(7,1);
        Rectangulo(49,0,7,2,REC1);
        TextColor(4);
        Say(50,1,"RODA:"); cout<<ronda;}



        cargarAleatorio(v,t,5);
        puntosAcum=analisisPuntos(v,t,ronda);
        puntosTotales=puntosTotales+puntosAcum;
        puntosCorte=puntosCorte+puntosAcum;


        if(puntosAcum==21){cantBuncos++;dosjg=false;}
        if(puntosAcum==0) {cantFallidas++;dosjg=false;}
        if(puntosCorte<21&&puntosAcum>0){dosjg=true;}
        else{dosjg=false;}
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
        cout<<endl;   cout<<endl;  cout<<endl;   cout<<endl;   cout<<endl;

        system("pause");

        system("cls");


    }
    if(puntosCorte>=21){cb=1;ct=1;}


//===============================================================================================================================================

system("cls");

        SetColorC(12,3);
        Rectangulo(  13  ,5, 69,    6 ,REC3);

        SetColorC(10,6);
    Rectangulo(44,2, 19   ,2,REC3);
    TextColor( 3 );
   Say(45,3 ,"JUGADOR:"); cout<<nj1;

    TextColor(6);
   Say(15,6,"CANTIDAD DE TIRADAS FALLIDAS:");  cout<<cantFallidas;
   TextColor(9);
   Say( 50 ,  6 ,"CANTIDAD DE BUNCOS OBTENIDOS:"); cout<<cantBuncos;
   TextColor(10);
   Say(15,10   , "PUNTAJE TOTAL OBTENIDO:"); cout<<puntosTotales;
   TextColor(13);
   Say(50   ,10  ,"TURNO FINALIZADO: "); cout<<"TIRADA FALLIDA";
    cout<<endl<<endl<<endl;
    system("pause");
    system("cls");




     if(cb==1){dosjg=true;}
    while(dosjg==false){








                  SetColorC(9,10);

                        Rectangulo(5  ,3,  110  , 25   ,REC2);


       SetColorC(15,12);
              Rectangulo(11,4,29,2,REC1);
              TextColor(1);
             Say(12,5,"TURNO DEL JUGADOR:"); cout<<nj2;

        flag==false;

        cout<<endl<<endl;
        if(puntosAcum2!=0||ronda>6) {

                SetColorC(13,9);
                Rectangulo(43,4,31,2,REC1);
                TextColor(10);
                Say(44,5,"PUNTOS DE LA TIRADA ANTERIOR:");cout<<puntosAcum2;

      SetColorC(14,7);
        Rectangulo(82,4,25,2,REC1);
        TextColor(6);
      Say(83,5,"PUNTOS DE ESTA RONDA:" ); cout<<puntosCorte2;}

        if(puntosAcum2!=0||ronda>6){
                    SetColorC(10,2);
                    Rectangulo(9,20,32 ,2,REC1);
                    TextColor(13);
                    Say(10,21,"PUNTOS TOTALES DE LA PARTIDA:"); cout<<puntosTotales2;


        SetColorC(7,1);
        Rectangulo(49,0,9,2,REC1);
        TextColor(4);
        Say(50,1,"RODA:"); cout<<ronda;}




        cargarAleatorio(v,t,5);

         puntosAcum2=analisisPuntos(v,t,ronda); puntosTotales2=puntosTotales2+puntosAcum2;
        puntosCorte2=puntosCorte2+puntosAcum2;
                    pun=puntosCorte2;
                    if(puntosAcum2==21) {cantBuncos2++;dosjg=true;}
            if(puntosAcum2==0) {cantFallidas2++;dosjg=true;}
             if(puntosCorte2<21&&puntosAcum2>0) {dosjg=false;}
             else{dosjg=true;}
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
        cout<<endl;
        cout<<endl;
        cout<<endl;
    system("pause");
    system("cls");





    if(cb==0){
        if(puntosCorte2>=21){pt=1;cb=1;}
        }


    }



system("cls");


    SetColorC(12,3);
        Rectangulo(  13  ,5, 69,    6 ,REC3);

        SetColorC(10,6);
    Rectangulo(44,2, 19   ,2,REC3);
    TextColor( 3 );
   Say(45,3 ,"JUGADOR:"); cout<<nj2;

    cout<<endl<<endl;
   TextColor(6);
   Say(15,6,"CANTIDAD DE TIRADAS FALLIDAS:");  cout<<cantFallidas2;
   TextColor(9);
   Say( 50 ,  6 ,"CANTIDAD DE BUNCOS OBTENIDOS:"); cout<<cantBuncos2;
   TextColor(10);
   Say(15,10   , "PUNTAJE TOTAL OBTENIDO:"); cout<<puntosTotales2;
   TextColor(13);
   Say(50   ,10  ,"TURNO FINALIZADO: "); cout<<"TIRADA FALLIDA";
    cout<<endl<<endl<<endl;
    system("pause");
  system("cls");


    }}


//===============================================================================================================================================

    system("cls");

            Rectangulo(12 ,5,98 , 30 ,REC2);

          SetColorC(82,4) ;
    Rectangulo(34,1,55,2,REC1);
    TextColor(1);
    Say( 38  ,2,"** CANTIDAD DE RONDAS TOTALES FINALIZADAS **");

    TextColor(6);

    Say(18,6,"JUGADOR:"); cout<<nj1;

    cout<<endl<<endl;
    TextColor(6);
    Say(18,10,"PUNTAJE TOTAL OBTENIDO:"); cout<<puntosTotales;
    TextColor(9);
    Say(50,10,"CANTIDAD DE TIRADAS FALLIDAS:");  cout<<cantFallidas;
    TextColor(3);
    Say(18,13 ,"CANTIDAD DE BUNCOS OBTENIDO:"); cout<<cantBuncos;

    puntosTotales=puntosTotales-(cantFallidas*2);
    TextColor(1);
    Say(50,13,"PUNTAJE FINAL OBTENIDDO:"); cout<<puntosTotales;


    Say(14,15,"===============================================================================================");
    TextColor(6);

    Say(18,17,"JUGADOR:"); cout<<nj2;
    TextColor(3);

    Say(18,20,"PUNTAJE TOTAL OBTENIDO:");  cout<<puntosTotales2;
    TextColor(10);
    Say(50,20,"CANTIDAD DE TIRADAS FALLIDAS:"); cout<<cantFallidas2;
    TextColor(9);
    Say(18,22,"CANTIDAD DE BUNCOS OBTENIDOS:"); cout<<cantBuncos2;
    puntosTotales2=puntosTotales2-(cantFallidas2*2);
    TextColor(8);
     Say(52,22,"PUNTAJE TOTAL OBTENIDO:");  cout<<puntosTotales2;
      TextColor(11);

    Say(14,24,"===============================================================================================");


    if (puntosTotales>puntosTotales2){
        Say(18,26,"EL GANADOR ES EL JUGADOR:"); cout<<nj1;
        maxpunt=puntosTotales;
    }
    if (puntosTotales<puntosTotales2){
            Say(18,26,"EL GANADOR ES EL JUGADOR:"); cout<<nj2;

        maxpunt=puntosTotales2;
    }


    if (puntosTotales==puntosTotales2){

            if(cantBuncos>cantBuncos2)     { Say(20,27,"EL GANADOR ES EL JUGADOR:");  cout<<nj1;}
            if(cantBuncos<cantBuncos2) { Say(20,29,"EL GANADOR ES EL JUGADOR:"); cout<<nj2;}


              else{  Say(25,30,"EMPATE:");}
    }






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
    system("pause");
    system("cls");
        return maxpunt;
}
