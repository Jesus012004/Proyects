#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//prototipos de funciones

void Limpiar_Pantalla(); //funcion de consola
void intro(); 	//introduccion al proyecto
void Menu();	//menu de opciones
void reservando_memoria();	//funcion para rellenar la tabla
int stock();	//Calcular el total de productos en stock por año
int mayorstock();	//Identificar el mes con mayor cantidad de productos en stock
int promedio();		//Calcular el promedio de productos en stock en un intervalo de años

//variables globales

int matriz_inventario[12][12]; 
string mes[13] = {"Meses","Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

//estructuras

struct reservamemoria{
	int filas = 0;
	const int columnas = 12;
	int anio = 0;//reservando_memoria
}memoria;

struct cantidad_de_productos{
	long productos = 0;//cant_bajas
	int year = 0;
	int year2 = 0;
	int aux2 = 0;
}productos;

struct promedio{
	int anio2 = 0;		//promedio
	float promedio;
	int conteo = 0;
}promedio1;

int main(){
	system("COLOR 0A");
	intro();
	reservando_memoria();
	Menu();
	system("pause");
	return 0;
}

 
void Limpiar_Pantalla(){
	int tecla;
	while(true){
		if(kbhit()){
			tecla =_getch();
			system("cls");	
			break;
		}
	}
}

void Menu(){
	int opcion = 0;
	for(int iterador=0;iterador<1000;iterador++){
	Limpiar_Pantalla();
	printf("           _____________________________________________________________________________________________________\n");
	printf("          |                                                                                                     |\n");
	printf("          |                                     <h1>MENU DE OPCIONES.</h1>                                      |\n");     
	printf("          |                         <h2>(1)CALCULAR EL TOTAL DE PRODUCTOS EN STOCK.</h2>                        |\n");
	printf("          |                   <h3>(2)BUSCAR EL MES CON MAS PRODUCTOS EN STOCK DADO UN ANIO.</h3>                |\n");
	printf("          |            <h4>(3) CALCULAR EL PROMEDIO DE PRODUCTOS EN STOCK DADO UN INTERVALO DE ANIOS</h4>       |\n");
	printf("          |                          <h5>(4)INGRESAR NUEVOS VALORES EN LA TABLA</h5>                            |\n");
	printf("          |                                        <h6>(5)SALIR</h6>                                            |\n");
	printf("          |_____________________________________________________________________________________________________|\n\n");
    printf("                                                          ");cin>>opcion;
	switch(opcion){
		case 1: 
			system("cls");
			stock(); 
            break;
		case 2:	
			system("cls");
			mayorstock();
			break;
		case 3: 
			system("cls");
			promedio();
			break;
		case 4: 
			system("cls");
			reservando_memoria();
			break;
		case 5: 
			exit(1);
			break;
		default: 
			system("cls");
			printf("           _____________________________________________________________________________________________________\n");
			printf("          |                                                                                                     |\n");
			printf("          |                 <h1>!ERROR! EL CARACTER INGRESADO NO ES VALIDO CERRANDO PROGRAMA</h1>               |\n");  
			printf("          |_____________________________________________________________________________________________________|\n\n");
			Limpiar_Pantalla();
			exit(1);
		}
	}
}

// ok 100%
int stock(){  
	productos.aux2 = 0;
	productos.year = 0;

    printf("           _____________________________________________________________________________________________________\n");
	printf("          |                                                                                                     |\n");
	printf("          |         <h1>ANTES DE ENCONTRAR EL TOTAL DE STOCK DEBE RELLENAR LOS SIGUIENTE CAMPO.</h1>            |\n");     
	printf("          |                                <h2>INTRODUZCA EL ANIO A REVISAR</h2>                                |\n");
	printf("          |_____________________________________________________________________________________________________|\n\n");
    printf("                                                        ");cin>>productos.year;
	productos.year += 1 - memoria.anio; 
	cout<<productos.year<<endl;
	for(int i=1;i<=memoria.columnas;i++){ 	 
		productos.aux2 += matriz_inventario[productos.year][i];   
	}	
	printf("           _____________________________________________________________________________________________________\n");
	printf("          |                                                                                                     |\n");
	cout<< "                                |<h1>LA CANTIDAD DE STOCK EN EL ANIO ESPECIFICADO ES: "<<productos.aux2<< "</h1>|"<<endl;     
	printf("          |_____________________________________________________________________________________________________|\n\n");
	return productos.aux2;
	} 
	
// ok 100%
int mayorstock(){
    int aux3=0;
    int aux4=0;
    productos.year = 0;

	printf("           _____________________________________________________________________________________________________\n");
	printf("          |                                                                                                     |\n");
	printf("          |      <h1>ANTES DE ENCONTRAR EL COMPARAR EL INVENTARIO DEBE RELLENAR LOS SIGUIENTES CAMPOS.</h1>     |\n");     
	printf("          |                                <h2>INTRODUZCA EL ANIO A REVISAR</h2>                                |\n");
	printf("          |_____________________________________________________________________________________________________|\n\n");
	printf("                                                           ");cin>>productos.year;
	productos.year += 1 -memoria.anio; 
	for(int j=1;j<=memoria.columnas;j++){
		if(aux4<matriz_inventario[productos.year][j]){
			aux4 = matriz_inventario[productos.year][j];
			aux3 = j;
		}
	}	
	printf("           _____________________________________________________________________________________________________\n");
	printf("          |                                                                                                     |\n");
	cout<<"                            |<p>EL MES CON LA MAYOR CANTIDAD DE PRODUCTOS EN STOCK ES: "<<mes[aux3]<<"|            "<<endl;
	printf("          |_____________________________________________________________________________________________________|\n\n");
	return aux3;
}

// ok 100%
int promedio(){	
	int auxiliar=0;
	int auxiliar2=0;
	promedio1.conteo=0;
	promedio1.promedio = 0;
    printf("           _____________________________________________________________________________________________________\n");
	printf("          |                                                                                                     |\n");
	printf("          |            <h1>ANTES DE ENCONTRAR EL PROMEDIO DEBE RELLENAR LOS SIGUIENTES CAMPOS.</h1>             |\n");     
	printf("          |                            <h2>INTRODUZCA EL ANIO INICIAL DEL INTERVALO</h2>                        |\n");
	printf("          |_____________________________________________________________________________________________________|\n\n");
	printf("                                                           ");cin>>productos.year;
	
	printf("           _____________________________________________________________________________________________________\n");
	printf("          |                                                                                                     |\n");
	printf("          |                            <h3>INTRODUZCA EL ANIO FINAL DEL INTERVALO</h3>                          |\n");
	printf("          |_____________________________________________________________________________________________________|\n\n");
	printf("                                                           ");cin>>productos.year2;
	auxiliar = productos.year - memoria.anio +1;
	auxiliar2 = productos.year2 - memoria.anio +1;  
	if(auxiliar ==0){
		auxiliar = 1;
	}else if(auxiliar <0){
		auxiliar*= -1;
	}
	
	for(int i = auxiliar;i<=auxiliar2;i++){
		for(int j=1;j<=memoria.columnas;j++){ //operacion de promedio
			promedio1.promedio += matriz_inventario[i][j];
			promedio1.conteo++;
		}
	}
	promedio1.promedio /= promedio1.conteo;
	printf("           _____________________________________________________________________________________________________\n");
	printf("          |                                                                                                     |\n");
	cout<<"                                                 |<p>EL PROMEDIO ES: "<<promedio1.promedio<<"</p>|                       "<<endl;
	printf("          |_____________________________________________________________________________________________________|\n\n");
	return promedio1.promedio;
}

void reservando_memoria(){
	printf("           _____________________________________________________________________________________________________\n");
	printf("          |                                                                                                     |\n");
	printf("          |         <h1>ANTES DE EMPEZAR A TRABAJAR USTED DEBE INGRESAR LOS VALORES QUE VA A USAR.</h1>         |\n");     
	printf("          |                                 <h2>INTRODUZCA EL ANIO INICIAL</h2>                                 |\n");
	printf("          |                                                                                                     |\n");
	printf("          |_____________________________________________________________________________________________________|\n\n");
	            printf("                                                            ");cin>>memoria.anio;
	
	printf("           _____________________________________________________________________________________________________\n");
	printf("          |                                                                                                     |\n");
	printf("          |                               <h3>INTRODUZCA EL NUMERO DE ANIOS</h3>                                |\n");
    printf("          |                                                                                                     |\n");
	printf("          |_____________________________________________________________________________________________________|\n\n");
	
	            printf("                                                            ");cin>>memoria.filas;
	printf("           _____________________________________________________________________________________________________\n");
	printf("          |                                                                                                     |\n");
	printf("          |                     <p>AHORA DEBE INGRESAR LAS CANTIDADES EN STOCK REGISTRADAS</p>                  |\n");
	printf("          |                                                                                                     |\n");
	printf("          |_____________________________________________________________________________________________________|\n\n");
	
	for(int i=1;i<=memoria.filas;i++){
		for(int j=1;j<=memoria.columnas;j++){
            printf("                                                            ");cin>>matriz_inventario[i][j];
	cout<<"           ______________________________________________________________________________________________________"<<endl;                     
	cout<<"          |                                                                                                      |"<<endl;
	cout<<"          |                  <p>SE HA AGREGADO EL ELEMENTO A LA TABLA EN LA POSCICION "<<i<<";"<<j<<"</p>                    |"<<endl;
    cout<<"          |                                                                                                      |"<<endl;
    cout<<"          |______________________________________________________________________________________________________|"<<endl<<endl;;
		}
	}
	
    printf("          ______________________________________________________________________________________________________\n");
    printf("         |                                                                                                      |\n");
    printf("         |                        <p>PARA SALIR DE ESTA VENTANA PULSAR CUALQUIER TECLA</p>                      |\n");
    printf("         |______________________________________________________________________________________________________|\n");
	Limpiar_Pantalla();
}

void intro(){
	char tecla;
	printf("\n");
	printf("   _________________________________________________________________________________________________________________\n");
	printf("  |                                                                                                                 |\n");
	printf("  |                         **********************************************************                              |\n");
	printf("  |                         *                                                        *                              |\n");
	printf("  |                         *       1              101010101              1          *                              |\n");
	printf("  |                         *      101             0        0             0          *                              |\n");
	printf("  |                         *       1              1         1            1          *                              |\n");
	printf("  |                         *                      0          0           0          *                              |\n");
	printf("  |                         *       1              1          1           1          *                              |\n");
	printf("  |                         *       0              0         0            0          *                              |\n");
	printf("  |                         *       1              1        1             1          *                              |\n");
	printf("  |                         *       0              010101010              0          *                              |\n");
	printf("  |                         *       1              1                      1          *                              |\n");
	printf("  |                         *       0              0                      0          *                              |\n");
	printf("  |                         *       1              1                      1          *                              |\n");
	printf("  |                         *       0              0                      0          *                              |\n");
	printf("  |                         *       1              1                      1          *                              |\n");
	printf("  |                         *       0              0                      0          *                              |\n");
	printf("  |                         *       1              1                      1          *                              |\n");
	printf("  |                         *                                                        *                              |\n");
	printf("  |                         **********************************************************                              |\n");
	printf("  |                                                                                                                 |\n");
	printf("  |                         <h1>PROYECTO FINAL DE INTRODUCION A LA PROGRAMACION UNO</h1>                            |\n");
	printf("  |                                                                                                                 |\n");
	printf("  |_________________________________________________________________________________________________________________|\n");
 
	printf("   _________________________________________________________________________________________________________________\n");
	printf("  |                                                                                                                 |\n");
	printf("  |                        <blockquote>SI PUEDES IMAGINARLO PUEDES PROGRAMARLO</blockquote>                         |\n");
	printf("  |                            <p>ALEJANDRO TABOADA SANCHEZ; 19/04/1996 - 2/08/2019</p>                             |\n");
	printf("  |                            <p>PARA SALIR DE ESTA VENTANA PULSAR CUALQUIER TECLA</p>                             |\n");
	printf("  |_________________________________________________________________________________________________________________|\n");
	Limpiar_Pantalla();
}
