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
using namespace std;

void get_input(int &dN, int &mN, int &aN, int &dB, int &mB, int &aB){
	string s;
	while (getline(cin, s)){
    	if(s != "") break;
    }
	//cout << "s = " << s << endl;
	replace(s.begin(), s.end(), '/', ' ');
	stringstream ss(s);
	ss >> dN >> mN >> aN;
	string t;
	while (getline(cin, t)){
    	if(t != "") break;
    }	
    //cout << "t = " << t << endl;
	replace(t.begin(), t.end(), '/', ' ');
	stringstream st(t);
	st >> dB >> mB >> aB;
}

void calcular_edad(int &dN, int &mN, int &aN, int &dB, int &mB, int &aB){
	/*
	
	aB, mB, dB, Born
	aN, mN, dN, Now	

	*/

	int edad;

	if(aB > aN)
	{
		edad = -1; //Nacio en un anio mayor al actual, no hay nada que hacer
	}
	else if(aB < aN)
	{
		//El anio en el que nacio es menor al actual, me fijo el mes
		if(mB > mN)
		{
			//El anio en el que nacio es menor al actual
			//El mes en el que nacio es mayor al actual
			edad = aN-aB-1;
		}
		else if(mB < mN)
		{
			//El anio en el que nacio es menor al actual
			//El mes en el que nacio tambien es menor al actual
			edad = aN-aB;
		}
		else if(mB == mN)
		{
			//El anio en el que nacio es menor al actual
			//El mes en que que nacio es el mismo que ahora
			if(dB > dN) edad = aN-aB-1;
			else edad = aN-aB;
		}
	}
	else if(aB == aN)
	{
		//El anio en el que nacio es el mismo que el actual
		if(mB > mN)
		{	
			//El anio en el que nacio es el mismo que el actual
			//El mes en el que nacio es mayor que el actual
			edad = -1; 
		}
		else if(mB < mN)
		{
			//El anio en el que nacio es el mismo que el actual
			//El mes en el que nacio es menor que el actual
			edad = 0;
		}
		else if(mB == mN)
		{
			//El anio en el que nacio es el mismo que el actual
			//El mes en el que nacio es el mismo que el actual
			if(dB > dN) edad = -1;
			else edad = 0;
		}
	}

	if(edad == -1) cout << "Invalid birth date" << endl;
	else if(edad > 130) cout << "Check birth date" << endl;
	else cout << edad << endl;

}


int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		freopen("test.out", "w", stdout);
	#endif
	
	int n;
	cin >> n;

	for(int i = 0; i < n; ++i){
		//Now, Born	
		int dN, mN, aN, dB, mB, aB;

		get_input(dN, mN, aN, dB, mB, aB);

		//cout << "dN: " << dN << " | mN: " << mN << " | aN: " << aN << endl;
		//cout << "dB: " << dB << " | mB: " << mB << " | aB: " << aB << endl;

		cout << "Case #"<< i+1 <<": ";
		calcular_edad(dN, mN, aN, dB, mB, aB);

	}
	return 0;
}