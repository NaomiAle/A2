#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main() //el punto de inicio de su ejecucion
{
	float NACJ_x,NACJ_s=0,NACJ_s1=0,NACJ_s5=0;//declaracion de variables
	int NACJ_i=0,NACJ_l,NACJ_i1=0,NACJ_i5=0;//declaracion de variables
	cout<<"Ingrese l: ";//salida de texto en pantalla
	cin>>NACJ_l;
	do{ //inicio del bucle hacer mientras
		cout<<"Ingrese x : ";//salida de texto en pantalla
		cin>>NACJ_x;//entrada de datos
		NACJ_i=NACJ_i+1;//realizar proceso
		NACJ_s=NACJ_s+NACJ_x;//realizar proceso
		if(NACJ_x==1){ //inicio del bucle si entonces
			NACJ_i1=NACJ_i1+1;//realizar proceso
			NACJ_s1=NACJ_s1+NACJ_x;//realizar proceso

		}else{ 
			NACJ_i5=NACJ_i5+1;//realizar proceso
			NACJ_s5=NACJ_s5+NACJ_x;//realizar proceso
		} //fin del bucle si entonces

	}while(NACJ_i<NACJ_l);//fin del bucle hacer mientras
	cout<<"La cantidad de monedas fue : "<<NACJ_i<<endl;//salida de texto en pantalla
	cout<<"El valor fue: "<<NACJ_s<<endl;//salida de texto en pantalla

	cout<<"La cantidad de monedas s1 fue : "<<NACJ_i1<<endl;//salida de texto en pantalla
	cout<<"El valor fue : "<<NACJ_s1<<endl;//salida de texto en pantalla

	cout<<"La cantidad de monedas .5"//salida de texto en pantalla
	cout<<"El valor fue : "<<NACJ_s5<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.

}
