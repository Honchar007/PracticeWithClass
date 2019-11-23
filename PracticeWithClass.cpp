#include "pch.h"
#include <iostream>
#include<string>
using namespace std;
 class Numbers 
{
	 
private : 
	int n1, n2,n3;
    string name;
public:
	void set(int n1,int n2,int n3,string n = "NONAME")
	{
		this->name = n;
		this->n1 = n1;
		this->n2 = n2;
		this->n3 = n3;
	}
	void print()
	{
		cout << "The arguments of "<< name << endl;
		cout << "The first number: " << n1 << endl;
		cout << "The second number: " << n2 << endl;
		cout << "The third number: " << n3 << endl;
	}
	void IsEqual(Numbers &n) 
	{
		if (n.n1 == n1 && n.n2 == n2 && n.n3 == n3) 
			cout << "point1 and point3 are equal\n";
		else
			cout << "point1 and point3 are not equal\n";
			
	}
 };

int main()
{
    std::cout << "Hello World!\n"; 
	Numbers n;
	n.set(2, 4,4);
	n.print();
	Numbers n1;
	n1.set(2, 4, 4);
	n1.IsEqual(n);
	n1.set(2, 2, 2);
	n1.IsEqual(n);
}
 
