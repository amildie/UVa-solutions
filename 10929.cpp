#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
	freopen("test.in", "r", stdin);
	freopen("test.out", "w", stdout);

	string s;
	while(cin >> s){	
		if(s == "0") break;
		long long res = 0;
		for(int i = 0; i < s.length(); ++i){
			if(i%2 == 0) res+= (int) s[i]-48;
			else res -= (int) s[i]-48;
		}
		if(res%11 == 0) cout << s << " is a multiple of 11." << endl;
		else cout << s << " is not a multiple of 11." << endl;
	}

	return 0;
}
