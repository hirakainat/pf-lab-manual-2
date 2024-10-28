#include <iostream>

int main() {
    int number;
    int evenCount = 0;
    int oddCount = 0;

    // Read 6 numbers and calculate even and odd counts
    for (int i = 1; i <= 6; i++) {
        std::cout << "Enter number " << i << ": ";
        std::cin >> number;

        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Calculate percentages
    double totalNumbers = 6.0;
    double evenPercentage = (evenCount / totalNumbers) * 100.0;
    double oddPercentage = (oddCount / totalNumbers) * 100.0;

    // Display percentages
    std::cout << "Percentage of even numbers: " << evenPercentage << "%" << std::endl;
    std::cout << "Percentage of odd numbers: " << oddPercentage << "%" << std::endl;

    return 0;
}
