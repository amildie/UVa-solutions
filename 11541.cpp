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
    cin >> cantTests;
    for(int j = 0; j < cantTests; ++j){
        string s;
        cin >> s;
        string t = "";
        char c;
        cout << "Case " << j+1 << ": ";
        for(int i = 0; i < s.length(); ++i){
            t = "";
            c = s[i];
            i++;
            while((int)s[i] < 64){
                t += s[i];
                i++;
                if(i == s.length()) break;
            }
            i--;
            for(int i = 0; i < stoi(t); ++i) cout << c;

        }
        cout << endl;
    }
    return 0;
}
