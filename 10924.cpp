#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

int primos[177] = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997, 1009, 1013, 1019, 1021, 1031, 1033, 1039, 1049};

/*

	Cada palabra puede tener como maximo 20 letras. La letra de valor mas grande puede ser la Z, que vale 52.
	El valor mas grande que puede tener una suma es de 52*20 = 1040. El primo mas cercano es: 1049
	

*/

void aparece(int n){
	
	bool esPrimo = false;
	
	for(int i = 0; i < 176; ++i){
		if(primos[i] == n){
			esPrimo = true;
			break;
		}
	}
	
	if(esPrimo)
		cout << "It is a prime word." << endl;
	else
		cout << "It is not a prime word." << endl;
	
}


int sumarLetras(string str){
	
	int res = 0;
	
	for(int i = 0; i < str.length(); ++i){
		if(str[i] > 96 && str[i] < 123){
			res += str[i] - 96;
			//cout << str[i] << " = " << str[i] - 96 << " ";
		}else if(str[i] > 64 && str[i] < 91){
			//cout << str[i] << " = " << str[i] - 38 << " ";
			res += str[i] - 38;
		}
	}
	
	return res;
}

int main(){
	
	#ifdef test
		freopen("primeWords.in", "r", stdin);
		freopen("primeWords.out", "w", stdout);
	#endif
	
	string palabra;
	
	while(getline(cin, palabra)){
		//cout << "Palabra leida: " << palabra << endl;
		//cout << "Suma de las letras: " << sumarLetras(palabra) << endl;
		aparece(sumarLetras(palabra));
		//cout << esPrimo(sumarLetras(palabra));
		
	}
	
	return 0;
}
