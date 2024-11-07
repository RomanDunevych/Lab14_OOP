#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

// ������� ��� ��������� ���������� �����
int RandomNumber() { return rand() % 100 - 50; }

// ������� ��� ��������� ������� �� �����
void print(const vector<int>& a) {
    for (int i : a) cout << i << " ";
    cout << endl;
}

// ������� ��� ����������� ������������� �� ���������� ��������
pair<int, int> findMinMax(const vector<int>& a) {
    auto minMaxPair = minmax_element(a.begin(), a.end());
    return { *minMaxPair.first, *minMaxPair.second };
}

int main() {
    setlocale(LC_ALL, "UKR");
    srand(static_cast<unsigned int>(time(nullptr)));

    int n;
    cout << "����i�� �i���i��� �������i�: ";
    cin >> n;

    vector<int> a(n);
    generate(a.begin(), a.end(), RandomNumber);

    cout << "������������ �����: ";
    print(a);

    auto minMaxPair = findMinMax(a);
    int minElem = minMaxPair.first;
    int maxElem = minMaxPair.second;

    cout << "�i�i������� �������: " << minElem << endl;
    cout << "������������ �������: " << maxElem << endl;


    return 0;
}
