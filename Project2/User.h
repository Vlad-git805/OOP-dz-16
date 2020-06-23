#pragma once
#include <iostream>
#include <string>
using namespace std;

class User
{
private:
	string name;
	int age;
public:
	User() : name(" "), age(0) {}
	User(string name, int age) : name(name), age(age) {}
	void PrintUser()const
	{
		cout << "USER -- Name: " << name << "; Age: " << age << endl;
	}
	~User() {}
};
