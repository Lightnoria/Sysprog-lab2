#include <iostream>
#include "calculator.h" // ϳ�������� ������������ ����

int main() {
    Calculator calc; // ��������� ��'��� ������������

    int a = 5;
    int b = 3;

    std::cout << "Addition: " << calc.Add(a, b) << std::endl;    // ��������� ����� ���������
    std::cout << "Subtraction: " << calc.Sub(a, b) << std::endl; // ��������� ����� ��������

    return 0; // �������� ����������� ������
}
