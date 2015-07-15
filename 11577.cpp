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
#include <cstring>
using namespace std;

int main(){
    
    #ifdef TEST
        freopen("test.in", "r", stdin);
        freopen("test.out", "w", stdout);
    #endif

    string s;
    int n;
    int charCount[1000];
    memset(charCount, 0, sizeof(charCount));
    
    cin >> n;
    getline(cin, s);
    for(int i = 0; i < n; ++i) {
        getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int max = -1;
        vector<char> most;
        
        for(int i = 0; i < s.length(); ++i) {
            if(isalnum(s[i])) {
                charCount[s[i]]++;
                if(charCount[s[i]] > max) {
                    max = charCount[s[i]];
                    most.clear();
                    most.push_back(s[i]);
                } else if(charCount[s[i]] == max)
                    most.push_back(s[i]);
            }
        }
            
        sort(most.begin(), most.end());
        for(int i = 0; i < most.size(); ++i) {
            cout << most[i];
        }
        cout << endl;
        
        memset(charCount, 0, sizeof(charCount));
        
    }

    return 0;
}
