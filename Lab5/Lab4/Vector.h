#pragma once

#include <vector>
#include <iostream>
#include <stdexcept>
#include <utility>

template<typename T>
class Vector {
public:
    // Конструктор по умолчанию
    Vector() : _size(0), _capacity(0), _data(nullptr) {}

    // Деструктор
    ~Vector() {
        delete[] _data;
    }

    // Добавление элемента в конец вектора
    void push_back(const T& value) {
        if (_size >= _capacity) {
            if (_capacity == 0) _capacity = 1;
            else _capacity *= 2;
            T* newData = new T[_capacity];
            for (size_t i = 0; i < _size; ++i) {
                newData[i] = _data[i];
            }
            delete[] _data;
            _data = newData;
        }
        _data[_size++] = value;
    }

    // Получение элемента по индексу
    T& operator[](size_t index) {
        if (index >= _size) {
            throw std::out_of_range("Index out of range");
        }
        return _data[index];
    }

    // Получение размера вектора
    size_t size() const {
        return _size;
    }

private:
    size_t _size;       // Текущий размер вектора
    size_t _capacity;   // Емкость вектора (количество выделенной памяти)
    T* _data;           // Указатель на массив элементов
};


