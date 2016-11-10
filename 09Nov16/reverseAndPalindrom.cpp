#include <iostream>
int main()
{
	int original = 0, num, lastDigit= 0, rev = 0;
	std::cout << "Enter a number: " << std::endl;
	std::cin >> num;
	
	original = num;
	while(num) {
		lastDigit = num % 10;
		num = num / 10;
		rev = rev * 10 + lastDigit;
	}
	std::cout << "reverse = " << rev << std::endl;

	if (original == rev) {
		std::cout << "Its a palindrom number " << std::endl;
	} else {
		std::cout << "Its not a palindrom number " << std::endl;
	}
	return 0;
}
