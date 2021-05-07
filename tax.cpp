// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Liam Csiffary
// Created on: may 7, 2021
// This program calculates the cost of stuff
// using a provinces tax and a subtotal

// the libraries
#include <iostream>
// got this one so that I could get a string input from the user
// got it from
// https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1132/handouts/08-C++-Strings.pdf
#include <string>
#include <iomanip>

// the main function all the stuff happens here
int main() {
    // gets the province from the user
    std::string province;
    std::cout << "What province do you want to calculate tax for? \n";
    std::cout << "QC, MB, or BC: ";
    std::cin >> province;

    // gets the subtotal from the user
    int subtotal;
    std::cout << "What is the subtotal: ";
    std::cin >> subtotal;

    // if the user said Quebec
    if (province == "QC") {
        // gets the province tax then calculates the total
        const float province_tax = 0.05;
        float total = province_tax * subtotal + subtotal;

        // print the tax and total to the user
        std::cout << "\nThe tax in this province is " << province_tax << "%";

        std::cout << "\nThe total is: $" << std::fixed <<\
        std::setprecision(2)<< std::setfill('0') << total << std::endl;
    }


    // if the user said Manitoba
    if (province == "MB") {
        // gets the province tax then calculates the total
        const float province_tax = 0.15;
        float total = province_tax * subtotal + subtotal;

        // print the tax and total to the user
        std::cout << "\nThe tax in this province is " << province_tax << "%";

        std::cout << "\nThe total is: $" << std::fixed <<\
        std::setprecision(2)<< std::setfill('0') << total << std::endl;
    }


    // if the user said Britsh Columbia
    if (province == "BC") {
        // gets the province tax then calculates the total
        const float province_tax = 0.05;
        float total = province_tax * subtotal + subtotal;

        // print the tax and total to the user
        std::cout << "\nThe tax in this province is " << province_tax << "%";

        std::cout << "\nThe total is: $" << std::fixed <<\
        std::setprecision(2)<< std::setfill('0') << total << std::endl;
    }
}
