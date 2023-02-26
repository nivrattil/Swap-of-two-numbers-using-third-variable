#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cout<< "Enter a: ";
	cin>> a;
	cout<< "Enter b: ";
	cin>> b;
	c=b;
	b=a;
	a=c;
	cout<< "a="<< a<< "\n";
	cout<< "b="<< b;
}
