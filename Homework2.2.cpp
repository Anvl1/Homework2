#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	std::wcout << L"Введите слово:\n" << std::endl;
	std::string word;
	std::cin >> word;
	std::wcout << L"Вы ввели:\n" << std::endl;
	std::cout << word << "\n";
}