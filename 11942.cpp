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
	
	int n, m;
	cin >> n;

	cout << "Lumberjacks:" << endl;
	for(int i = 0; i < n; ++i){
		vector<int> line;
		for(int j = 0; j < 10; ++j){
			cin >> m;
			line.push_back(m);
		}

		vector<int> a = line;
		vector<int> b = line;
		sort(a.begin(), a.end());
		sort(b.begin(), b.end(), greater<int>());

		if(line == a || line == b) cout << "Ordered" << endl;
		else cout << "Unordered" << endl;

	}



	return 0;
}
