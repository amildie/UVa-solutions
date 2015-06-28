#include <iostream>
using namespace std;

bool estanOrdenadosHastaI(int vagones[], int i){
	int j = 0;
	bool estan = true;
	while (j<i){
		if (vagones[j] > vagones[j+1])
			estan = false;
		j++;
	}
	return estan;
}



int main(){
	int vagones[100]; int i = 0;
	int cantCasos;
	cin >> cantCasos;
	while (cantCasos > 0){
		int cantVagones;
		
		//La cantidad de vagones que voy a tener en este caso		
		cin >> cantVagones;

		//Cargo los valores para cada vagon. Al final del loop, i determina la cantidad de vagones validos que tengo
		int i = 0;		
		while (i < cantVagones){
			cin >> vagones[i];
			i++; 	
		}

		//Cuento los Swaps
		int cantSwaps = 0; 
		while (!estanOrdenadosHastaI(vagones, i)){
			int j = 0;			
			while (j < i){
				if (vagones[j] > vagones[j+1]){
					int k = vagones[j];					
					vagones[j] = vagones[j+1];
					vagones[j+1] = k;
					cantSwaps++;
					j = -1;
				}
			j++;
			}	
		}

		//Muestro
		cout << "Optimal train swapping takes " << cantSwaps << " swaps." << endl;
		cantCasos--;	
	}
}
