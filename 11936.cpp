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

bool is_triangle(int a, int b, int c){
	if(a+b > c && a+c > b && b+c > a) return true;
	else return false;
}

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		freopen("test.out", "w", stdout);
	#endif

	int n; cin >> n;
	for(int i = 0; i < n; ++i){
		int x, y, z;
		cin >> x >> y >> z;
		if(is_triangle(x,y,z)) cout << "OK" << endl;
		else cout << "Wrong!!" << endl;
	}
	
	return 0;
}
