// MyHomeWork-7
//
// by Marat
//
//

#include <iostream>
#include "myLib.h"
#include <fstream>

    //----------------------------Задание №2------------------------------//

#define COMPARE(a, b, c)  std::cout << (( a >= 0 && a < b ) ? true : false) << std::endl;

    //----------------------------Задание №3------------------------------//

#define SIZE 6

#define SwapINT(a, b) a = arr[b + 1];         \
                      arr[b + 1] = arr[b];    \
                      arr[b] = a;             \

    //----------------------Задание №4------------------------//

#pragma pack(push, 1)

struct Employee

{
    unsigned int id;

    unsigned short age;

    double salary;

};

#pragma pack(pop)


void task3();

int main()
{

    //---------------------------Задание № 1,5-----------------------------//

    const int size = 15;

    float Array[size];

    int positive = 0;

    int negative = 0;

    arrLib::fillingArray(Array, size);

    arrLib::printArray(Array, size);

    arrLib::countPosNegNum(Array, size, positive, negative);

    std::cout << "Negative numbers ->  " << negative << std::endl;

    std::cout << "Positive numbers ->  " << positive << std::endl;

    std::cout << std::endl;

    //-----------------------------Задание №2------------------------------//

    int num1, num2;

    std::cout << "Enter num_1 -> ";

    std::cin >> num1;

    std::cout << std::endl;

    std::cout << "Enter num_2 -> ";

    std::cin >> num2;

    std::cout << std::endl;

    COMPARE(num1, num2)

    std::cout << std::endl;

    task3();

    std::cout << std::endl << std::endl;

    //---------------------------Задание №4---------------------------//

    Employee *emp = new Employee;

    emp->id = 459;

    emp->age = 31;

    emp->salary = 37489;

    std::cout << "ID -> " << emp->id << std::endl;

    std::cout << "Age -> " << emp->age << std::endl;

    std::cout << "Salary -> " << emp->salary << std::endl;

    std::cout << std::endl;

    std::cout << "Bytes -> " << sizeof(emp) << std::endl;

    std::ofstream fout("Eployee.txt");

    fout << "Employee ID : " << emp->id << std::endl;

    fout << "Employee Age : " << emp->age << std::endl;

    fout << "Employee Salary : " << emp->salary << std::endl;

    fout.close();

    delete emp;

    return 0;
}


void task3()
{
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "Enter array num -> ";

        std::cin >> arr[i];
    }

    int temp = 0;

    for (int i = 0; i < SIZE - 1; ++i) // i - номер прохода
    {
        for (int j = 0; j < SIZE - 1; ++j) // внутренний цикл прохода
        {
            if (arr[j + 1] < arr[j])
            {
                SwapINT(temp, j)
            }
        }
    }

    std::cout << std::endl;

    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << arr[i];

        std::cout << " ";
    }
}