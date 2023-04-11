#include<iostream>
using namespace std;
class A {
public:
	A() {
		a =new int[3]; 
		for(int i=0; i<3; i++)
			a[i] = i + 1;
	}
	int foo(int a) { return a; };
	int foo(int b) { return b; }
	int foo(int a, int b);
		
	~A() { delete[] a; }
private:
	int* a;
};
void init(A& a) {
	A b;
	a=b;
}
int main()
{
	A obj;
	init(obj);
	return 0;
}