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

float CtoF(float C){
	return ((9*C)/5)+32;
}
float FtoC(float F){
	return ((F-32)*5)/9;	
}


int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		freopen("test.out", "w", stdout);
	#endif
	
	int n;
	float c, d;
	
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> c >> d;
		printf("Case %d: %.2f\n", i+1, FtoC(CtoF(c)+d));
	}

	return 0;
}
