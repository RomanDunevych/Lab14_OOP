#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

// Функція для генерації випадкових чисел
int RandomNumber() { return rand() % 100 - 50; }

// Функція для виведення вектора на екран
void print(const vector<int>& a) {
    for (int i : a) cout << i << " ";
    cout << endl;
}

// Функція для знаходження максимального та мінімального елементів
pair<int, int> findMinMax(const vector<int>& a) {
    auto minMaxPair = minmax_element(a.begin(), a.end());
    return { *minMaxPair.first, *minMaxPair.second };
}

int main() {
    setlocale(LC_ALL, "UKR");
    srand(static_cast<unsigned int>(time(nullptr)));

    int n;
    cout << "Введiть кiлькiсть елементiв: ";
    cin >> n;

    vector<int> a(n);
    generate(a.begin(), a.end(), RandomNumber);

    cout << "Згенерований масив: ";
    print(a);

    auto minMaxPair = findMinMax(a);
    int minElem = minMaxPair.first;
    int maxElem = minMaxPair.second;

    cout << "Мiнiмальний елемент: " << minElem << endl;
    cout << "Максимальний елемент: " << maxElem << endl;


    return 0;
}
