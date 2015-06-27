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

void ternary(int n){
	string s = "";
	while(n != 0){
		s += to_string(n%3);
		n = n/3;
	}
	reverse(s.begin(), s.end());
	cout << s << endl;
}

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		freopen("test.out", "w", stdout);
	#endif
	
	int n;
	while(true){
		cin >> n;
		if(n < 0) break;
		else if(n == 0) cout << "0" << endl;
		else ternary(n);
	}
	
	return 0;
}
