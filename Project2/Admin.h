#pragma once
#include <iostream>
#include <string>
using namespace std;

class Admin
{
private:
	string name;
	int age;
public:
	Admin() : name(" "), age(0) {}
	Admin(string name, int age) : name(name), age(age) {}
	void PrintAdmin()const
	{
		cout << "ADMIN -- Name: " << name << "; Age: " << age << endl;
	}
	~Admin() {}
};