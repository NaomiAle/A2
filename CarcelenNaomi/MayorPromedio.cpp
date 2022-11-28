#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main() //el punto de inicio de su ejecucion.
{
	float NACJ_x,NACJ_pm;//declaracion de variables
	int NACJ_i=0,NACJ_l;//declaracion de variables
	cout<<"Ingrese l: ";//salida de texto en pantalla
	cin>>NACJ_l;//entrada de datos
	do{ //inicio del bucle hacer mientras
		cout<<"Ingrese x: ";//salida de texto en pantalla
		cin>>NACJ_x;//entrada de datos
		NACJ_i=NACJ_i+1;//realizar proceso
		if(NACJ_x>NACJ_pm){ //inicio del bucle si entonces
			NACJ_pm=NACJ_x;//realizar proceso
		}
	}while(NACJ_i<NACJ_l);//fin del bucle hacer mientras
	cout<<"El promedio maximo de el curso fue: "<<NACJ_pm<<endl<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.
}

