#include <iostream>
using namespace std;

// Прототип звичайної функції
int Count(int* a, const int size);

// Прототип шаблонної функції
template <typename T>
int Count(T* a, const int size);

int main()
{
    const int n = 10;
    int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Виклик звичайної функції
    int k1 = Count(a, n);
    cout << "Count(a, n) [звичайне int] = " << k1 << endl;

    // Виклик шаблонної функції для типу int
    int k2 = Count<int>(a, n);
    cout << "Count(a, n) [шаблонне int] = " << k2 << endl;

    // Масив типів long для демонстрації шаблонної функції
    long b[n] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 101 };
    int k3 = Count(b, n);
    cout << "Count(b, n) [шаблонне long] = " << k3 << endl;

    return 0;
}

// Звичайна функція для обчислення кількості парних елементів
int Count(int* a, const int size)
{
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
            k++;
    }
    return k;
}

// Шаблонна функція для обчислення кількості парних елементів
template <typename T>
int Count(T* a, const int size)
{
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
            k++;
    }
    return k;
}