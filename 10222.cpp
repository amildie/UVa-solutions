#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>
using namespace std;

void translate(string s){
	int n = 0;
	for(int i = 0; i < s.length(); ++i){
		if(s[i] == 'e' || s[i] == 'E') cout << 'q';
		else if(s[i] == 'r' || s[i] == 'R') cout << 'w';
		else if(s[i] == 't' || s[i] == 'T') cout << 'e';
		else if(s[i] == 'y' || s[i] == 'Y') cout << 'r';
		else if(s[i] == 'u' || s[i] == 'U') cout << 't';
		else if(s[i] == 'i' || s[i] == 'I') cout << 'y';
		else if(s[i] == 'o' || s[i] == 'O') cout << 'u';
		else if(s[i] == 'p' || s[i] == 'P') cout << 'i';
		else if(s[i] == '[') cout << 'o';
		else if(s[i] == ']') cout << 'p';
		
		else if(s[i] == 'd' || s[i] == 'D') cout << 'a';
		else if(s[i] == 'f' || s[i] == 'F') cout << 's';
		else if(s[i] == 'g' || s[i] == 'G') cout << 'd';
		else if(s[i] == 'h' || s[i] == 'H') cout << 'f';
		else if(s[i] == 'j' || s[i] == 'J') cout << 'g';
		else if(s[i] == 'k' || s[i] == 'K') cout << 'h';
		else if(s[i] == 'l' || s[i] == 'L') cout << 'j';
		else if(s[i] == ';') cout << 'k';
		else if(s[i] == '\'') cout << 'l';
		
		else if(s[i] == 'c' || s[i] == 'C') cout << 'z';
		else if(s[i] == 'v' || s[i] == 'V') cout << 'x';
		else if(s[i] == 'b' || s[i] == 'B') cout << 'c';
		else if(s[i] == 'n' || s[i] == 'N') cout << 'v';
		else if(s[i] == 'm' || s[i] == 'M') cout << 'b';
		else if(s[i] == ',') cout << 'n';
		else if(s[i] == '.') cout << 'm';
		else if(s[i] == '/') cout << ',';
		
		else if(s[i] == ' ') cout << ' ';
		
		else if(s[i] == 'a' || s[i] == 'A') cout << '[';
		else if(s[i] == 's' || s[i] == 'S') cout << ']';
		else if(s[i] == 'z' || s[i] == 'Z') cout << '\'';
		else if(s[i] == 'x' || s[i] == 'X') cout << '\\';
		
	} cout << endl;
}

//ertyuiop[]


int main(){

	//freopen("test.in", "r", stdin);
	//freopen("test.out", "w", stdout);

	string s;
	while(getline(cin, s)){
		translate(s);
	}
	return 0;
}
