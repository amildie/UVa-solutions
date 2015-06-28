#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	
	//freopen("test.in", "r", stdin);
	//freopen("test.out", "w", stdout);

	int n, m;
	int t = 1;
	
	while (cin.good()){
		
		//Crear y cargar tablero
		cin >> n; //cantidad de filas
		cin >> m; //cantidad de columnas
		
		if (n == 0 || m == 0) break;
		
		char tablero[n+10][m+10];
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				cin >> tablero[i][j];
			}
		}

		//Tablero con resultados:
		unsigned char tableroRes[n+10][m+10];
		int acum = 0;

		//Computar casilleros del medio
		for(int i = 1; i < n-1; ++i){
			for(int j = 1; j < m-1; ++j){
				
				if(tablero[i][j] == '*'){
					tableroRes[i][j] = '*';
				}else{
					acum = 48;
					if(tablero[i-1][j-1] == '*') acum++;
					if(tablero[i-1][j] == '*') acum++;
					if(tablero[i-1][j+1] == '*') acum++;
					if(tablero[i][j-1] == '*') acum++;
					if(tablero[i][j+1] == '*') acum++;
					if(tablero[i+1][j-1] == '*') acum++;
					if(tablero[i+1][j] == '*') acum++;
					if(tablero[i+1][j+1] == '*') acum++;
					tableroRes[i][j] = acum;
				}
			}
		}

		
		//Computar casilleros del techo
		for(int i = 1; i < m-1; i++){

			if(tablero[0][i] == '*'){
				tableroRes[0][i] = '*';
			}else{
				acum = 48;	
				if (tablero[0][i-1] == '*') acum++;
				if (tablero[0][i+1] == '*') acum++;
				if (tablero[1][i-1] == '*') acum++;
				if (tablero[1][i] == '*') acum++;
				if (tablero[1][i+1] == '*') acum++;
				tableroRes[0][i] = acum;
			}
		}
		
		//Computar casilleros del piso
		for(int i = 1; i < m-1; i++){
		
			if(tablero[n-1][i] == '*'){
				tableroRes[n-1][i] = '*';
			}else{
				acum = 48;	
				if (tablero[n-1][i-1] == '*') acum++;
				if (tablero[n-1][i+1] == '*') acum++;
				if (tablero[n-2][i-1] == '*') acum++;
				if (tablero[n-2][i] == '*') acum++;
				if (tablero[n-2][i+1] == '*') acum++;
				tableroRes[n-1][i] = acum;
			}
		}

		//Computar casilleros de la pared izquierda
		for(int i = 1; i < n-1; i++){
		
			if(tablero[i][0] == '*'){
				tableroRes[i][0] = '*';
			}else{
				acum = 48;
				if(tablero[i-1][0] == '*') acum++;
				if(tablero[i+1][0] == '*') acum++;
				if(tablero[i-1][1] == '*') acum++;
				if(tablero[i][1] == '*') acum++;
				if(tablero[i+1][1] == '*') acum++;
				tableroRes[i][0] = acum;
			}
		}

		//Computar casilleros de la pared derecha
		for(int i = 1; i < n-1; i++){
			
			if(tablero[i][m-1] == '*'){
				tableroRes[i][m-1] = '*';
			}else{
				acum = 48;
				if(tablero[i-1][m-1] == '*') acum++;
				if(tablero[i+1][m-1] == '*') acum++;
				if(tablero[i-1][m-2] == '*') acum++;
				if(tablero[i][m-2] == '*') acum++;
				if(tablero[i+1][m-2] == '*') acum++;
				tableroRes[i][m-1] = acum;
			}
		}

		//Computo borde superior izquierdo
		if(tablero[0][0] == '*'){
			tableroRes[0][0] = '*';
		}else{
		acum = 48;
			if(tablero[0][1] == '*') acum++;
			if(tablero[1][1] == '*') acum++;
			if(tablero[1][0] == '*') acum++;
			tableroRes[0][0] = acum;
		}


		//Computo borde superior derecho
		if(tablero[0][m-1] == '*'){
			tableroRes[0][m-1] = '*';
		}else{
			acum = 48;
			if(tablero[0][m-2] == '*') acum++;
			if(tablero[1][m-2] == '*') acum++;
			if(tablero[1][m-1] == '*') acum++;
			tableroRes[0][m-1] = acum;
		}	


		//Computo borde inferior izquierdo
		if(tablero[n-1][0] == '*'){
			tableroRes[n-1][0] = '*';
		}else{
			acum = 48;	
			if(tablero[n-2][0] == '*') acum++;
			if(tablero[n-2][1] == '*') acum++;
			if(tablero[n-1][1] == '*') acum++;
			tableroRes[n-1][0] = acum;
		}


		//Computo borde inferior derecho
		if(tablero[n-1][m-1] == '*'){
			tableroRes[n-1][m-1] = '*';
		}else{
			acum = 48;	
			if(tablero[n-1][m-2] == '*') acum++;
			if(tablero[n-2][m-2] == '*') acum++;
			if(tablero[n-2][m-1] == '*') acum++;
			tableroRes[n-1][m-1] = acum;
		}

		//Output
		
		if(t > 1){
			cout << endl;
		}
		
		cout << "Field #" << t << ":" << endl;
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				cout << tableroRes[i][j];
			}
			
			cout << endl;
		}
		
		t++;
	}
	
	return 0;
}
