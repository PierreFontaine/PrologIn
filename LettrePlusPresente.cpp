#include <iostream>
#include <string>

using namespace std;

/*
	auteur   : pierre fontaine
	email    : pierre.ftn64@gmail.com
	but      :
	date     :
	version  : 
	remarque :

	copyright 2015 ©
*/
int nbreOcc(string chaine){
	int res;

	return res;
}

/*
	auteur   : pierre fontaine
	email    : pierre.ftn64@gmail.com
	but      :
	date     :
	version  : 
	remarque :

	copyright 2015 ©
*/
string tri(string chaine){
	int min;
	int tmp;

	for (int i = 0; i <= chaine.size(); ++i){
		min = i;
		for (int j = i+1; j < chaine.size(); ++j){
			if (chaine[j] < chaine[min]){
				min = j;
			}
		}
	if (i != min){
		tmp = chaine[i];
		chaine[i] = chaine [min];
		chaine[min] = tmp;
	}
	}
	return chaine;
}

int main(int argc, char const *argv[]){
	string chaine;
	int len,res;

	cin >> chaine;
	chaine = tri(chaine);
	return 0;
}	