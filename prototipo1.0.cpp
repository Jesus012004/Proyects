
//directivas del preprocesador
#include<iostream>
#include<conio.h>
#include"matrix.h"


//prototipos de funciones
void menu();

//estructuras
struct algebra{
	int repeticiones = 1; //repeticiones(numero de veces que la pc ejecutara la operacion seleccionada)
	
	int numerofilas = 0;
	int numerocolumnas = 0; //operaciones(numero asignado a la operacion a realizar) los otros nombres se explican por si solos
	
	int numerofilas2 = 0;
	int numerocolumnas2 = 0;
		
}tarea;

int main(){
	system("COLOR 0A");
	menu();
	getch();
	system("pause");
	return 0;
}

void menu(){
	int operaciones = 0;
	std::cout<<"BIENVENIDO A CALCULADORA LINEAL DE MATRICES"<<std::endl;
	std::cout<<"PRIMERO INDIQUE EL NUMERO DE FILAS Y EL NUMERO DE COLUMNAS."<<std::endl;
	std::cout<<"FILAS DE LA PRIMERA MATRIZ: "<<std::endl; 
	std::cin>>tarea.numerofilas;
	std::cout<<"COLUMNAS DE LA PRIMERA MATRIZ: "<<std::endl; 
	std::cin>>tarea.numerocolumnas;
	std::cout<<"FILAS DE LA SEGUNDA MATRIZ: "<<std::endl; 
	std::cin>>tarea.numerofilas2;
	std::cout<<"COLUMNAS DE LA SEGUNDA MATRIZ: "<<std::endl; 
	std::cin>>tarea.numerocolumnas2;
	std::cout<<"OPCIONES: "<<std::endl;;
	std::cout<<"(1)SUMA."<<std::endl;
	std::cout<<"(2)RESTA."<<std::endl;
	std::cout<<"(3)MULTIPLICACION"<<std::endl;
	std::cout<<"(4)HALLAR LA TRASPUESTA."<<std::endl;
	std::cout<<"(5)MULTIPLICAR POR UN ESCALAR."<<std::end;
	std::cout<<"(7) SALIR"<<std::endl;
	std::cout<<"DIGITE EL NUMERO ENCERRADO ENTRE PARENTESIS PARA EJECUTAR LA OPERACION CORRESPONDIENTE: "<<std::endl; 		
	std::cin>>operaciones;
	
	switch(operaciones){
		case 1: 
			system("cls");
			//if(tarea.numerofilas == tarea.numerofilas2 and tarea.numerocolumnas == tarea.numerocolumnas2){ //condicional para ejecutar la operacion en caso de que sea posible
				mtx::suma(tarea.numerofilas);
			//}else{
				//std::cout<<"NO ES POSIBLE REALIZAR LA OPERACION SOLICITADA."<<std::endl;
				//getch();
			//}
			system("cls");
			menu();
			break; 
		case 2: 
			system("cls");
			//if(tarea.numerofilas == tarea.numerofilas2 and tarea.numerocolumnas == tarea.numerocolumnas2){
				mtx::resta(tarea.numerofilas);
			//}else{
			//	std::cout<<"NO ES POSIBLE REALIZAR LA OPERACION SOLICITADA."<<std::endl;
			//}
			system("cls");
			menu();
			break;
		case 3: 
			system("cls");
			//if(tarea.numerocolumnas == tarea.numerofilas2){
				mtx::multiplicacion(tarea.numerofilas,tarea.numerocolumnas,tarea.numerofilas2,tarea.numerocolumnas2);
			//}else{
				//std::cout<<"NO"<<std::endl;
			//}
			system("cls");
			menu();
			break;
		case 4: 
			system("cls");
			//if( tarea.numerofilas == tarea.numerocolumnas){
				mtx::traspuesta(tarea.numerofilas,tarea.numerocolumnas);
			//}else{
				//std::cout<<"NO"<<std::endl;
			//}
			system("cls");
			menu();
			break;
		case 5: 
		 	system("cls");
		 	//if(tarea.numerofilas == tarea.numerocolumnas){
				mtx::escalar(tarea.numerofilas);
			//}else{
				//std::cout<<"NO"<<std::endl;
			//}
			system("cls");
			menu();
			break;
		case 6:
			system("cls");
			double **matriz1 = new double *[tarea.numerofilas+1];
			for(int i = 0; i < tarea.numerofilas; i++){
				matriz1[i] = new double [tarea.numerocolumnas+1];
			}
			//inicializando la primera matriz en 0
			for(int i = 0; i < tarea.numerofilas;i++){
				for(int j = 0; j < tarea.numerocolumnas;j++){
					*(*(matriz1+i)+j) = 0;
				}
			}	
			double det = mtx::determinante(**matriz1,tarea.numerofilas);
			std::cout<<"EL DETERMINANTE ES: "<<det<<"\n";
			getch();		
			system("cls");
			menu();
			break;
		case 7:
			std::cout<<"PROCEDIENDO A CERRAR EL PROGRAMA"<<std::endl;
			exit(1);
			break;
		default: 
		std::cout<<"EL NUMERO INGRESADO NO CONCUERDA CON NINGUNA OPCION, SE PROCEDE A CERRAR EL PROGRAMA."<<std::endl;
		exit(1);
		break; //por si acaso
	}
}
