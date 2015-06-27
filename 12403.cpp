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

	int t; cin >> t;
	int k = 0;
	string action;
	for(int i = 0; i < t; ++i){
		cin >> action;
		int m;
		if(action == "donate"){
			cin >> m;
			k += m;
		}else cout << k << endl;
	}
	
	return 0;
}
