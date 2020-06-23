#pragma once
#include <iostream>
#include <string>
using namespace std;
class Aterin_board
{
private:
	string model;
	int number_of_memory_slots;
public:
	Aterin_board() : model(" "), number_of_memory_slots(0) {}

	void SetInfo(string model, int number_of_memory_slots)
	{
		this->model = model;
		this->number_of_memory_slots = number_of_memory_slots;
	}

	void PrintAterin_board()const
	{
		cout << "Model of atrein board: " << model << "; " << endl;
		cout << "number_of_memory_slots in atrein board: " << number_of_memory_slots << ";" << endl;
	}
	~Aterin_board() {}
};

