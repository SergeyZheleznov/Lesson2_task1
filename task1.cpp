// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


enum months
{
    Январь,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь
};

int main() {

    setlocale(LC_ALL, "Russian");

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
            case 1:
                std::cout << "Январь" << std::endl;
                break;
            case 2:
                std::cout << "Февраль" << std::endl;
                break;
            case 3:
                std::cout << "Март" << std::endl;
                break;
            case 4:
                std::cout << "Апрель" << std::endl;
                break;
            case 5:
                std::cout << "Май" << std::endl;
                break;
            case 6:
                std::cout << "Июнь" << std::endl;
                break;
            case 7:
                std::cout << "Июль" << std::endl;
                break;
            case 8:
                std::cout << "Август" << std::endl;
                break;
            case 9:
                std::cout << "Сентябрь" << std::endl;
                break;
            case 10:
                std::cout << "Октябрь" << std::endl;
                break;
            case 11:
                std::cout << "Ноябрь" << std::endl;
                break;
            case 12:
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
