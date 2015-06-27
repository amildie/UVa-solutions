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

int count_squares(int n){
	int res = 0;
	for(int i = n; i > 0; --i){
		res += i*i;
	}
	return res;
}

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		freopen("test.out", "w", stdout);
	#endif
	
	int n; 
	while(true){
		cin >> n;
		if (n == 0) break;
		cout << count_squares(n) << endl;
	}
	
	return 0;
}
