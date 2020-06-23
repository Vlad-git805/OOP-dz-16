#pragma once
#include <iostream>
#include <string>
#include "Memory.h"
#include "Aterin_board.h"
#include "Processor.h"
#include "Monitor.h"
#include "Admin.h"
#include "User.h"
using namespace std;
class PK
{
	Aterin_board aterin_board;
	Processor processor;
	Memory memory;
	Monitor monitor;
	Admin* admin;
	User* user;
public:
	PK() {}

	void SetallInfo(string model_Aterin_board,int number_of_memory_slots_in_Aterin_board, string modelProcessor, float frequencyProcessor, int BGMemory, string model_of_monitor, int doagonal_of_monitor, int hertz)
	{
		aterin_board.SetInfo(model_Aterin_board, number_of_memory_slots_in_Aterin_board);
		processor.SetInfo(modelProcessor, frequencyProcessor);
		memory.SetInfo(BGMemory);
		monitor.SetInfo(model_of_monitor, doagonal_of_monitor, hertz);
	}

	void AddAdmin(Admin* other)
	{
		this->admin = other;
	}

	void AddUser(User* other)
	{
		this->user = other;
	}

	bool DeleteAdmin()
	{
		if (admin == nullptr)
			return false;
		admin = nullptr;
		return true;
	}

	bool DeleteUser()
	{
		if (user == nullptr)
			return false;
		user = nullptr;
		return true;
	}

	void PrintPK()const
	{
		aterin_board.PrintAterin_board();
		processor.PrintProcessor();
		memory.PrintGB();
		monitor.PrintMonitor();
		if (admin != nullptr)
		{
			admin->PrintAdmin();
		}
		if (user != nullptr)
		{
			user->PrintUser();
		}
	}

	~PK() {}
};

