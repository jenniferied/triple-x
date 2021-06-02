#include <iostream>

int main()
{
    const int a = 4;
    const int b = 5;
    const int c = 2;

    int sum = a + b + c;
    int product = a * b * c;

    std::cout << "You are trying to break into a secure server room.";
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue...";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "+ There are three numbers in the code";
    std::cout << std::endl;
    std::cout << "+ The codes multiply to give ";
    std::cout << product;
    std::cout << std::endl;
    std::cout << "+ The codes add up to ";
    std::cout << sum;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Enter the three code numbers followed by x";

    return 0;
}