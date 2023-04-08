// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

enum months
{
    Январь = 1,
    Февраль = 2,
    Март = 3, 
    Апрель = 4,
    Май = 5,
    Июнь = 6,
    Июль = 7,
    Август = 8,
    Сентябрь = 9,
    Октябрь = 10,
    Ноябрь = 11,
    Декабрь = 12
};

int main() {

    setlocale(LC_ALL, "");
    std::system("chcp 1251");

    months m;
    int mInt;
    
    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> mInt;
        m = static_cast<months>(mInt);
    
        if (m == 0) {
            std::cout << "До свидания" << std::endl;;
        }
        else if (m >= 13) {
            std::cout << "Неправильный номер!" << std::endl;
        }
        else {
            switch (m) {
            case months::Январь:
                std::cout << "Январь" << std::endl;
                break;
            case months::Февраль:
                std::cout << "Февраль" << std::endl;
                break;
            case months::Март:
                std::cout << "Март" << std::endl;
                break;
            case months::Апрель:
                std::cout << "Апрель" << std::endl;
                break;
            case months::Май:
                std::cout << "Май" << std::endl;
                break;
            case months::Июнь:
                std::cout << "Июнь" << std::endl;
                break;
            case months::Июль:
                std::cout << "Июль" << std::endl;
                break;
            case months::Август:
                std::cout << "Август" << std::endl;
                break;
            case months::Сентябрь:
                std::cout << "Сентябрь" << std::endl;
                break;
            case months::Октябрь:
                std::cout << "Октябрь" << std::endl;
                break;
            case months::Ноябрь:
                std::cout << "Ноябрь" << std::endl;
                break;
            case months::Декабрь:
                std::cout << "Декабрь" << std::endl;
                break;
            }
        }
    } while (m != 0);
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
