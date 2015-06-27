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
	for(int i = 0; i < t; ++i){
		int n, k, p;
		cin >> n >> k >> p;
		cout << "Case " << i+1 << ": " << (((k-1)+p)%n)+1 << endl;
	}

	return 0;
}
