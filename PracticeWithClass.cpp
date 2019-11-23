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
 };

int main()
{
    std::cout << "Hello World!\n"; 
	Numbers n;
	n.set(2, 4,4);
	
	n.print();
	
}

