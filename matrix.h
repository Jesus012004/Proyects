//EL proposito de esta libreria ademas de servir de practica es poder facilitar las operaciones basicas con matrices
#ifndef MATRIX_H
#define MATRIX_H
#include<cmath>

namespace mtx{

//prototipos de funciones
double suma(int );
double resta(int );
double multiplicacion(int ,int ,int ,int );
double traspuesta(int ,int);
double escalar(int );

}

namespace mtx{	//beginnig namespace

double suma(int numero_Filas){
	double **matriz1;
	double **matriz2;
	double **matrizResultado;
	
	//matriz 1
	
	matriz1 = new double *[numero_Filas];
	for(int i = 0; i < numero_Filas; i++){
		matriz1[i] = new double [numero_Filas];
	}
	
		//inicializando la primera matriz en 0
	for(int i = 0; i < numero_Filas;i++){
		for(int j = 0; j < numero_Filas;j++){
			*(*(matriz1+i)+j) = 0;
		}
	}	

	// matriz 2
	matriz2 = new double *[numero_Filas];
	for(int i = 0;i < numero_Filas;i++){
		matriz2[i] = new double [numero_Filas];
	}	

	//inicializando la matriz 2 en 0
	for(int i = 0;i < numero_Filas;i++){
		for(int j = 0;j < numero_Filas;j++){
			*(*(matriz2+i)+j) = 0;
		}
	}
	
		// matriz resultado
	matrizResultado = new double *[numero_Filas];
	for(int i = 0;i < numero_Filas;i++){
		matrizResultado[i] = new double [numero_Filas];
	}	
	
	//inicializando la matriz 2 en 0
	for(int i = 0;i < numero_Filas;i++){
		for(int j = 0;j < numero_Filas;j++){
			*(*(matrizResultado+i)+j) = 0;
		}
	}
	
		for(int i = 0; i < numero_Filas; i++){
			for(int j = 0; j < numero_Filas; j++){
				std::cout<<"DIGITE EL NUMERO QUE OCUPARA LA POSICION ["<<i<<"]["<<j<<"] EN LA PRIMERA MATRIZ:"<<std::endl; 
				std::cin>>*(*(matriz1+i)+j);
			}
			std::cout<<"\n";
			std::cout<<"\n";
		}
		for(int i = 0; i < numero_Filas; i++){
			for(int j = 0; j < numero_Filas; j++){
				std::cout<<"DIGITE EL NUMERO QUE OCUPARA LA POSICION ["<<i<<"]["<<j<<"] EN LA SEGUNDA MATRIZ:"<<std::endl; 
				std::cin>>*(*(matriz2+i)+j);
			}
			std::cout<<"\n";
			std::cout<<"\n";
		}
		for(int i = 0; i < numero_Filas; i++) {
	        for(int j = 0; j < numero_Filas; j++) {
	            matrizResultado[i][j] = matriz1[i][j] + matriz2[i][j];
   		        std::cout << matrizResultado[i][j] << "    ";
  			}
			std::cout<<"\n";
			std::cout<<"\n";
		} 
		
		//eliminando la primera matriz
		for(int i = 0;i < numero_Filas;i++){
			delete[] matriz1[i];
		}
		delete[] matriz1;
		//eliminando la matriz 2
		for(int i = 0;i < numero_Filas;i++){
			delete[] matriz2[i];
		}	
		delete[] matriz2;
		std::cout<<"CALCULO FINALIZADO. \nGRACIAS POR USAR ESTA HERRAMIENTA."<<std::endl;	
		getch();
		return **matrizResultado;
}

double resta(int numero_Filas){
	double **matriz1;
	double **matriz2;
	double **matrizResultado;
	
	//matriz 1
	
	matriz1 = new double *[numero_Filas];
	for(int i = 0; i < numero_Filas; i++){
		matriz1[i] = new double [numero_Filas];
	}
	
		//inicializando la primera matriz en 0
	for(int i = 0; i < numero_Filas;i++){
		for(int j = 0; j < numero_Filas;j++){
			*(*(matriz1+i)+j) = 0;
		}
	}	

	// matriz 2
	matriz2 = new double *[numero_Filas];
	for(int i = 0;i < numero_Filas;i++){
		matriz2[i] = new double [numero_Filas];
	}	

	//inicializando la matriz 2 en 0
	for(int i = 0;i < numero_Filas;i++){
		for(int j = 0;j < numero_Filas;j++){
			*(*(matriz2+i)+j) = 0;
		}
	}
	
		// matriz resultado
	matrizResultado = new double *[numero_Filas];
	for(int i = 0;i < numero_Filas;i++){
		matrizResultado[i] = new double [numero_Filas];
	}	
	
	//inicializando la matriz 2 en 0
	for(int i = 0;i < numero_Filas;i++){
		for(int j = 0;j < numero_Filas;j++){
			*(*(matrizResultado+i)+j) = 0;
		}
	}
	
		for(int i = 0; i < numero_Filas; i++){
			for(int j = 0; j < numero_Filas; j++){
				std::cout<<"DIGITE EL NUMERO QUE OCUPARA LA POSICION ["<<i<<"]["<<j<<"] EN LA PRIMERA MATRIZ:"<<std::endl; 
				std::cin>>*(*(matriz1+i)+j);
			}
			std::cout<<"\n";
			std::cout<<"\n";
		}
		for(int i = 0; i < numero_Filas; i++){
			for(int j = 0; j < numero_Filas; j++){
				std::cout<<"DIGITE EL NUMERO QUE OCUPARA LA POSICION ["<<i<<"]["<<j<<"] EN LA SEGUNDA MATRIZ:"<<std::endl; 
				std::cin>>*(*(matriz2+i)+j);
			}
			std::cout<<"\n";
			std::cout<<"\n";
		}
		for(int i = 0; i < numero_Filas; i++) {
	        for(int j = 0; j < numero_Filas; j++) {
	        	matrizResultado[i][j] = matriz1[i][j] - matriz2[i][j];
   	        	std::cout << matrizResultado[i][j] << "    ";
  	      }
			std::cout<<"\n";
			std::cout<<"\n";
		} 
		//eliminando la primera matriz
		for(int i = 0;i < numero_Filas;i++){
			delete[] matriz1[i];
		}
		delete[] matriz1;
		//eliminando la matriz 2
		for(int i = 0;i < numero_Filas;i++){
			delete[] matriz2[i];
		}	
		delete[] matriz2;
		std::cout<<"CALCULO FINALIZADO. \nGRACIAS POR USAR ESTA HERRAMIENTA."<<std::endl;	
		getch();
		return **matrizResultado;
	}
	

double multiplicacion(int numero_Filas,int numero_Columnas,int numero_Filas2,int numero_Columnas2){
	if(numero_Columnas == numero_Filas2){
	double **matriz1;
	double **matriz2;
	double **matrizResultado;
	
	//matriz 1
	
	matriz1 = new double *[numero_Filas];
	for(int i = 0; i < numero_Filas; i++){
		matriz1[i] = new double [numero_Columnas];
	}
	
		//inicializando la primera matriz en 0
	for(int i = 0; i < numero_Filas;i++){
		for(int j = 0; j < numero_Columnas;j++){
			*(*(matriz1+i)+j) = 0;
		}
	}	

	// matriz 2
	matriz2 = new double *[numero_Filas2];
	for(int i = 0;i < numero_Filas2;i++){
		matriz2[i] = new double [numero_Columnas2];
	}	

	//inicializando la matriz 2 en 0
	for(int i = 0;i < numero_Filas;i++){
		for(int j = 0;j < numero_Columnas;j++){
			*(*(matriz2+i)+j) = 0;
		}
	}
	
		// matriz resultado
	matrizResultado = new double *[numero_Filas2];
	for(int i = 0;i < numero_Filas2;i++){
		matrizResultado[i] = new double [numero_Columnas2];
	}	
	
	//inicializando la matriz 2 en 0
	for(int i = 0;i < numero_Filas;i++){
		for(int j = 0;j < numero_Columnas;j++){
			*(*(matrizResultado+i)+j) = 0;
		}
	}
	
		for(int i = 0; i < numero_Filas; i++){
			for(int j = 0; j < numero_Columnas; j++){
				std::cout<<"DIGITE EL NUMERO QUE OCUPARA LA POSICION ["<<i<<"]["<<j<<"] EN LA PRIMERA MATRIZ:"<<std::endl; 
				std::cin>>*(*(matriz1+i)+j);
			}
			std::cout<<"\n";
			std::cout<<"\n";
		}
		for(int i = 0; i < numero_Filas2; i++){
			for(int j = 0; j < numero_Columnas2; j++){
				std::cout<<"DIGITE EL NUMERO QUE OCUPARA LA POSICION ["<<i<<"]["<<j<<"] EN LA SEGUNDA MATRIZ:"<<std::endl; 
				std::cin>>*(*(matriz2+i)+j);
			}
			std::cout<<"\n";
			std::cout<<"\n";
		}
		 for(int i = 0; i < numero_Filas; i++) {
	        for(int j = 0; j < numero_Columnas2; j++) {
	        	for(int k = 0; k < numero_Columnas; k++){
	            	matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
	        	}
	        }
		}
	    for(int i = 0; i < numero_Filas; i++) {
	        for(int j = 0; j < numero_Columnas2; j++) {
					std::cout<<matrizResultado[i][j]<<"    ";
			}
			std::cout<<"\n";
			std::cout<<"\n";
		} 		
		//eliminando la primera matriz
		for(int i = 0;i < numero_Filas;i++){
			delete[] matriz1[i];
		}
		delete[] matriz1;
		//eliminando la matriz 2
		for(int i = 0;i < numero_Filas2;i++){
			delete[] matriz2[i];
		}	
		delete[] matriz2;
		std::cout<<"CALCULO FINALIZADO. \nGRACIAS POR USAR ESTA HERRAMIENTA."<<std::endl;	
		getch();
		return **matrizResultado;
	}else{
		std::cout<<"ERROR"<<std::endl;
		getch();
		return 0.0;
	}
}

double traspuesta(int numero_Filas,int numero_Columnas){
	
	if(numero_Filas == numero_Columnas){
		//matriz 1
		double **matriz1;
	
		matriz1 = new double *[numero_Filas];
		for(int i = 0; i < numero_Filas; i++){
			matriz1[i] = new double [numero_Columnas];
		}
	
			//inicializando la primera matriz en 0
		for(int i = 0; i < numero_Filas;i++){
			for(int j = 0; j < numero_Columnas;j++){
				*(*(matriz1+i)+j) = 0;
			}
		}	
		for(int i = 0; i < numero_Filas; i++){
			for(int j = 0; j < numero_Columnas; j++){
				std::cout<<"DIGITE EL NUMERO QUE OCUPARA LA POSICION ["<<i<<"]["<<j<<"] EN LA PRIMERA MATRIZ:"<<std::endl; 
				std::cin>>*(*(matriz1+i)+j);
			}
			std::cout<<"\n";
			std::cout<<"\n";
		}
		for(int i = 0; i < numero_Filas; i++){
			for(int j = 0;j < numero_Columnas; j++){
				matriz1[i][j] = matriz1[j][i];
			} 
		}
		for(int i = 0; i < numero_Filas; i++){
			for(int j = 0;j < numero_Columnas; j++){
				std::cout<<matriz1[j][i]<<"   ";
			} 
			std::cout<<"\n";
			std::cout<<"\n";
		}
		std::cout<<"CALCULO FINALIZADO. \nGRACIAS POR USAR ESTA HERRAMIENTA."<<std::endl;
		getch();
		return **matriz1;
	}else{
		std::cout<<"ERROR"<<std::endl;
		return 0.0;
	}
}

double escalar(int numero_Filas){
	double **matriz1;
		//declarando las matrices
		//matriz 1
		matriz1 = new double *[numero_Filas];
		for(int i = 0; i < numero_Filas; i++){
			matriz1[i] = new double [numero_Filas];
		}
		//inicializando la primera matriz en 0
		for(int i = 0; i < numero_Filas;i++){
			for(int j = 0; j < numero_Filas;j++){
				*(*(matriz1+i)+j) = 0;
			}
		}	
		int escalar = 0;
		std::cout<<"INDIQUE EL VALOR DEL ESCALAR: "<<std::endl; 
		std::cin>>escalar;
		for(int i = 0;i < numero_Filas; i++){
			for(int j = 0;j < numero_Filas; j++){
				std::cout<<"DIGITE EL NUMERO QUE OCUPARA LA POSICION ["<<i<<"]["<<j<<"] EN LA PRIMERA MATRIZ:"<<std::endl; 
				std::cin>>*(*(matriz1+i)+j);
			}
			std::cout<<"\n";
			std::cout<<"\n";
			}
		for(int i = 0; i < numero_Filas; i++){
			for(int j = 0; j < numero_Filas; j++){
				matriz1[i][j] *= escalar;
				std::cout<<matriz1[i][j]<<"    ";
			} 
			std::cout<<"\n";
			std::cout<<"\n";	
					
		}				
		std::cout<<"CALCULO FINALIZADO. \nGRACIAS POR USAR ESTA HERRAMIENTA."<<std::endl;
		getch();
		return **matriz1;
	}

double ** alocMatrix(int n){
    double **m = new double *[n];
    for (int i = 0; i < n; ++i) m[i] = new double[n];
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            m[i][j] = 0;
        }
    } 
    return m;
}

double cofactor(double **matriz, int p, int n){
    if(n == 1){
        return matriz[0][0];
    }
    else{
        int nextSize = n-1;
        int g = 0;
        int h = 0;
        double **parcial = alocMatrix(n-1);
        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++){
                if(j != p){
                    parcial[g][h] = matriz[i][j];
                    h++;
                    if(h > nextSize-1){
                        g++;
                        h = 0;
                    }
                }
            }
        }
        double calc = 0;
        for (int i=0; i<nextSize; i++){
            calc +=  pow(-1, p) * cofactor(parcial, i, nextSize);
        }
        return calc;
    }
}

double determinante(double **matriz, int N){
    double det = 0;
    double cof = cofactor(matriz[][N],N,N);
    for(int i = 0; i < N; i++){
        double cof = cofactor(matriz, i, N);
        det += matriz[0][i] * cof;
    }
    return det;
}
	
}//end namespace

#endif //end matrix.h