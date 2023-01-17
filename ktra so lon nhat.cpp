#include <iostream>
using namespace std;
#include <math.h>
int main (){
	int a,b,c ;
	cout << "nhap 3 so a, b,c " << endl;
	cin >> a >> b >> c ;
	if ((a>b)&&(a>c)) {
		cout << "a la so lon nhat " ;
	}
	else if ((b>c)&&(b>a)) {
		cout << "b la so lon nhat " ;
	}
	else {
		cout << "c la so lon nhat ";
	}
	return 0 ;
}