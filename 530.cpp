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

int min(int a, int b){
	if(a < b) return a;
	else return b;
}

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		freopen("test.out", "w", stdout);
	#endif
	
	/*
	 * c(n,k) = c(n,n-k)  
	 * Tengo que ver cual me combiene hacer
	 * 
	 */
	
	while(true){
		int n; cin >> n;
		int k; cin >> k;
		
		if(n == 0 && k == 0) break;
		
		k = min(k, n-k);
		
		long long res = 1;
		for(int i = 1; i <= k; ++i){
			res = res * (n-k+i) /i ;
		}
		cout << res << endl;
	}
	
	return 0;
}
