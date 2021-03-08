#ifndef FUNCIONES_GENERALES_H_INCLUDED
#define FUNCIONES_GENERALES_H_INCLUDED
#include "rlutil.h"
using namespace rlutil;

void mostrarVector(int v[], int tam);

void cargarNombre(char v[]);

void mostrarNombre(char v[]);

void cargarVector(int v[], int tam);



void copiarvectornombre(char V[], char t[], int tam);



int contarNumerosRepetidos(int v[], int numero , int tam);   /// Cuenta la cantidad de veces que se repite un número en el vector.






//int (int v[], int tam); /// Devuelve  la posición (primera) que ocupa el máximo en el vector.

int minimoVector(int v[], int tam); /// Devuelve  la posición (primera) que ocupa el mínimo en el vector.

void cargarAleatorio(int v[], int tam, int limite); /// Asigna valores aleatorios al vector.

void ordenarVector(int v[], int tam ); /// Ordena de menor a mayor un vector.

int sumarVector(int v[], int tam ); /// Suma los valores contenidos en el vector.

void copiarVector(int v[], int v2[],int tam ); /// Copia el vector v en v2.

bool compararVectores(int v[], int v2[],int tam ); /// Compara los dos vectores que recibe. Si son iguales devuelve true, si no devuelve false.

float calcularPromedio(int v[], int tam); /// Calcula promedio dentro del vector.

int posicionNumeroEnVector(int v[],int tam, int numero); /// Dandole un número busca la posición de dicho número.


/// Desarrollo de funciones generales.


int ContarNumerosRepetidos(int V[], int Numero, int Tam){
    int Cant=0;
    for(int I=0;I<Tam;I++){
        if(V[I]==Numero) Cant++;
    }
    return Cant;
}
int MaximoVector(int V[], int Tam){
    int PosMax=0;
    for(int I=1;I<Tam;I++){
        if(V[I]>V[PosMax]) {
            PosMax=I;
        }
    }
    return PosMax;
}

int posicionNumeroEnVector(int v[],int tam, int numero){
    int i;
    for(i=0;i<tam;i++){
    if(v[i]==numero) return i;
    }
    return -1;
}

int minimoVector(int v[], int tam){
    int i, posMin=0;
    for(i=1;i<tam;i++){
        if(v[i]<v[posMin]) {
                posMin=i;
        }
    }
    return posMin;
}

void ordenarVector(int v[], int tam ){
    int i,j, posmin, aux;
    for(i=0;i<tam-1;i++){
        posmin=i;
        for(j=i+1;j<tam;j++){
        if(v[j]<v[posmin]) posmin=j;
        }
        aux=v[i];
        v[i]=v[posmin];
        v[posmin]=aux;
    }
}

int maximoVector(int v[], int tam){
    int i, posMax=0;
    for(i=1;i<tam;i++){
        if(v[i]>v[posMax]) {
                posMax=i;
        }
    }
    return posMax;
}

void cargarAleatorio(int v[], int tam, int limite){
  int i;
  srand(time(NULL));
    for(i= 0   ; i<tam; i++){
        v[i]=(rand()%limite)+1;
    }
}

void mostrarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<v[i]<<"\n";
    }
    cout<<endl;
}

int contarNumerosRepetidos(int v[], int numero, int tam){
    int i, cant=0;
    for(i=0;i<tam;i++){
        if(v[i]==numero) cant++;
        }
    return cant;
}

void ponerCero(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        v[i]=0;
    }
}

int sumarVector(int v[], int tam ){
    int i, suma=0;
    for(i=0;i<tam;i++){
        suma+=v[i];
    }
    return suma;
}

void copiarVector(int v[], int v2[],int tam ){
    int i;
    for(i=0;i<tam;i++){
        v2[i]=v[i];
    }
}

bool compararVectores(int v[], int v2[],int tam ){
   int i;
    for(i=0;i<tam;i++){
        if(v2[i]!=v[i]) return false;
    }
    return true;
}

void cargarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<"INGRESE NUMERO: ";
        cin>>v[i];
    }
}

float calcularPromedio(int v[], int tam){
    int suma;
    float prom;
    suma=sumarVector(v,tam);
    prom=(float)suma/tam;
    return prom;
}

void copiarvectornombre(char v[],char t[],int tam){

    for(int i=0;i<tam;i++){
        t[i]=v[i];
    }
}


void mostrarNombre(char v[]){
    cout<<v<<'\t';
    cout<<endl;
}
int REC2[8]={218,196,191,179,217,196,192,179};

void CargarVector(int V[], int t){

    for(int r=0;r<t;r++){
        TextColor(2);
        Say(10,r+5,"INGRESE LOS DADOS:");cin>>V[r];
    }
}


int calcularBunco(int v[], int ronda, int t){
    int bunco;
    bunco=contarNumerosRepetidos(v,ronda,t);
    if(bunco==3) {return 21;}
    return 0;
}

int calcularRepetidos(int v[], int t){
    int cant;
    bool repetidos=false;
    for(int i=1; i<=6; i++){
        cant=contarNumerosRepetidos(v,i,t);
        if(cant==3) {repetidos=true;}
    }
    if(repetidos==true) {return 5;}
    return 0;
}

int calcularSumaDivisible5(int v[], int t){
    int suma;
    suma=sumarVector(v,t);
    if(suma%5==0) {return 3;}
    return 0;
}

int calcularEscalera(int v[], int t){
    bool ordenados=false;
    ordenarVector(v,t);
    if((v[0]==v[1]-1) && (v[1]==v[2]-1)) {ordenados=true;}
    if(ordenados==true) {return 2;}
    return 0;
}









//=======================================================================================================//
int REC3[8]={220,220,220,219,223,223,223,219};

int AnalizarTirada(int V[], int T, int Ronda){
    int Puntos[5]={}, Pos;

    Puntos[0]=calcularBunco(V , Ronda, 3 );
    Puntos[1]= calcularRepetidos(V,3);
    Puntos[2]=calcularSumaDivisible5(V,3);
    Puntos[3]= calcularEscalera(V,3);
    Puntos[4]=ContarNumerosRepetidos(V, Ronda, 3);

    Pos=MaximoVector(Puntos,5);

    SetColorB(5,5);
    Rectangulo(85,24,27,2,REC3);
    TextColor(1);
    Say(87,25,"PUNTAJE DE LA TIRADA: "); cout<<Puntos[Pos];
    SetColorA(8,4);
    Rectangulo(8,24,10,2,REC3);
    TextColor(2);
    Say(10 , 25,"SACASTE");

    if(Puntos[Pos]!=0){
            switch(Pos){
            case 0:
                SetColorA(1,3);
                Rectangulo( 28, 24  ,13,2,REC3);
                TextColor(2);
                Say(30  ,  25   ," BUNCO!.");
                    break;
                case 1:

                SetColorA(5,8);
                Rectangulo(28 ,24  ,50,2,REC3);
                TextColor(5);
                Say(      30   ,  25," 3 NUMEROS REPETIDOS DISTINDOS DE LA RONDA!.");
            break;


            case 2:
                SetColorA(2,1);
                Rectangulo(   25    ,   24,36,2,REC3);
                TextColor(7);
                Say( 27  , 25    ," SUMA DE NUMEROS DIVISIBLES POR 5!");

            break;
            case 3:
                SetColorA(1,9);
                Rectangulo( 28  ,  24, 13,2,REC3);
                TextColor(9);
                Say( 29 , 25    ," ESCALERA!");


            break;

            case 4:
                SetColorA(1,7);
                Rectangulo( 25  ,24  ,54,2,REC3);
                TextColor(10);
                Say(     27  ,25       ," 1 O 2 NUMEROS REPETIDOS IGUAL AL NUMERO DE RONDA!.");


                break;
        }
    }
    else{
                SetColorA(5,10);
                Rectangulo(25 ,24   ,18,2,REC3);
                TextColor(1);
                Say(     27 ,     25   ,"TIRADA FALLIDA");

    }



    return Puntos[Pos];
}






//==========================================================================================//

void AnalisisUnJugador(char N[], int Ronda, int Buncos, int CantFallidas, int CantTiradas, int PuntosTotales){


    Say(18,5,"Jugador: "); cout<<N;
    Say(18,7,"Siguiente Ronda: "); cout<<Ronda;

    Say(10,12,"Buncos: "); cout<<Buncos;
    Say(10,14,"Puntos: "); cout<<PuntosTotales;
    Say(10,18,"Tiradas fallidas: "); cout<<CantFallidas;
    Say(10,16,"Tiradas totales: "); cout<<CantTiradas;
}

//=======================================================================================================================//
///void AnalisisUnJugador(char N[], int Ronda, int Buncos, int CantFallidas, int CantTiradas, int PuntosTotales){
//    Say(18,5,"Jugador: "); cout<<N;
   // Say(18,7,"Siguiente Ronda: "); cout<<Ronda;

    //Say(10,12,"Buncos: "); cout<<Buncos;
    //Say(10,14,"Puntos: "); cout<<PuntosTotales;
    //Say(10,18,"Tiradas fallidas: "); cout<<CantFallidas;
    //Say(10,16,"Tiradas totales: "); cout<<CantTiradas;
//}

void caradado(int  v[],int t){
switch(v[0]){

  case 1: for (int I=  22;   I< 38; I++){
// DE ABAJO PARA ARRIBA
 SetColorC(3,9);
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11; I< 16 ;I++){
        locate(    21   ,     I); printf("%c", 186);
        locate(37 , I); printf("%c", 186);
    }

    /// Esquinas.

    locate(   21 ,   10 ); printf("%c", 201);
    locate( 21  ,    16); printf("%c", 200);
    locate(37      ,  10   ); printf("%c", 187);
    locate( 37  ,  16 ); printf("%c", 188);

    locate(     29 ,     13 ); printf("%c",   254   );
   //otoxy( 10 , 10 );
    break;
  case 2:
       for (int I=  22;   I< 38; I++){
            SetColorC(3,9);
// DE ABAJO PARA ARRIBA
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11; I< 16 ;I++){
        locate(    21   ,     I); printf("%c", 186);
        locate(37 , I); printf("%c", 186);
    }

    /// Esquinas.

    locate(   21 ,   10 ); printf("%c", 201);
    locate( 21  ,    16); printf("%c", 200);
    locate(37      ,  10   ); printf("%c", 187);
    locate( 37  ,  16 ); printf("%c", 188);
    locate( 23   , 11); printf("%c", 254);
            locate( 35 , 15); printf("%c", 254);


    break;
  case 3:
       for (int I=  22;   I< 38; I++){
            SetColorC(3,9);
// DE ABAJO PARA ARRIBA
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11; I< 16 ;I++){
        locate(    21   ,     I); printf("%c", 186);
        locate(37 , I); printf("%c", 186);
    }

    /// Esquinas.

    locate(   21 ,   10 ); printf("%c", 201);
    locate( 21  ,    16); printf("%c", 200);
    locate(37      ,  10   ); printf("%c", 187);
    locate( 37  ,  16 ); printf("%c", 188);
  //----------------------------------------------
    locate( 35, 11); printf("%c", 254);
    locate(     29 ,13  ); printf("%c", 254);
    locate( 23, 15); printf("%c", 254);

    break;
  case 4:
         for (int I=  22;   I< 38; I++){
                SetColorC(3,9);
// DE ABAJO PARA ARRIBA
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11; I< 16 ;I++){
        locate(    21   ,     I); printf("%c", 186);
        locate(37 , I); printf("%c", 186);
    }

    /// Esquinas.

    locate(   21 ,   10 ); printf("%c", 201);
    locate( 21  ,    16); printf("%c", 200);
    locate(37      ,  10   ); printf("%c", 187);
    locate( 37  ,  16 ); printf("%c", 188);
    //--------------------------------------------------------
            locate(23   , 11); printf("%c", 254);
            locate( 35,   11); printf("%c", 254);
            locate( 23, 15)  ; printf("%c", 254);
            locate( 35 ,15 ); printf("%c", 254);
    break;
  case 5:   for (int I=  22;   I< 38; I++){
      SetColorC(3,9);
// DE ABAJO PARA ARRIBA
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11; I< 16 ;I++){
        locate(    21   ,     I); printf("%c", 186);
        locate(37 , I); printf("%c", 186);
    }

    /// Esquinas.

    locate(   21 ,   10 ); printf("%c", 201);
    locate( 21  ,    16); printf("%c", 200);
    locate(37      ,  10   ); printf("%c", 187);
    locate( 37  ,  16 ); printf("%c", 188);
    //-------------------------------------------


            locate(23   , 11); printf("%c", 254);
            locate( 35,   11); printf("%c", 254);
            locate( 23, 15)  ; printf("%c", 254);
            locate( 35 ,15 ); printf("%c", 254);
            locate( 29 ,  13); printf("%c", 254);

    break ;
  case 6:
       for (int I=  22;   I< 38; I++){
// DE ABAJO PARA ARRIBA
SetColorC(3,9);
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11; I< 16 ;I++){
        locate(    21   ,     I); printf("%c", 186);
        locate(37 , I); printf("%c", 186);
    }

    /// Esquinas.

    locate(   21 ,   10 ); printf("%c", 201);
    locate( 21  ,    16); printf("%c", 200);
    locate(37      ,  10   ); printf("%c", 187);
    locate( 37  ,  16 ); printf("%c", 188);
    //----------------------------------------------------
            locate(23   , 11); printf("%c", 254);
            locate( 23 ,   13  ); printf("%c", 254);
            locate( 23, 15)  ; printf("%c", 254);
            locate( 35 ,11); printf("%c", 254);
            locate( 35  ,  13  ); printf("%c", 254);
             locate(   35, 15 ); printf("%c", 254);





    break;
}

switch(v[1]){

  case 1:
      for (int I=  40;   I<  56; I++){
// DE ABAJO PARA ARRIBA
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11  ; I< 16  ;I++){
        locate(    40,     I); printf("%c", 186);
        locate(  56  ,I); printf("%c", 186);
    }

    /// Esquinas.

    locate( 40 ,   10 ); printf("%c", 201);
    locate( 40  ,    16); printf("%c", 200);
    locate( 56  ,  10   ); printf("%c", 187);
    locate( 56 ,  16  ); printf("%c", 188);

    locate(   48,     13 ); printf("%c",   254   );



    break;
  case 2:
      for (int I=  40;   I<  56; I++){
// DE ABAJO PARA ARRIBA
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11  ; I< 16  ;I++){
        locate(    40,     I); printf("%c", 186);
        locate(  56  ,I); printf("%c", 186);
    }

    /// Esquinas.

    locate( 40 ,   10 ); printf("%c", 201);
    locate( 40  ,    16); printf("%c", 200);
    locate( 56  ,  10   ); printf("%c", 187);
    locate( 56 ,  16  ); printf("%c", 188);

     locate(   43 ,     11 ); printf("%c",   254   );
      locate(   53  ,    15  ); printf("%c",   254   );






    break;
  case 3:
      for (int I=  40;   I<  56; I++){
// DE ABAJO PARA ARRIBA
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11  ; I< 16  ;I++){
        locate(    40,     I); printf("%c", 186);
        locate(  56  ,I); printf("%c", 186);
    }

    /// Esquinas.

    locate( 40 ,   10 ); printf("%c", 201);
    locate( 40  ,    16); printf("%c", 200);
    locate( 56  ,  10   ); printf("%c", 187);
    locate( 56 ,  16  ); printf("%c", 188);

     locate(   53,     11 ); printf("%c",   254   );
      locate(   48 ,  13); printf("%c",   254   );
       locate(   43 ,     15); printf("%c",   254   );






    break;
  case 4:
      for (int I=  40;   I<  56; I++){
// DE ABAJO PARA ARRIBA
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11  ; I< 16  ;I++){
        locate(    40,     I); printf("%c", 186);
        locate(  56  ,I); printf("%c", 186);
    }

    /// Esquinas.

    locate( 40 ,   10 ); printf("%c", 201);
    locate( 40  ,    16); printf("%c", 200);
    locate( 56  ,  10   ); printf("%c", 187);
    locate( 56 ,  16  ); printf("%c", 188);

        locate(   43 ,     11)  ; printf("%c",   254   );
        locate(   53,     11); printf("%c",   254   );
        locate(   43 ,     15); printf("%c",   254   );
        locate(   53,    15) ;  printf("%c",   254   );




    break;
  case 5:
     for (int I=  40;   I<  56; I++){
// DE ABAJO PARA ARRIBA
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11  ; I< 16  ;I++){
        locate(    40,     I); printf("%c", 186);
        locate(  56  ,I); printf("%c", 186);
    }

    /// Esquinas.

    locate( 40 ,   10 ); printf("%c", 201);
    locate( 40  ,    16); printf("%c", 200);
    locate( 56  ,  10   ); printf("%c", 187);
    locate( 56 ,  16  ); printf("%c", 188);

        locate(   43  ,   11  ); printf("%c",   254   );
        locate(   53,    11); printf("%c",   254   );
        locate(  43,   15); printf("%c",   254   );
        locate( 53 ,    15); printf("%c",   254   );
        locate(  48, 13); printf("%c",   254   );




    break ;
  case 6:
      for (int I=  40;   I<  56; I++){
// DE ABAJO PARA ARRIBA
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11  ; I< 16  ;I++){
        locate(    40,     I); printf("%c", 186);
        locate(  56  ,I); printf("%c", 186);
    }

    /// Esquinas.

    locate( 40 ,   10 ); printf("%c", 201);
    locate( 40  ,    16); printf("%c", 200);
    locate( 56  ,  10   ); printf("%c", 187);
    locate( 56 ,  16  ); printf("%c", 188);



        locate(  43 , 11); printf("%c",   254   );
        locate(  43 , 13   ); printf("%c",   254   );
        locate(  43  , 15 ); printf("%c",   254   );
        locate( 54, 11 ); printf("%c",   254   );
        locate(  54 , 13  ); printf("%c",   254   );
        locate(  54, 15  ); printf("%c",   254   );


    break;

}

switch(v[2]){
  case 1:
    for (int I=  60;   I< 76 ; I++){
// DE ABAJO PARA ARRIBA
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11; I< 16  ;I++){
        locate(  76,    I); printf("%c", 186);
        locate( 60,I); printf("%c", 186);
    }

    /// Esquinas.

    locate( 60,  10 ); printf("%c", 201);
    locate( 60,    16); printf("%c", 200);
    locate( 76 , 10   ); printf("%c", 187);
    locate( 76,  16  ); printf("%c", 188);

      locate(  68 ,   13     ); printf("%c", 254);


    break;
  case 2:
             for (int I=  60;   I< 76 ; I++){
// DE ABAJO PARA ARRIBA
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11; I< 16  ;I++){
        locate(  76,    I); printf("%c", 186);
        locate( 60,I); printf("%c", 186);
    }

    /// Esquinas.

    locate( 60,  10 ); printf("%c", 201);
    locate( 60,    16); printf("%c", 200);
    locate( 76 , 10   ); printf("%c", 187);
    locate( 76,  16  ); printf("%c", 188);


      locate(  63 ,   11 ); printf("%c", 254);
        locate(  73,   15 ); printf("%c", 254);




    break;
  case 3:
            for (int I=  60;   I< 76 ; I++){
// DE ABAJO PARA ARRIBA
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11; I< 16  ;I++){
        locate(  76,    I); printf("%c", 186);
        locate( 60,I); printf("%c", 186);
    }

    /// Esquinas.

    locate( 60,  10 ); printf("%c", 201);
    locate( 60,    16); printf("%c", 200);
    locate( 76 , 10   ); printf("%c", 187);
    locate( 76,  16  ); printf("%c", 188);


     locate(  74  , 11); printf("%c",   254   );
      locate(  68  ,   13 ); printf("%c", 254);
       locate(  63 ,   15 ); printf("%c", 254);

    break;
  case 4:
             for (int I=  60;   I< 76 ; I++){
// DE ABAJO PARA ARRIBA
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11; I< 16  ;I++){
        locate(  76,    I); printf("%c", 186);
        locate( 60,I); printf("%c", 186);
    }

    /// Esquinas.

    locate( 60,  10 ); printf("%c", 201);
    locate( 60,    16); printf("%c", 200);
    locate( 76 , 10   ); printf("%c", 187);
    locate( 76,  16  ); printf("%c", 188);


    locate(  63 ,   11 ); printf("%c", 254);
    locate(  63 ,   15 ); printf("%c", 254);
    locate(   74 ,   11); printf("%c", 254);
    locate(  74,   15); printf("%c", 254);



    break;
  case 5:
           for (int I=  60;   I< 76 ; I++){
// DE ABAJO PARA ARRIBA
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11; I< 16  ;I++){
        locate(  76,    I); printf("%c", 186);
        locate( 60,I); printf("%c", 186);
    }

    /// Esquinas.

    locate( 60,  10 ); printf("%c", 201);
    locate( 60,    16); printf("%c", 200);
    locate( 76 , 10   ); printf("%c", 187);
    locate( 76,  16  ); printf("%c", 188);



    locate(  63 ,   11 ); printf("%c", 254);
    locate(  63 ,   15 ); printf("%c", 254);
    locate(   74 ,   11); printf("%c", 254);
    locate(  74,   15); printf("%c", 254);

    locate(  69  ,   13     ); printf("%c", 254);

    break ;
  case 6:        for (int I=  60;   I< 76 ; I++){
// DE ABAJO PARA ARRIBA
       locate(I ,       10  ) ; printf("%c", 205);
        locate(I,  16 ); printf("%c", 205);}

//LOS COSTADOSf
    for (int I= 11; I< 16  ;I++){
        locate(  76,    I); printf("%c", 186);
        locate( 60,I); printf("%c", 186);
    }

    /// Esquinas.

    locate( 60,  10 ); printf("%c", 201);
    locate( 60,    16); printf("%c", 200);
    locate( 76 , 10   ); printf("%c", 187);
    locate( 76,  16  ); printf("%c", 188);

 locate(  63 ,   11 ); printf("%c", 254);
  locate(  63 ,   13 ); printf("%c", 254);
   locate(  63 ,   15 ); printf("%c", 254);
    locate(  74 ,   11 ); printf("%c", 254);
     locate(  74 ,   13 ); printf("%c", 254);
      locate(  74 ,   15 ); printf("%c", 254);


    break;


}

}




#endif // FUNCIONES_GENERALES_H_INCLUDED
