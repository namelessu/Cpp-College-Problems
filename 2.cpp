/*
 * assume a party of three couples dines in a restaurant the first family has two
 * children each of the other families has one child write a program that divides
 * bill among each family if a child is charged 3/4 of an adult share. the total
 * charge before tax is given as an input. the tax is 9.5 percent and 20 percent
 * service
 */

#include <iostream>
#include <iomanip>

int main() {
    // Defined variable for first, second, third family bills
    float first_family = 0, second_family = 0, third_family = 0, total_charge, charge;

    std::cout << "Enter the bill: ";
    std::cin >> charge;

    total_charge = charge + (9.5 / 100) * charge + (0.2) * charge; // Calculating total charge with 9.5 percent tax and 20 percent service

    first_family = (first_family + (3.5 / 10)) * total_charge;
    second_family = (second_family + (2.75 / 10)) * total_charge;
    third_family = (third_family + (2.75 / 10)) * total_charge;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The first family bill is " << first_family << "\n";
    std::cout << "The second family bill is " << second_family << "\n";
    std::cout << "The third family bill is " << third_family << "\n";

    return 0;
}
