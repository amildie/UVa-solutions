#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;


string reverse(string str){
	
	string aux;
	
	for(int i = str.length()-1; i >= 0; --i){
		//cout << i << endl;
		aux += str[i];
	}
	
	return aux;
}

int main(){
	
	#ifdef test
		freopen("wordScramble.in", "r", stdin);
		freopen("wordScramble.out", "w", stdout);
	#endif
	
	string str;
	string aux = "";
	string res = "";
	
	string goma = "hola";
	
	//cout << reverse(goma) << endl;
	
	while(getline(cin, str)){
		
		for(int i = 0; i < str.length(); ++i){
			
			if(str[i] != ' ')// || str[i] == '\n')
				aux += str[i];
			else{
				res += reverse(aux) += " ";
				aux = "";
			}
			
			
		}
		
		cout << res << reverse(aux) << endl;
		res = "";
		aux = "";
	}
	
	return 0;
}
