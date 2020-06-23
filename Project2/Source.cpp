#include <iostream>
#include "PK.h"
#include "Admin.h"
#include "User.h"

using namespace std;

int main()
{
	Admin admin1("Vlad", 20);
	User user1("lol", 25);

	PK pk1;
	pk1.SetallInfo("i_xz_karo4", 4, "toze_xz", 150, 32, "bl9_ne_znay", 24, 144);
	pk1.PrintPK();
	pk1.AddAdmin(&admin1);
	cout << endl;
	pk1.PrintPK();
	cout << endl;
	pk1.AddUser(&user1);
	pk1.PrintPK();
	cout << endl;
	/*pk1.DeleteAdmin();
	pk1.PrintPK();
	cout << endl;
	pk1.DeleteUser();
	pk1.PrintPK();
	cout << endl;*/

	PK pk2;
	pk2.SetallInfo("123", 123321, "asddx", 10, 312, "zxcxzcxzc", 24, 134);
	pk2.AddAdmin(&admin1);
	pk2.PrintPK();

	system("pause");
	return 0;
}