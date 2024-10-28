#include <iostream>
#include <string>

int main() {
    std::string inputString;
    
    
    std::cout << "Enter a string: ";
    std::cin >> inputString;

    int convertedInt = 0;

    // Convert the string to an integer using a loop
    for (char c : inputString) {
        if (c >= '0' && c <= '9') {
            convertedInt = convertedInt * 10 + (c - '0');
        } else {
           
            std::cout << "Invalid input. The entered string cannot be converted to an integer." << std::endl;
            return 1; // Exit with an error code
        }
    }

    // Display the original string and the integer
    std::cout << "String: " << inputString << std::endl;
    std::cout << "Integer: " << convertedInt << std::endl;

    return 0; 
}
