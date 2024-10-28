#include <iostream>

int main() {
    double salary;
    std::cout << "Enter your current salary: ";
    std::cin >> salary;

    // Initialize constants for increments and tax deductions
    const double increment1 = 0.03;
    const double tax1 = 0.015;
    const double increment2 = 0.14;
    const double tax2 = 0.10;

    // Calculate gross salary for each of the next 5 years
    // Year 1: 3% increment and 1.5% tax deduction
    double totalGrossSalary1 = salary * 5;
    salary += salary * increment1 - salary * tax1;

    // Year 2: 14% increment and 10% tax deduction
    double totalGrossSalary2 = salary * 5;
    salary += salary * increment2 - salary * tax2;

    // Year 3: 3% increment and 1.5% tax deduction
    double totalGrossSalary3 = salary * 5;
    salary += salary * increment1 - salary * tax1;

    // Year 4: 14% increment and 10% tax deduction
    double totalGrossSalary4 = salary * 5;
    salary += salary * increment2 - salary * tax2;

    // Year 5: 3% increment and 1.5% tax deduction
    double totalGrossSalary5 = salary * 5;

    // Calculate the total gross salary for all 5 years
    double totalGrossSalary = totalGrossSalary1 + totalGrossSalary2 + totalGrossSalary3 + totalGrossSalary4 + totalGrossSalary5;

    // Check if the total gross salary for all 5 years is even or odd
    std::string totalGrossSalaryParity = (static_cast<int>(totalGrossSalary) % 2 == 0) ? "even" : "odd";

    std::cout << "Total gross salary for all 5 years is " << totalGrossSalaryParity << "." << std::endl;
    std::cout << "Total gross salary for 5 years (3% increment and 1.5% tax): " << totalGrossSalary1 << std::endl;
    std::cout << "Total gross salary for 5 years (14% increment and 10% tax): " << totalGrossSalary2 << std::endl;
    std::cout << "Total gross salary for 5 years (alternating increment and tax): " << totalGrossSalary3 << std::endl;

    return 0;
}
