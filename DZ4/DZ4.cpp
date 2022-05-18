#include <Windows.h>
#include <iostream>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	cout << "Задание 1 \n" 
		    << "Вывести на экран текущее время в часах, минутах и секундах.\n" 
        	<< "Посчитать, сколько часов, минут и секундосталось до полуночи \n\n";

	int secInput;
	int sec = 60;
	int min = 59;
	int hour = 23;
	int sh = sec * sec;
	int dey = hour * sh + min * sec + sec;
	
	cout << "Введите количество секунд: \n";
	cin >> secInput;
	cout << secInput / sh << " час(ов,a)\n";
	cout << (secInput % sh) / 60 << " минут(ы,а) \n";
	cout << secInput % sh % 60 << " секунд(ы,а) \n\n";

	cout << "До полуночи осталось:  \n";
	cout << (dey - secInput) / sh << " час(ов,a) \n";
	cout << (dey - secInput) / 60 % 60 << " минут(ы,а) \n";
	cout << (dey - secInput) % 60 << " секунд(ы,а) \n\n";


	cout << "Задание 2 \n"
		<< "Посчитать, сколько целых часов осталось работать, если рабочий день — 8 часов \n\n";

	int secInput1;
	int sec1 = 60;
	int sh1 = sec1 * sec1;
	int hour1 = 8;
	int time = hour1 * sh1;

	cout << "Введите количество часов в секундах: \n";
	cin >> secInput1;
	cout << "До конца рабочего дня осталось " << (time - secInput1) / sh1 << " час(ов,a)\n";

}

