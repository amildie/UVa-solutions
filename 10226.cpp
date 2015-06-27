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

struct trie_node{
	int cant_trees;
	trie_node* hijo[128];
	trie_node(){
		cant_trees = 0;
		for(int i = 0; i < 128; ++i){
			hijo[i] = 0;
		}
	}
};

void add_key_recur(trie_node& t, string s, int i);

void add_key_recur_first_time(trie_node& current_node, string s, int i){
	int j = (int) s[i];
	if (i >= s.length()) { 
		current_node.cant_trees = 1;
		return;
	} else {
		trie_node* new_node_ptr = new trie_node;
		current_node.hijo[j] = new_node_ptr;
		new_node_ptr->cant_trees = 0;
		i++;
		add_key_recur_first_time(*new_node_ptr, s, i);
	}
}

void add_key(trie_node& current_node, string s) {
	int j = (int) s[0];
	if (current_node.hijo[j] != 0) {
		trie_node* next_node_ptr = current_node.hijo[j];
		add_key_recur(*next_node_ptr, s, 1);
	} else {
		trie_node* new_node_ptr = new trie_node;
		current_node.hijo[j] = new_node_ptr;
		add_key_recur_first_time(*new_node_ptr, s, 1);
	}
}

void add_key_recur(trie_node& current_node, string s, int i){
	int j = (int) s[i];
	if (i >= s.length()) { 
		current_node.cant_trees++;
		return;
	} else {
		if(current_node.hijo[j] != 0){
			trie_node* next_node_ptr = current_node.hijo[j];
			i++;
			add_key_recur(*next_node_ptr, s, i);
		}else{
			trie_node* new_node_ptr = new trie_node;
			current_node.hijo[j] = new_node_ptr;
			i++;
			add_key_recur_first_time(*new_node_ptr, s, i);
			return;
		}
	}
}

void dfsTrie(trie_node& current_node, string s, int total){
	if(current_node.cant_trees > 0 ){
		cout << s << " ";
		printf("%.4f\n", (float) ((current_node.cant_trees)*100)/total);
	}
	for(int i = 0; i < 128; ++i){
		if(current_node.hijo[i] != 0){
			unsigned char c;
			c = i;
			string t = s;
			t += c;
			trie_node* next_node_ptr = current_node.hijo[i];
			dfsTrie(*next_node_ptr, t, total);
		} 
	}
}

void dfsTrie(trie_node& first_node, int total){
	string s = "";
	for(int i = 0; i < 128; ++i){
		if(first_node.hijo[i] != 0){
			unsigned char c;
			c = i;
			s = "";
			s += c;
			trie_node* next_node_ptr = first_node.hijo[i];
			dfsTrie(*next_node_ptr, s, total);
		}
	}
}

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		//freopen("test.out", "w", stdout);
	#endif
	
	int t;
	cin >> t; 
	//cout << "t : " << t << endl;
	string aux;
	getline(cin, aux);
	getline(cin, aux);
		
	for(int k = 0; k < t; ++k){
		string s;
		int total = 0;
		trie_node trie;
		
		while(getline(cin, s)){
			//cout << "string capturada: " << s << endl;
			if(s.length() == 0) break;
			total++;
			add_key(trie, s);
		}
		
		if(k > 0) cout << endl;
		dfsTrie(trie, total);
	}
	
	return 0;
	
}
