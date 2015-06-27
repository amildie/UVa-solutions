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
		vector<int> v;
		for(int j = 0; j < m; ++j){
			int t; cin >> t;
			v.push_back(t);
		}
		cout << "Case " << i+1 << ": " << v[v.size()/2] << endl;
	}
	
	return 0;
}
