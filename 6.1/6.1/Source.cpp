#include <iostream>
#include <cctype>

int main()
{
	char text[300];
	char ch;
	int i = 0;
	std::cin.get(ch);
	while ((ch != '@') && (300 > i))
	{
		if (isdigit(ch))
		{
			std::cin.clear();
		}
		else if (islower(ch))
		{
			text[i] = ch - 32;
			i++;
		}
		else if (isupper(ch))
		{
			text[i] = ch + 32;
			i++;
		}
		else
		{
			text[i] = ch;
			i++;
		}
		std::cin.clear();
		std::cin.get(ch);
	}
	text[i] = ch;
	std::cout << std::endl;
	for (int j = 0; j <= i; j++)
	{
		std::cout << text[j];
	}
	std::cin.get();
	std::cin.get();
}