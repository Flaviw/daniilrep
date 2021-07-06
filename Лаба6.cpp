// Карась Д.Г.
// ИИС ПИ 2-1
// Лабораторная работа 6


#include <iostream>
using namespace std;


void a_helper(int* h, int* l, double* n) { // а функция и вывод меню при необходимости
	cout << "1.Ввод верхнего предела" << endl;
	cout << "2.Ввод нижнего предела" << endl;
	cout << "3. Изменить входящее число" << endl;
	cout << "4. Выход из программы" << endl;
	
	cout << "Сделайте выбор: ";
	int choice;
	cin >> choice;

	if (choice == 1) {
		cout << "Верхний предел: " << endl;
		cin >> *h;

	}
	else if (choice == 2) {
		cout << "Нижний предел: " << endl;
		cin >> *l;

	}
	else if (choice == 3) {
		cout << "Новое число: " << endl;
		cin >> *n;
	}
	else return;
}





int maximum(int a, int b, int c) { // определение максимального числа
	if (a > b)
		if (a > c)
			return a;
		else return c;
	else if (b > c)
		return b;
	else return c;

	return -1;
}

int p_second_task(int a, int b, double c) { // проверка пределов
	if (floor(c) == c) {
		while (c < a || c > b)
		{
			cout << "Ошибка ввода, повторите: ";
			a_helper(&a, &b, &c);
		}
		return c;
	}
	else return ((b-a/2));

}

void Sort(int* arr, int n) { // алгоритм сортировки 
	int counter = 0;
	for (int i = 1; i < n; i++) {
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
			int tmp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = tmp;
		}
	}
}

int main() {
	setlocale(LC_ALL, "ru");

	cout << "Первое задание: " << endl;
	cout << maximum(-5, 7, 0) << endl; // демонстрация первого задания

	cout << endl << "Второе задание: " << endl;
	cout << "-------------------------------" << endl;

	cout << p_second_task(1, 100, 99) << endl; // демонстрация второго задания

	cout << endl << "Третье задание: " << endl;
	cout << "-------------------------------" << endl;

	int* m = new int[5];
	cout << "Заполните массив для сортировки(5 элементов): "; // заполнение массива
	for (int i = 0; i < 5; i++)
		cin >> m[i];
	cout << "Массив до сортировки: " << endl; // вывод до сортировки
	for (int i = 0; i < 5; i++)
		cout <<  m[i];

	Sort(m, 5); // сортировка

	cout << "Отсортированный массив: " << endl; // вывод после сортировки
	for (int i = 0; i < 5; i++)
		cout << m[i] << " ";

	return 0;
}