#include "soporte.h"

struct OPC
	{
		int id;
		char name[128];
		int x,y;
	};

class MENU
{
	public:
		MENU(){
	con=0;
	OPC_SEL=1;
	ESPACIO=1;

	COLOR=4;
	COLORB=7;
}
		virtual ~MENU(){
		}
		void Set_Space(int s){
	ESPACIO=s;
}
		void Add_Items(const char *txt, int index){
	Opc[index].id=index;
	sprintf(Opc[index].name,"%s",txt);
	con=con+1;
}

		int DrawV(int x,int y){
		     int tecla=0;
	bool Sel=false;
	int FILA;

	while(tecla!=13)
	{
	FILA=y;
	for(int i=1;i<con+1;i++)
	  {     SetColorA(COLOR,COLORB);

			if(OPC_SEL==i)
			{
				SetColorA(3,10);
			}
			Gotoxy(x,FILA);printf("%s",Opc[i].name);
			FILA=FILA+ESPACIO;
	  }
      SetColorC(55,1);

      tecla=_getch();
      //Beep(1568,20);
	  switch ( tecla )
	  {     case 72://Arriba
	            OPC_SEL=OPC_SEL-1;
	            if(OPC_SEL<1)
	               {OPC_SEL=1;}
	  			break;
		    case 80://Abajo
	            OPC_SEL=OPC_SEL+1;
	            if(OPC_SEL>con)
	               {OPC_SEL=con;}
	  			break;
	  }

	}

	return OPC_SEL;
}

		int DrawH(int x,int y)  { int tecla=0;
	bool Sel=false;
	int COL;

	while(tecla!=13)
	{
	COL=x;
	for(int i=1;i<con+1;i++)
	  {     SetColorA(COLOR,COLORB);

			if(OPC_SEL==i)
			{
				SetColorA(0,0);
			}
			Gotoxy(COL,y);printf("%s",Opc[i].name);
			int d=strlen(Opc[i].name);
			COL=COL+d+ESPACIO;
	  }
      SetColorC(15,0);

      tecla=_getch();

	  switch ( tecla )
	  {     case 75://IZQUIERDA
	            OPC_SEL=OPC_SEL-1;
	            if(OPC_SEL<1)
	               {OPC_SEL=1;}
	  			break;
		    case 77://DERECHA
	            OPC_SEL=OPC_SEL+1;
	            if(OPC_SEL>con)
	               {OPC_SEL=con;}
	  			break;
	  }

	}

	return OPC_SEL;
}



		int COLOR,COLORB;
	private:
		int con;
		OPC Opc[10];
		int OPC_SEL,ESPACIO;

};



