#include <iostream>
#include <string>
#include <windows.h>
#include <clocale>
#include <fstream>

int main(int argc, char** argv)
{
	// ¬место SetConsoleCP используем локаль системы
	std::setlocale(LC_ALL, "Russian");

	std::string str1{};
	std::string str2{};
	int count{ 0 }, count_arr{ 0 };

	std::fstream fout("out.txt", std::ios::out);

	std::cout << "¬ведите размер массива: ";
	std::cin >> count;
	std::cout << std::endl;

	fout << count << std::endl;

	for (int i = (count - 1); i>=0; i--)
	{
		std::cout << "arr[" << count_arr << "] = ";
		std::cin >> str1;
		str2 += str1;
		count_arr++;
	}

	for (auto i = str2.rbegin(); i != str2.rend(); ++i)
	{
		fout << *i << " " << std::flush; //str1[i] << " " << std::flush;
	}

	fout.close();







	return(0);
}

