#include <iostream>

int main()
{
	int num;

	setlocale(LC_ALL, "");
	std::wcout << L"������� �����:\n" << std::endl;
	std::cin >> num;
	std::wcout << L"�� �����:\n" << num << std::endl;
}