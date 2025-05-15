#include <iostream>

int main()
{
	int num;

	setlocale(LC_ALL, "");
	std::wcout << L"Введите число:\n" << std::endl;
	std::cin >> num;
	std::wcout << L"Вы ввели:\n" << num << std::endl;
}