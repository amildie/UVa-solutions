#include <iostream>
using namespace std;

#define MAX_WEIGHT 50000
#define MAX_ITEMS 101

int v[MAX_ITEMS][MAX_WEIGHT];
int vals[MAX_ITEMS];
int w[MAX_ITEMS];


int minDiff(int cantMonedas, int size, int sumTotal){
	
	for(int i = 0; i < size; ++i){
		v[0][i] = 0;
	}
	
	for(int i = 1; i <= cantMonedas; ++i){
		for(int j = 0; j < size; ++j){
			if(w[i-1] <= j+1){
				int sum;
				
				if(j+1-(w[i-1]) > 0) 
					sum = v[i-1][j+1-(w[i-1])-1] + vals[i-1];
				else
					sum = vals[i-1];
				
				if (sum > v[i-1][j])
					v[i][j] = sum;
				else
					v[i][j] = v[i-1][j];
				
			}else
				v[i][j] = v[i-1][j];
		}
	}
	
	return sumTotal - 2*v[cantMonedas][size-1];
	
}

int main(){
	
	int cantTests;
	cin >> cantTests;
	
	for(int i = 0; i < cantTests; ++i){
		
		int cantMonedas;
		cin >> cantMonedas;
		
		int sum = 0;
		
		for(int i = 0; i < cantMonedas; ++i){
			cin >> vals[i];
			sum += vals[i];
			w[i] = vals[i];
		}
		
		cout << minDiff(cantMonedas, sum/2, sum) << endl;
		
	}
	
	return 0;
}
