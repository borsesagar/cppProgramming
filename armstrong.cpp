#include <iostream>
#include <math.h>

int main()
{
        int num, org, d[3];
        std::cout << "Enter a 3 digit number to find if its a armstrong number or not" << std::endl;
        std::cin >> num;
        org = num;

        if ((num < 100) || (num > 999)){
                std::cout << "Number you entered is not a 3 digit number. please try again with 3 digit number" << std::endl;
                return 0;
        }
	int i = 0;
        while(num) {
                d[i] = num % 10;
                num = num / 10;
		i++;
	}
	num =pow(d[0], 3) + pow(d[1], 3) + pow(d[2], 3);
	if (num == org) {
		std::cout << "Number is a armstrong number " << std::endl;
	} else {
		std::cout << "Number is not a armstrong number " << std::endl;
	}
	return 0;
}
