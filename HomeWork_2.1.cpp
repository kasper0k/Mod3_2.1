/*Задача 1. Калькулятор двух чисел
В этом задании вам нужно будет создать класс, выполняющий простые арифметические операции для двух чисел, и продемонстрировать его работу
Создайте класс Calculator. Класс должен содержать два поля num1 и num2 для хранения дробных чисел*/

#include <iostream>

class calculator
{
public:
    double num1, num2;
    calculator() : num1(1), num2(1) {};

    bool set_num1(double num1)
    {
        if (num1 == 0)
        {
            return 0;
        }
        else
        {
            this->num1 = num1;
            return 1;            
        };
    };
    bool set_num2(double num2)
    {
        if (num2 == 0)
        {
            return 0;
        }
        else
        {
            this->num2 = num2;
            return 1;
        };
    };
    double add() { return (this->num1 + this->num2); };
    double multiply() { return (this->num1 * this->num2); };
    double subtract_1_2() { return (this->num2 - this->num1); };
    double subtract_2_1() { return (this->num1 - this->num2); };
    double divide_1_2() { return (this->num1 / this->num2); };
    double divide_2_1() { return (this->num2 / this->num1); };
};

int main()
{
    setlocale(LC_ALL, "Russian");

    double num1=0, num2=0;
    bool test_num1, test_num2;
    int a = 0;
    calculator first;
    while (a==0)
    {
        do
        {   
            std::cout << "Введите  первое число: ";
            std::cin >> num1;
            test_num1 = first.set_num1(num1);
        } while (test_num1 == false);

        do
        {
            std::cout << "Введите  второе число: ";
            std::cin >> num2;
            test_num2 = first.set_num2(num2);
        } while (test_num2 == false);

        std::cout << "num1 + num2 = " << first.add() <<std::endl;
        std::cout << "num1 * num2 = " << first.multiply() <<std::endl;
        std::cout << "num2 - num1 = " << first.subtract_1_2() <<std::endl;
        std::cout << "num1 - num2 = " << first.subtract_2_1() <<std::endl;
        std::cout << "num1 / num2 = " << first.divide_1_2() <<std::endl;
        std::cout << "num2 / num1 = " << first.divide_2_1() <<std::endl;
    }        
    return 0;
}
