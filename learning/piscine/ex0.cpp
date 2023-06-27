#include <iostream>


int	main(void)
{
	char buffer[50];
	std::cout << "[DIGITE UMA PALAVRA]" << std::endl;
	std::cin >> buffer;
	std::cout << "Palavra -->" << buffer << std::endl;
}