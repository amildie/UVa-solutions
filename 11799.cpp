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

	int n; cin >> n;
	for(int i = 0; i < n; ++i){
		int m; cin >> m;
		int t = 0;
		int max = t;
		for(int j = 0; j < m; ++j){
			cin >> t;
			if(t > max) max = t;
		}
		cout << "Case " << i+1 << ": " << max << endl;
	}
	
	return 0;
}
