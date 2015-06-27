#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>
using namespace std;

void translate_tape_string(string s){
	int n = 0;
	for(int i = 1, j = 7; i < 10; ++i){
		if(s[i] == 'o')	n = n + pow(2,j);
		if(s[i] != '.') j--;
	}
	cout << (char) n;
}


int main(){

	//freopen("test.in", "r", stdin);
	//freopen("test.out", "w", stdout);

	string s;
	while(getline(cin, s)){
		if(s != "___________") translate_tape_string(s);
	}
	return 0;
}
