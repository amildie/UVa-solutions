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

    float v, t;
    while(cin >> v >> t){
        if(v == 0 || t == 0){cout << "0" << endl; continue;}
        float a = v/(float)t;
        cout << (a * 4 * t * t)/2 << endl;
    }

    return 0;
}
