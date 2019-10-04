#include "palindrome.hpp"
#include <iostream>
 
 
int main()
{
    while (1)
    {
        char buffer[64] = {0};
	std::cin >> buffer;
 
        if (isPalindrome(buffer))
        {
		std::cout << "Word is a palindrome" << std::endl;
        }
        else
        {
		std::cout << "Word is not a palindrome" << std::endl;
        }
    }
 
    return 0;
}
