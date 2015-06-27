#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main(){

    #ifdef TEST
        freopen("test.in", "r", stdin);
        freopen("test.out", "w", stdout);
    #endif

    int n = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        vector<int> v(3,0);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        cout << "Case " << i+1 << ": " << v[1] << endl;
    }

    return 0;
}
