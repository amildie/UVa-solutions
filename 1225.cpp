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

    int cantTests;
    int n;

    cin >> cantTests;
    for(int i = 0; i < cantTests; i++){
        cin >> n;
        int nums[10] = {0,0,0,0,0,0,0,0,0,0};
        stringstream ss;
        for(int i = 1; i <= n; ++i) ss << i;
        string s = ss.str();
        for(int i = 0; i < s.length(); ++i) nums[(int) s[i]-48]++;
        for(int i = 0; i < 10; ++i){
            cout << nums[i];
            if(i <= 8) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
