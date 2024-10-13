#include <iostream>
#include "calculator.h" // Підключаємо заголовковий файл

int main() {
    Calculator calc; // Створюємо об'єкт калькулятора

    int a = 5;
    int b = 3;

    std::cout << "Addition: " << calc.Add(a, b) << std::endl;    // Викликаємо метод додавання
    std::cout << "Subtraction: " << calc.Sub(a, b) << std::endl; // Викликаємо метод віднімання

    return 0; // Програма завершилася успішно
}
