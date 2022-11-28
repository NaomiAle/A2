#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main() //el punto de inicio de su ejecucion
{
	float NACJ_x,NACJ_s=0,NACJ_vb,NACJ_piva=12,NACJ_viva,NACJ_pdesc=10,NACJ_vdesc,NACJ_vn;//declaracion de variables
	int NACJ_i=0,NACJ_l;//declaracion de variables
	cout<<"Ingrese l: ";//salida de texto en pantalla
	cin>>NACJ_l;//entrada de datos
	do{ //inicio del bucle hacer mientras
		cout<<"Ingrese x: ";//salida de texto en pantalla
		cin>>NACJ_x;//entrada de datos
		NACJ_i=NACJ_i+1;//realizar proceso
		NACJ_s=NACJ_s+NACJ_x;//realizar proceso 
	}while(NACJ_i<NACJ_l);//fin del bucle hacer mientras
	NACJ_vb=NACJ_s;//realizar proceso
	NACJ_viva=NACJ_vb*NACJ_piva/100;//realizar proceso
	NACJ_vdesc=NACJ_vb*NACJ_pdesc/100;//realizar proceso
	NACJ_vn=NACJ_vb+NACJ_viva-NACJ_vdesc;//realizar proceso
	cout<<"El valor a pagar es de: "<<NACJ_vn<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.
	
}
