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

	char press[5][10] = {
		{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ','.','a','d','g','j','m','p','t','w'},
		{' ',',','b','e','h','k','n','q','u','x'},
		{' ','?','c','f','i','l','o','r','v','y'},
		{' ','\"',' ',' ',' ',' ',' ','s',' ','z'}
	};

	int n; cin >> n;
	for(int i = 0; i < n; ++i){
		int m; cin >> m;
		int keys[m];
		int times[m];
		for(int j = 0; j < m; ++j) cin >> keys[j];
		for(int j = 0; j < m; ++j) cin >> times[j];
		for(int j = 0; j < m; ++j) cout << press[times[j]][keys[j]];
		cout << endl;
	}
	
	return 0;
}



