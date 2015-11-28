#include <iostream>
#include <string>

using namespace std;



string tri(string chaine){
	int min;
	int tmp;

	for (int i = 0; i < chaine.size()+1; ++i){
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

	cout << tri(chaine)<<endl;
	return 0;
}	