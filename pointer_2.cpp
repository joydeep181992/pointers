#include<iostream>
using namespace std;

int main() {
	int a = 1025;
	int *p;
	p = &a;
	/*cout << "The Value of a is "<< *p << endl ;*/
	char *p0;
	p0 = (char*)p;
	cout << "Will not throw the error " << *p0 << endl;
	return 0;
}
