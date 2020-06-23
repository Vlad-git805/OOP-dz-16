#pragma once
#include <iostream>
#include <string>
using namespace std;
class Monitor
{
private:
	string model;
	int diagonal;
	int hertz;
public:
	Monitor() : model(" "), diagonal(0), hertz(0){}
	void SetInfo(string model, int diagonal, int hertz)
	{
		this->model = model;
		this->diagonal = diagonal;
		this->hertz = hertz;
	}

	void PrintMonitor()const
	{
		cout << "Model of monitor: " << model << ";" << endl;
		cout << "Diagonal of monitor: " << diagonal << "; " << endl;
		cout << "Count of hertz in monitor: " << hertz << ";" << endl;
	}
	~Monitor() {}
};

