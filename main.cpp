// Name: Herberth Sanchez-Gomez
// Course: CIS 5 - Week 3 Lab
// Description: A typed about-me program demonstrating fundamental types and const.

#include <iostream>
#include <string>

int main() {
    // Constant declaration
    const int CURRENT_YEAR = 2026;

    // Variable declarations and immediate initializations
    std::string name = "Herberth Sanchez";
    int age = 25;
    double height_m = 1.98;
    char initial = 'H';
    bool student = true;

    // Labeled output matching the sample format
    std::cout << "=== About me ===\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Height (m): " << height_m << "\n";
    std::cout << "Initial: " << initial << "\n";
    std::cout << "Student: " << student << "\n";
    std::cout << "Year: " << CURRENT_YEAR << "\n";

    return 0;
}