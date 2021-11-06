//Yuanjin Liang
//Project 1: Mad Libs
//October 9th 2021

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter an adjective: ";
    std::string first;
    std::cin >> first;

    std::cout << "Enter an adjective: ";
    std::string second;
    std::cin >> second;

    std::cout << "Enter a type of bird: ";
    std::string third;
    std::cin >> third;

    std::cout << "Enter a room in a house: ";
    std::string fourth;
    std::cin >> fourth;

    std::cout << "Enter a past tense verb: ";
    std::string fifth;
    std::cin >> fifth;

    std::cout << "Enter a verb: ";
    std::string sixth;
    std::cin >> sixth;

    std::cout << "Enter a relative's name: ";
    std::string seventh;
    std::cin >> seventh;

    std::cout << "Enter a noun: ";
    std::string eighth;
    std::cin >> eighth;

    std::cout << "Enter a liquid: ";
    std::string nineth;
    std::cin >> nineth;

    std::cout << "Enter a verb that ends with -ing: ";
    std::string tenth;
    std::cin >> tenth;

    std::cout << "Enter a part of the body (plural): ";
    std::string eleventh;
    std::cin >> eleventh;

    std::cout << "Enter a plural noun: ";
    std::string twelfth;
    std::cin >> twelfth;

    std::cout << "Enter a verb that ends with -ing: ";
    std::string thirteenth;
    std::cin >> thirteenth;

    std::cout << "Enter a noun: ";
    std::string fourteenth;
    std::cin >> fourteenth;


    std::cout << "It was a " << first << ", cold November day. ";
    std::cout << "I woke up to the " << second << " smell of " << third << " roasting in the " << fourth << " downstairs. ";
    std::cout << "I " << fifth << " down the stairs to see if I could help " << sixth << " the dinner. ";
    std::cout << "My mom said, \"See if " << seventh << " needs a fresh " << eighth << ".\" ";
    std::cout << "So I carried a tray of glasses full of " << nineth << " into the " << tenth << " room. ";
    std::cout << "When I got there, I couldn't believe my " << eleventh << "! ";
    std::cout << "There were " << twelfth << " " << thirteenth << " on the " << fourteenth << "! ";
}