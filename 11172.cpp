#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main(){

    //freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);

    int t, n, m;
    cin >> t;
    for(int i = 0; i < t; ++i){
        cin >> n;
        cin >> m;
        if(n < m) cout << "<" << endl;
        else if(n > m) cout << ">" << endl;
        else cout << "=" << endl;
    }

    return 0;
}
