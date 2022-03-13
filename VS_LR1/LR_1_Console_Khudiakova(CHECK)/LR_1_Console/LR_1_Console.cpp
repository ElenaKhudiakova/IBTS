#include <iostream>
#include <LR_1.h>

int main()
{
    setlocale(LC_ALL, "rus");
    std::cout << "Лабораторная работа номер 1:DLL\n\n";
    std::cout << "Номер группы: " << Group() << "\n";
    std::cout << "ФИО: "; FIO();
    std::cout << "\n";
    system("pause");
}
