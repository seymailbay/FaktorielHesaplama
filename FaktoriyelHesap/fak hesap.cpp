#include <iostream>
using namespace std;
main(){
	int i, sayi, toplam = 0 , fak = 1;
	cout << " fak hesaplancak sayiyi gir";
	cin >> sayi;
	for( i = 1 ; i <= sayi; i ++){
		fak = fak * i; 		
	}
	cout << fak ;
}
