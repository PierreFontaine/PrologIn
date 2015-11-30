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
	int compt1,compt2;
	int i;
	bool a;

	i = 1;
	a = true;
	compt1 = 0;
	compt2 = 0;
	

	while(i < chaine.size()){
		if (a){
			compt1 +=1;
			while((chaine[i] == chaine[i-1])&&(i <= chaine.size())){
				if (int(chaine[i]) != 32 ){
					compt1 += 1;
				}
				i += 1;
			}
			
			a = false;
			i += 1;
		} else {
			compt2 += 1;
			while((chaine[i] == chaine[i-1]) && (i <= chaine.size())){
				if (int(chaine[i]) != 32 ){
					compt2 += 1;
				}
				i += 1;
			}
			
			i += 1;
		}
		if (compt2 < compt1){
			
			compt2 = 0;
			a = false;
		} else {
			
			compt1 = 0;
			a = true;
		}
	
	}

	if (compt1 > compt2){
		res = compt1;
	}else{
		res = compt2;
	}
	if (res == 0){
		res = 1;
	}
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

void minuscule(string &chaine){
    for (int i = 0 ; i<chaine.size() ; i++)
    {
        chaine[i] = tolower(chaine[i]);
    }
}

int main(int argc, char const *argv[]){
	string chaine;
	int len,res;
	cin >> len;
	if ((len >= 1) && (len <= 100000)){
		cin >> chaine;
		minuscule(chaine);
		chaine = tri(chaine);
		cout << nbreOcc(chaine) << endl;
	}	
}	