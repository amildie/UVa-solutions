#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

void getMin(int BCG, int BGC, int CBG, int CGB, int GBC, int GCB){
	
	string names[6] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
	
	int nums[9] = {BCG, BGC, CBG, CGB, GBC, GCB};
	int min = BCG;
	int i_min = 0;
	
	for(int i = 1; i < 6; i++){
		if(nums[i] < min){
			min = nums[i];
			i_min = i;
		}
	}
	cout << names[i_min] << " " << min << endl;
}

int main(){
	
	#ifdef test
		freopen("ecoBin.in", "r", stdin);
		freopen("ecoBin.out", "w", stdout);
	#endif
	
	while(true){
		
		/* todo este quilombo para levantar los numeros */
		int botellas[9];
		string s; 
		stringstream ss;
		getline(cin, s); 
		ss.str(s);
		if (!(cin.good())){break;}
		int i = 0;
		while (ss.good()){
			ss >> botellas[i];
			i++;
		}
		
		int cantBCG = botellas[3] + botellas[6] + botellas[2] + botellas[8] + botellas[1] + botellas[4];
		int cantBGC = botellas[3] + botellas[6] + botellas[1] + botellas[7] + botellas[2] + botellas[5];
		int cantCBG = botellas[5] + botellas[8] + botellas[0] + botellas[6] + botellas[1] + botellas[4];
		int cantCGB = botellas[5] + botellas[8] + botellas[1] + botellas[7] + botellas[0] + botellas[3];
		int cantGBC = botellas[4] + botellas[7] + botellas[0] + botellas[6] + botellas[2] + botellas[5];
		int cantGCB = botellas[4] + botellas[7] + botellas[2] + botellas[8] + botellas[0] + botellas[3];
		
		getMin(cantBCG, cantBGC, cantCBG, cantCGB, cantGBC, cantGCB);
		
	}
	
	return 0;
}
