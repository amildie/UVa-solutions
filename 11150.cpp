#include <cstdio>
#include <iostream>
using namespace std;

int cuantasVaciasMeQuedan(int n){
    return n%3;
}

int cuantasGratisMeDan(int n){
    int k = 0;
    while (n>=3){
        n = n - 3;
        k++;
    }
    return k;
}

void retornar(int &CantBotellas, int &CantLlenas, int &CantVacias){
    CantLlenas = cuantasGratisMeDan(CantBotellas);
    CantVacias = cuantasVaciasMeQuedan(CantBotellas);
    CantBotellas = CantLlenas + CantVacias;
}

//Funcion que determina si, para un numero n de botellas, me convenia pedir prestadas k botellas vacias.
bool meConvenia(int n, int k){
    int CantBotellas = 0;
    int CantLlenas = n;
    int CantVacias = k;
    int CantTomadas = 0;
    int _vacias = 0;
    bool meConviene;


    int CuantasDebo = CantVacias;
    CantBotellas = CantLlenas + CantVacias;
    CantTomadas = CantLlenas;
    while(CantBotellas >=3){
        retornar(CantBotellas, CantLlenas, CantVacias);
        CantTomadas = CantTomadas + CantLlenas;
        _vacias = CantBotellas;
    }

    if (_vacias < CuantasDebo){

        meConviene = false;
    }else{

        meConviene = true;
    }
    return meConviene;
}

//Funcion que determina el numero maximo de botellas vacias que puedo pedir (1 o 2)
int cuantasPuedoPedir(int n){
    int resp;
    if (meConvenia(n,0)==1)
        resp = 0;
    if (meConvenia(n,1)==1)
        resp = 1;
    if (meConvenia(n,2)==1)
        resp = 2;
    return resp;
}

int reciclaje(int n, int m){
    int CantBotellas = n+m;
    int CantLlenas = n;
    int CantVacias = m;
    int CantTomadas = 0;
    int _vacias = 0;

    int CuantasDebo = CantVacias; //<-- guardo desde antes la cantidad de botellas que pedi
    //maria te amo
    CantTomadas = CantLlenas;  //<-- porque al ppio me tomo las que tengo

    while(CantBotellas >= 3){
        retornar(CantBotellas, CantLlenas, CantVacias);
        CantTomadas = CantTomadas + CantLlenas;
        _vacias = CantBotellas;
    }
    return CantTomadas;
}

int main(){
    //#ifndef ONLINE_JUDGE
    //freopen("test.in", "r", stdin);
    //#endif

    int n = 0;
    while (cin.good()){
    //cout << endl;
    cin >> n;
    //cout << endl << "Puedo pedir como maximo " << cuantasPuedoPedir(n) << " botellas vacias prestadas" << endl;
    if (cin.good())
        cout << reciclaje(n, cuantasPuedoPedir(n)) << endl;
    }
}
