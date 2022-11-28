#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main() //el punto de inicio de su ejecucion
{
	int NACJ_aa,NACJ_ma,NACJ_da,NACJ_an,NACJ_mn,NACJ_dn,NACJ_a,NACJ_m,NACJ_d;//declaracion de variables
	cout<<"Ingrese la fecha actual : ";//salida de texto en pantalla
	cin>>NACJ_aa>>NACJ_ma>>NACJ_da;//entrada de datos

	cout<<"Ingrese la fecha de nacimiento : ";//salida de texto en pantalla
	cin>>NACJ_an>>NACJ_mn>>NACJ_dn;//entrada de datos
	if(NACJ_da>NACJ_dn){ //inicio del bucle si entonces
		NACJ_d=NACJ_da-NACJ_dn;//realizar proceso
	}else{
		NACJ_da=NACJ_da+30;//realizar proceso
		NACJ_ma=NACJ_ma-1;//realizar proceso
		NACJ_d=NACJ_da-NACJ_dn;//realizar proceso
	}
	if(NACJ_ma>NACJ_mn){ //inicio del bucle si entonces
		NACJ_m=NACJ_ma-NACJ_mn;//realizar proceso
	}else{
		NACJ_ma=NACJ_ma+12;//realizar proceso
		NACJ_aa=NACJ_aa-1;//realizar proceso
		NACJ_m=NACJ_ma-NACJ_mn;//realizar proceso
	}
	NACJ_a=NACJ_aa-NACJ_an;
	cout<<"Usted tiene "<<NACJ_a<<" años, "<<NACJ_m<<" meses, "<<NACJ_d<<" dias "<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa. 

}
