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

float av_best_two(int ct1, int ct2, int ct3){
	vector<int> v;
	v.push_back(ct1);
	v.push_back(ct2);
	v.push_back(ct3);
	sort(v.begin(),v.end());
	return ((v[1]+v[2])/2);
}

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		freopen("test.out", "w", stdout);
	#endif
	
	int n; cin >> n;
	for(int i = 0; i < n; ++i){
		int t1, t2, f, a, ct1, ct2, ct3;
		cin >> t1 >> t2 >> f >> a >> ct1 >> ct2 >> ct3;
		float av = av_best_two(ct1, ct2, ct3);
		float tot = t1+t2+f+a+av;
		cout << "Case " << i+1 << ": ";
		if(tot >= 90) cout << "A" << endl;
		else if(tot >= 80) cout << "B" << endl;
		else if(tot >= 70) cout << "C" << endl;
		else if(tot >= 60) cout << "D" << endl;
		else cout << "F" << endl;
	}
	
	return 0;
}
