#include <iostream>

int silnia(int);

int main()
{
	int a = 0;
	std::cout << "Podaj liczb�: " << std::endl;
	std::cin >> a;
	std::cout << silnia(a) << std::endl;
	std::cin.get();
	std::cin.get();
}

int silnia(int n)
{
	if (n == 0)
		return 1;
	else
		return n * (silnia(n - 1));
}