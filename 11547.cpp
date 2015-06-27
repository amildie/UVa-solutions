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

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		freopen("test.out", "w", stdout);
	#endif
	
	int n, m; cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> m;
		string num = to_string((((((m*567)/9)+7492)*235)/47)-498);
		cout << num[num.length()-2] << endl;
	}

	return 0;
}
