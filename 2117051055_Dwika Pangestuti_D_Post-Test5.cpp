#include <iostream>
using namespace std;

int main(){
	// i = bilangan awal deret
	// n = bilagan akhir deret
	int i,n;
	cin >> i;
	cin >> n;
	int range = n-i+1;
	int angka[range];
	int d=0;
	
	for (int d=0; d<range; d++){
		angka[d] = i++;
		if (angka[d]%3==0 && angka[d]%7==0){
			cout<< "Bagi tujuh dan tiga : " <<endl;
			cout<< angka[d] <<endl;
		}else if (angka[d]%3==0){
			cout<< "Bagi tiga : " <<endl;
			cout<< angka[d] <<endl;
		}else (angka[d]%7!=0);
			cout<< "bagi tujuh : " <<endl;
			cout<< angka[d] <<endl;
			
		}
	return 0;
}
