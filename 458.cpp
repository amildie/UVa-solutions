#include <iostream>
#include <string>
using namespace std;

int main(){
    while (true){
        string linea;
        getline(cin, linea);
        if(cin.eof()) break;
        for(int i = 0; i<linea.size(); i++){
            linea[i]-=7;
            cout << linea[i];
        }
        cout << endl;
    }
    return 0;
}
