#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int n;
	cout << "nhap n = " ;
	cin >> n ;
	int a  = sqrt(n);	
	if ((a*a) ==n){
		cout << "n la so chinh phuong " ;
	}
	else {
		cout << "n khong phai la so chinh phuong" ;
	}
	return 0;
}

