#include <iostream>

void	up_char(char *str)
{
	for (int i = 0; str[i]; ++i)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ('a' - 'A');
	std::cout << str;
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; ++i)
			up_char(argv[i]);
	std::cout << std::endl;
	return (0);
}