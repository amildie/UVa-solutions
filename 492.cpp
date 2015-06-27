#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <limits>
using namespace std;

bool es_vocal(char c){
	if( (int) c == 65 || (int) c == 97 || (int) c == 69 || (int) c == 101 || (int) c == 73 || (int) c == 105 || (int) c == 79 || (int) c == 111 || (int) c == 85 || (int) c == 117){
		return true;
	}else return false; 
}

bool es_valid(char c){
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
 - skippear caracteres que no son alftabeticos (numeros, puntos y otra bullshit).
 - a las palabras que terminan con un '\n' no les pongas el 'ay' al final. 
*/

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		freopen("test.out", "w", stdout);
	#endif

	char c;
	char t;
	while((c = getchar()) != EOF){
		if(es_vocal(c)){
			//agarre una palabra que empieza con una vocal
			while(es_valid(c)){
				cout << c;
				c = getchar();
			}
			if(c != '\n') cout << "ay" << c;
			else cout << c;
		}else if(es_valid(c)){
			//agarre una palabra que empieza con una consonante
			//me guardo la primer letra
			t = c;
			c = getchar();
			while(es_valid(c)){
				cout << c;
				c = getchar();
			}
			if(c != '\n') cout << t << "ay" << c;
			else cout << c;
		}else cout << c;
	
	}

	return 0;
}
