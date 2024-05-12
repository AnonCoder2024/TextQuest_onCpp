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

void choice1_left()
{
	cout << "You decied that this tricky adventure is not for you and returned back home to drink some margarita and realax until you will get back to the work....\n";
	Sleep(4000);
	cout << "You have opened the \"Screw that\" ending " << endl;
}
void choice1_right()
{
	cout << "You are feeling the determination that is coming from your enthusiasm and decide to walk along the cliff\n";
}
void choice2_Climb()
{
	cout << "You were too overwhelmed, so suddenly stepped away and died\n";
	Sleep(4000);
	cout << "You have opened the \"Press F\" ending" << endl;
}
void choice2_Flee()
{
	cout << "You just bypassed a danger by going by pave. After not a long trip you foung that gleaming thing was a beer cap. You said: \"That would be a stupid death if I chose to climb instead of just walk\"\n";
}
void choice3_Stay()
{
	cout << "You have built a camp in front of a beach and you truly believe that sunset would be outstanding there... and fall asleep...." << endl;;
	Sleep(5000);
}
void choice3_Go()
{
	cout << "Despite of pitch dark you fing a guy, all alone, open eyed, buring pages his little dark age......." << endl;
	Sleep(4000);
	cout << "You found the \"Little dark age\" ending" << endl;
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
		choice1 = getChoice("Go (Left) to the home or (Right) to the cliff,where is probably located treasures accorfing to the note?>>>");
		if (choice1 == "Left")
		{
			choice1_left();
			return 0;
		}
		else if (choice1 == "Right")
		{
			choice1_right();
			break;
		}
		else
		{
			cout << "Incorrect phrase\n";
		}
	}
	cout << "\"That cliff looks dangerous\"-you exlaimed at your head, but you found something eyecatching on the height\n";
	string choice2;
	while (true)
	{
		choice2 = getChoice("Will you Go (Climb) accross or (Flee) go along the mountain?>>>");
			if (choice2 == "Climb")
			{
				choice2_Climb();
				return 0;
			}
			else if (choice2 == "Flee")
			{
				choice2_Flee();
				break;
			}
			else
			{
				cout << "Incorrect phrase" << endl;
			}
	}
	cout << "It became really dark there. Nothing is visible and you are not able even to see your hands in front of your face.";
	string choice3;
	while (true)
	{
		choice3 = getChoice("Will you (Stay) build a camp or (Go) further?>>>");
		if (choice3 == "Stay")
		{
			choice3_Stay;
		}
		else if (choice3 == "Go")
		{
			choice3_Go();
		}
		else
		{
			cout << "Incorrect phrase" << endl;
		}
	}
	return 0;
} 
//
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
