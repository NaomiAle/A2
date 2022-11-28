#include<iostream>//operaciones de entrada/salida
using namespace std;//Dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la libreria estandar.
int main() //El punto de inicio de su ejecucion.
{
	float NACJ_x,NACJ_i=0,NACJ_s=0,NACJ_l;//Declaracion de las variables.
	cout<<"Ingrese el valor de l: ";//Salida de texto en pantalla.
	cin>>NACJ_l;//Entrada de datos.
	do{ //Bucle hacer mientras 
		cout<<"Ingrese el valor de x: ";//Salida te texto en pantalla.
		cin>>NACJ_x;//entrada de datos.
		NACJ_i=NACJ_i+1;//realizar proceso.
		NACJ_s=NACJ_s+NACJ_x;//realizar proceso.
	}while(NACJ_i<NACJ_l);//fin bucle hace mientras.

	cout<<"La suma de los numeros fue: "<<NACJ_s<<endl;//salida de texto de pantalla.
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.
}

