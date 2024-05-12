// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
string getChoice(string prompt)
{
	string response;
	cout << prompt << endl;
	cin >> response;
	return response;
}
int main()
{
	setlocale(LC_ALL, "");
	cout << "Treasure Hunter\n";
	Sleep(2000);
	cout << "You have noticed that one bottle was swept away right behing you to the coast...\n";
	Sleep(1000);
	string choice1;
	while (true)
	{
		choice1 = getChoice("Go (Left) or (Right)?>>>");
		if (choice1 == "Left")
		{
			cout << "";
		}
		else if (choice1 == "Right")
		{
			cout << "";
		}
		else
		{
			cout << "Incorrect phrase\n";
		}
	}

	cout << "There is a note in it about a treasure that is hidden close to you..\n";
	cout << "Do you want to go and find it?";
	return 0;
} 

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
