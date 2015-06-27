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
#include <cctype>
using namespace std;

bool check(string a, string b, string c, char op){
	if(op == '+'){
		if(stoi(a)+stoi(b) == stoi(c)) return true;
	}else if(op == '-'){
		if(stoi(a)-stoi(b) == stoi(c)) return true;
	}
	return false;
}


int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		freopen("test.out", "w", stdout);
	#endif

	string s;
	int corr = 0;

	while(getline(cin,s)){
		string a = "";
		string b = "";
		string c = "";
		char op;
		
		//read a
		int i = 0;
		while(isdigit(s[i])){
			a += s[i];
			i++;	
		}

		//read operation
		op = s[i];
		i++;

		//read b
		while(isdigit(s[i])){
			b += s[i];
			i++;	
		}
		i++;

		//read result
		if(s[i] == '?') continue;
		while(isdigit(s[i])){
			c += s[i];
			i++;	
		}
		
		//check operation
		if(check(a,b,c,op)) corr++;
	}
	cout << corr << endl;
	return 0;
}
