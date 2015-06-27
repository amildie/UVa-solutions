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
	
	int n;
	cin >> n;

	for(int i = 0; i < n; ++i){
		vector<long> v;
		long a,b,c;
		cin >> a >> b >> c;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin(), v.end());

		if(v[0] + v[1] > v[2]){
			if(v[0] == v[1] && v[1] == v[2]) cout << "Case " << i+1 << ": Equilateral" << endl;
			else if(v[0] == v[1] || v[1] == v[2] || v[0] == v[2]) cout << "Case " << i+1 << ": Isosceles" << endl;
			else cout << "Case " << i+1 << ": Scalene" << endl;
		}else cout << "Case " << i+1 << ": Invalid" << endl;
	}

	return 0;
}
