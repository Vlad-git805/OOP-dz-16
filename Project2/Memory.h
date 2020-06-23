#pragma once
#include <iostream>
using namespace std;
class Memory
{
private:
	float gb;
public:
	Memory() :  gb(0) {}
	void SetInfo( float gb)
	{
		this->gb = gb;
	}

	void PrintGB()const
	{
		cout << "GB: " << gb << "; " << endl;
	}
	~Memory() {}
};