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
using namespace std;

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
	    freopen("test.out", "w", stdout);
	#endif
	
	float a, b ,c;
	while(cin >> a >> b >> c){
		if(a == 0) break;
		vector<float> v;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin(), v.end());
		if(pow(v[0],2) + pow(v[1],2) == pow(v[2],2)) cout << "right" << endl;
		else cout << "wrong" << endl;
	}

	return 0;
}
