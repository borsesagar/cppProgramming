#include <iostream>

int main()
{
	int a, b;
	
	std::cout << "Enter two numbers " << std::endl;
	std::cin >> a;
	std::cin >>b;
	
	std::cout << "Before swapping \na = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	b = a+b;
	a = b - a;
	b = b - a;
	 
	std::cout << "After swapping \na = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	return 0;
}		
