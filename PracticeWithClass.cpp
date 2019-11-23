#include "pch.h"
#include <iostream>
#include<string>
using namespace std;
 class Numbers 
{
public : 
	int n1, n2;
    string name;
	void set(int n1,int n2,string n = "NONAME")
	{
		this->name = n;
		this->n1 = n1;
		this->n2 = n2;
	}
	void print()
	{
		cout << "The arguments of"<< name << endl;
		cout << "The first number: " << n1 << endl;
		cout << "The second number: " << n2 << endl;
	}
 };

int main()
{
    std::cout << "Hello World!\n"; 
	Numbers n;
	n.set(2, 4,"Hello");
	Numbers n2{ 4,4 ,"Hello2" };
	n.print();
	n2.print();
}

