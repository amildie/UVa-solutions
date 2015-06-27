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

bool is_leap(int n){
	if(n%4 == 0){
		if(n%100 == 0){
			if(n%400 == 0) return true;
			else return false;
		}
		return true;
	}else return false;	
}

int month_to_num(string s){
	if(s == "January") return 1;
	if(s == "February") return 2;
	if(s == "March") return 3;
	if(s == "April") return 4;
	if(s == "May") return 5;
	if(s == "June") return 6;
	if(s == "July") return 7;
	if(s == "August") return 8;
	if(s == "September") return 9;
	if(s == "October") return 10;
	if(s == "November") return 11;
	if(s == "December") return 12;
}


int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		freopen("test.out", "w", stdout);
	#endif
	
	int cant_tests;
	cin >> cant_tests;
	string tmp;
	getline (cin, tmp);
	
	//cout << "tmp: " << tmp << endl;
	
	for(int g = 0; g < cant_tests; ++g){
		
		//Leo la primer fecha y guardo los valores
		string s;
		getline(cin, s);
		replace(s.begin(), s.end(), ',', ' ');
		string m_i_s;
		int d_i;
		int m_i;
		int a_i;
		stringstream ss(s);
		ss >> m_i_s >> d_i >> a_i;
		m_i = month_to_num(m_i_s);
		
		//Leo la segunda fecha y guardo los valores
		string y;
		getline(cin, y);
		replace(y.begin(), y.end(), ',', ' ');
		string m_f_s;
		int d_f;
		int m_f;
		int a_f;
		stringstream sy(y);
		sy >> m_f_s >> d_f >> a_f;
		m_f = month_to_num(m_f_s);
		
		int res;
		
		if (m_i > 2) a_i++;
		if (m_f < 2 || (m_f == 2 && d_f < 29)) a_f--;

		res = a_f/4 - (a_i-1)/4;
		res -= a_f/100 - (a_i-1) / 100;
		res += a_f/400 - (a_i-1) / 400;
		
		cout << "Case " << g+1 << ": "<< res << endl;
	
	}
	
	return 0;
}
