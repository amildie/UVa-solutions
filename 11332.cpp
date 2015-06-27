#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

string sumar_digitos(string s){
	int n = 0;
	for(int i = 0; i < s.length(); ++i) n += (int) s[i] - 48; 
	return to_string(n);
}


int main(){
	//freopen("test.in", "r", stdin);
	//freopen("test.out", "w", stdout);

	string s = "";
	while(cin >> s){
		if(s == "0") break;
		while(s != sumar_digitos(s)) s = sumar_digitos(s);
		cout << s << endl;
	}

	return 0;
}
