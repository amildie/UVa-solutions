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

    string nums = "22233344455566677778889999";
    string s;

    while(getline(cin, s)){
        for(int i = 0; i < s.size(); ++i){
            if (s[i] == '1') cout << "1";
            else if (s[i] == '-') cout << "-";
            else if (s[i] == '0') cout << "0";
            else cout << nums[(int) s[i] - 65];
        }
        cout << endl;
    }

    return 0;
}
