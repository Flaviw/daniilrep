// Карась Д.Г.
// ИИС ПИ 2-1
// Лабораторная работа 3

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	cout << "Задание 1" << endl;

	int N;
	cout << "Введите размер: ";
	cin >> N;

	int* arr = new int[N];
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		cout << "Введите значение для " << i + 1 << " элемента массива: ";
		cin >> arr[i];
	}

	cout << "Обновленный массив: ";
	for (int i = 0; i < N; i++) {
		if(arr[i]>=0)
		cout << arr[i] << " ";
	}


	delete[] arr;


	cout << endl << "Задание 2" << endl;
	cout << "----------------------------------" << endl;

	cout << "Ввод строки: ";
	string str, str2 = "";
	cin >> str;
	string  example = "aeiouyAEIOUY";

	for (int i = 0; i < str.length(); i++)
		for (int j = 0; j < example.length(); j++)
			if (str[i] == example[j])
				str2 += str[i];


	cout << "Гласные из строки: " << str2 << endl;

	return 0;
}
