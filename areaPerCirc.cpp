// Copyright 2025 Viviana Hurtado
// Created by Viviana Hurtado
// March 7, 2025
// This program calculates and displays the area
// and perimeter for a given user input.
#include <cmath>
#include <iostream>

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double area = M_PI * radius * radius;
    std::cout << "The area of the circle is: "
              << round(area * 100) / 100
              << " cm^2" << std::endl;

    double circumference = 2 * M_PI * radius;
    std::cout << "The circumference of the circle is: "
              << round(circumference * 100) / 100
              << " cm" << std::endl;

    return 0;
}
