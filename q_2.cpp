#include <iostream>
#include <string>

int main() {
    std::string str1, str2, str3, str4;

    std::cout << "Enter the first string: ";
    std::cin >> str1;

    std::cout << "Enter the second string: ";
    std::cin >> str2;

    std::cout << "Enter the third string: ";
    std::cin >> str3;

    std::cout << "Enter the fourth string: ";
    std::cin >> str4;

    // Concatenate the strings using the + operator
    std::string result = str1 + str2 + str3 + str4;

    // Display the concatenated string
    std::cout << "Concatenated string: " << result << std::endl;

    return 0;
}
