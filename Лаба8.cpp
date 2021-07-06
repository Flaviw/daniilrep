// Карась Д.Г.
// ИИС ПИ 2-1
// Лабораторная работа 8


#include <iostream>
using namespace std;


double middle_a(int* arr, int n) {//функция получения среднего арифметического
	double s = 0;
	for (int i = 0; i < n; i++)
		s += arr[i];//сумма всех элементов массива
	s /= n;//вычисление результата
	return s;
}



int main() {
	setlocale(LC_ALL, "ru");


	cout << "Первое задание: " << endl;

	int n;
	cin >> n;//ввод пятизначного числа
	int arr[5];

	for (int i = 0; i < 5; i++) // заполнение массива цифрами числа 
	{
		arr[i] = n % 10;
		n /= 10;
	}

	for (int i = 4; i >= 0; i--)//вывод наоборот
		cout << arr[i] << endl;

	cout << endl <<  "Второе задание: " << endl;
	cout << "-----------------------------" << endl;


	char bukva;
	cout << "Ввод буквы: ";
	cin >> bukva; // ввод буквы

	bukva = toupper(bukva); // перевод в верхний регистр
	cout << "Верхний регистр: " << bukva << endl;


	cout << endl << "Третий задание: " << endl;
	cout << "-----------------------------" << endl;


	int size; // ввод размера массива
	cout << "Введите размер массива: ";
	cin >> size;

	int* arr2 = new int[size]; //создание массива

	for (int i = 0; i < size; i++)//заполнение
	{
		cout << "Введите " << i + 1 << " элемент массива: ";
		cin >> arr2[i];
	}

	double result = middle_a(arr2, size);//получение результата из функции

	cout << "Результат: " << result;//вывод результата

	delete[] arr2;
	return 0;
}
