#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;



string quitarLetras(string str1){
    string str2 = "AAAGIMRRT";
    string original = str1;
    int cantReemplazos = 0;
    for(int i = 0; i < str2.length(); ++i){
        for(int j = 0; j < str1.length(); ++j){
            if(str1[j] == str2[i]){
                str1[j] = '-';
                cantReemplazos++;
                break;
            }
        }
    }
    if (cantReemplazos == 9)
        return str1;
    else
        return original;
}

int main(){

	#ifdef test
		freopen("iLovePizza.in", "r", stdin);
		freopen("iLovePizza.out", "w", stdout);
	#endif

    int n;
    cin >> n;
    string str1;
    getline(cin, str1);

    for(int i = 0; i < n; ++i){
        getline(cin, str1);
        sort(str1.begin(), str1.end());

        int cant = 0;
        string aux = quitarLetras(str1);

        while(str1 != aux){
            cant++;
            str1 = aux;
            aux = quitarLetras(aux);
        }

        cout << cant << endl;
    }

    return 0;
}
