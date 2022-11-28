#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main() //el punto de inicio de su ejecucion
{
	float NACJ_x,NACJ_s=0;//declaracion de variables.
	int NACJ_i=0,NACJ_l;//declaracion de variables.
	cout<<"Ingrese cantidad de egrasos (1) : ";//salida de texto en pantalla.
	cin>>NACJ_l;//entrada de datos.
	cout<<"Ingrese el saldo inicial (s) : ";//salida de texto en pantalla.
	cin>>NACJ_s;//entrada de datos.
	do{ //inicio del bucle hacer mientras.
		cout<<"Ingrese egreso (x) : ";//salida de texto en paqntalla.
		cin>>NACJ_x;//entrada de datos.
		NACJ_i=NACJ_i+1;//realizas proceso.
		NACJ_s=NACJ_s+NACJ_x;//realizar proceso.
	}while(NACJ_i<NACJ_l); //din del bucle hacer mientras.
	cout<<"El saldo final es: "<<NACJ_s<<endl;//salida de texto en pantalla.
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.

}
