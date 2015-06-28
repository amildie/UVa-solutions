#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
	
	#ifdef test
		freopen("texQuotes.in", "r", stdin);
		freopen("texQuotes.out", "w", stdout);
	#endif
	
	string linea;
	string aux;
	
	bool quoteAbierto = false;
	
	while(getline(cin, linea)){
		aux = "";
		for(int i = 0; i < linea.length(); ++i){
			if(linea[i] == '"' && !quoteAbierto){
				aux = aux += "``";
				quoteAbierto = true;
			}else if(linea[i] == '"' && quoteAbierto){
				aux = aux += "''";
				quoteAbierto = false;
			}else{
				aux += linea[i];
			}
		}
		cout << aux << endl;
	}
	
	return 0;
}
