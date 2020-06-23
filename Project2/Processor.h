#pragma once
#include <iostream>
#include <string>
using namespace std;
class Processor
{
private:
	string model;
	float frequency;
public:
	Processor() : model(" "), frequency(0) {}
	void SetInfo(string model,float frequency)
	{
		this->model = model;
		this->frequency = frequency;
	}

	void PrintProcessor()const
	{
		cout << "Model of processor: " << model << ";" << endl;
		cout << "Frequency of processor: " << frequency << "; " << endl;
	}
	~Processor() {}
};