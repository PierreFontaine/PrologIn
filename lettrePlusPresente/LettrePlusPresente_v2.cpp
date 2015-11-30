#include <iostream>
#include <string>

using namespace std;

int maxTab(int tab[]){
	int max;
	max = tab[0];

	for (int i = 0; i < 26; ++i){
		if (tab[i] > max){
			max  = tab[i];
		}
	}
	return max;
}

int nbreOcc(string chaine){
	int tab[26];
	for (int i = 0; i < 26; ++i){
		tab[i] = 0;
	}
	for (int i = 0; i < chaine.size(); ++i){
		tab[(int)chaine[i]-97] += 1;
	}
	return maxTab(tab);
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
		cout << nbreOcc(chaine) << endl;
	}	
}	