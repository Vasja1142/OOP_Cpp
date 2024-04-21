
#include <iostream>
#include "Pair.h"
#include "Rational.h"
#include "Vector.h"

int main() {
    setlocale(LC_ALL, "Ru");

    Pair nums1(3, 4);
    Pair nums2(2, 2);
    nums1.print();
    nums2.print();

    nums1.subtract(nums2);
    std::cout << "Разность nums1 и nums2 (Записана в num1):\n";
    nums1.print();

    Rational frac1(3, 5);

    Rational frac2(nums1); // Передаем nums1 как аргумент конструктору Rational
    frac2.print("Инициализация:"); // Печатаем значение frac2

    Rational frac3 = frac1.subtract(nums2); // Вычитаем nums2 из frac1
    frac3.print("Вычитание:"); // Печатаем результат

    Rational frac4 = frac3.addition(nums1); // Складываем frac3 и nums1
    frac4.print("Сложение:"); // Печатаем результат

    Rational frac5 = frac4.multiplication(frac4); // Умножаем frac4 на самого себя
    frac5.print("Умножение на саму себя:"); // Печатаем результат

    Vector<Pair> numbers; // Создаем вектор для хранения объектов Pair
    numbers.push_back(frac1); // Добавляем frac1
    numbers.push_back(frac2); // Добавляем frac2
    numbers.push_back(nums1); // Добавляем nums1
    cout << "Вывод значений вектора:\n";
    for (size_t i = 0; i < numbers.size(); ++i) {
        numbers[i].print();
    }

    return 0;
}
