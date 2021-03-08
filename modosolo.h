
#include "Funciones Generales.h"
#include <unistd.h>
#include <conio.h>




int analisisPuntos(int v[], int t, int ronda);

int calcularBunco(int v[], int t, int ronda);

int calcularRepetidos(int v[], int t);

int calcularSumaDivisible5(int v[], int t);

int calcularEscalera(int v[], int t);

int calcularCoincidenciaRonda(int v[], int t, int ronda);
void esteticadado(int x);

int UnJugador(){
    int const t=3;
    int opc,ronda = 1, puntosAcum = 0, puntosTotales = 0, cantBuncos  = 0,cantFallidas = 0,puntosCorte = 0,resto = 0,C = 0,v[t];
    char nom[15];
    bool flag=false;
    int esteticadado=0;



//system("cls");
system("color 8");

    int REC1[8] = {201,205,187,186,188,205,200,186};
    int REC4[8] = {177,178,177,178,177,178,177,178};


    SetColorC(9,22);
    Rectangulo(55,9,50,4,REC1);
    TextColor(10);
    Say(55,8,"*INGRESE UN NOMBRE*");
    TextColor(14);
    Say(58,11,"NOMBRE :"); cin >> nom;//system("cls");
    Cls();


    for(ronda=1;ronda<7;ronda++){
        puntosCorte = 0;
        puntosCorte = puntosCorte+resto;
    while(puntosCorte<=21){

        system("cls");

                         cargarAleatorio(v,t,5); C++;



                         puntosAcum = analisisPuntos(v,t,ronda);  puntosTotales = puntosTotales + puntosAcum;
                         puntosCorte = puntosCorte+puntosAcum;
                        if(puntosAcum == 21) {cantBuncos++;}
                        if(puntosAcum == 0) {cantFallidas++;}


                        int REC3[8]={220,220,220,219,223,223,223, 219};
                        SetColorC(6 ,10);
                        Rectangulo(5  ,3,  110  , 25   ,REC3);

        if(puntosAcum!=0||ronda>1) {
                                    SetColorB(2,3);
                                    Rectangulo(8,5,32,2,REC4);
                                    TextColor(6);
                                    Say(9,6,"PUNTOS DE LA TIRADA ANTERIOR:");cout<<puntosAcum;}



        if(puntosAcum!=0||ronda>1) {
                                     SetColorC(2,3);
                                    Rectangulo(77 , 19   ,34,2,REC4);
                                    TextColor(2);
                                    Say(79, 20,"PUNTOS TOTALES DE LA PARTIDA:");cout<<puntosTotales;}





       if(puntosAcum!=0||ronda>1) {
                                    SetColorA(3,7);
                                    Rectangulo(75 , 5    ,34,2,REC4);
                                    TextColor(2);
                                   Say(  76,6 ,"TIRADAS FALLIDAS DE LA PARTIDA:");cout<<cantFallidas<<endl<<endl;}

       if(puntosAcum!=0||ronda>1) {
                                     SetColorC(4,10);
                                    Rectangulo(9  ,19   ,37,2,REC4);
                                    TextColor(3);
                                  Say( 10  ,20 ,"TIRADAS REALIZADAS DE LA PARTIDA :");cout<<C<<endl<<endl;}

           SetColorB(9,12);

           Rectangulo(48,0,10,2,REC4);
           TextColor(6);
            Say(50,1,"RONDA:"); cout<<ronda<<endl;

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
                cout<<endl;cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;






            system("pause");
    }


    resto=puntosCorte-(21);


    }


system("cls");

    SetColorC(82,4) ;
    Rectangulo(55,15,55,2,REC1);
    TextColor(1);
    Say(58,16,"** CANTIDAD DE RONDAS TOTALES FINALIZADAS **");


     SetColorB(20,3) ;
    Rectangulo(55,19,35,2,REC1);
    TextColor(6);
    Say(57,20,"JUGADOR:");cout<<nom;


    cout<<endl<<endl;
    puntosTotales=puntosTotales-(cantFallidas*2);
    SetColorA(44,5) ;
    Rectangulo(55,23,34,2,REC1);
    TextColor(4);
    Say(57,24,"CANTIDAD DE TIRADAS FALLIDAS:"); cout<<cantFallidas;

    SetColorB(32,3) ;
    Rectangulo(55,27,34,2,REC1);
    TextColor(3);
    Say(57,28,"CANTIDAD DE BUNCOS OBTENIDOS:"); cout<<cantBuncos;


    SetColorC(30,10) ;
    Rectangulo(55,31,32,2,REC1);
    TextColor(9);
    Say(57,32,"PUNTAJE TOTAL OBTENIDO:"); cout<<puntosTotales;
    if(puntosAcum!=0||ronda>1) {



    SetColorA(60,6) ;
    Rectangulo(55,35,39,2,REC1);
    TextColor(5);
    Say(57,36,"TIRADAS REALIZADAS DE LA PARTIDA:");cout<<C;}


    cout<<endl<<endl<<endl;
   return puntosTotales;


    Cls();
system("pause");

}
 int REC4[8]={177,178,177,178,177,178,177,178};

int analisisPuntos(int v[], int t, int ronda){
    int puntos[5]={0}, pos;

    puntos[0] = calcularBunco(v,ronda,t);
    puntos[1] = calcularRepetidos(v,t);
    puntos[2] = calcularSumaDivisible5(v,t);
    puntos[3] = calcularEscalera(v,t);
    puntos[4] = contarNumerosRepetidos(v,ronda,t);

    pos = maximoVector(puntos,5);



                SetColorA(3,9);
                Rectangulo(     82 ,24    ,25,2,REC4);
                TextColor(12);
                Say(    84 ,25,"PUNTAJE DE LA TIRADA:");cout<<puntos[pos]<<endl<<endl;


                SetColorA(6,10);
                Rectangulo(9  ,     24 ,13,2,REC4);
                TextColor(12);
                Say(  11   ,25   ," SACASTE ");cout<<endl; /// ESTOY ACA





        if(puntos[pos]!=0){
            switch(pos){
            case 0:
                SetColorA(1,3);
                Rectangulo( 28, 24  ,13,2,REC4);
                TextColor(2);
                Say(30  ,  25   ," BUNCO!.");
                    break;
                case 1:

                SetColorA(5,8);
                Rectangulo(28 ,24  ,50,2,REC4);
                TextColor(5);
                Say(      30   ,  25," 3 NUMEROS REPETIDOS DISTINDOS DE LA RONDA!.");
            break;


            case 2:
                SetColorA(2,1);
                Rectangulo(   25    ,   24,36,2,REC4);
                TextColor(7);
                Say( 27  , 25    ," SUMA DE NUMEROS DIVISIBLES POR 5!");

            break;
            case 3:
                SetColorA(1,9);
                Rectangulo( 28  ,  24, 13,2,REC4);
                TextColor(9);
                Say( 29 , 25    ," ESCALERA!");


            break;

            case 4:
                SetColorA(1,7);
                Rectangulo( 25  ,24  ,54,2,REC4);
                TextColor(10);
                Say(     27  ,25       ," 1 O 2 NUMEROS REPETIDOS IGUAL AL NUMERO DE RONDA!.");


                break;
        }
    }
    else{
                SetColorA(5,10);
                Rectangulo(25 ,24   ,18,2,REC4);
                TextColor(1);
                Say(     27 ,     25   ,"TIRADA FALLIDA");

    }



    caradado(v,t);
    cout<<endl;

    return puntos[pos];
    return 0;

}




