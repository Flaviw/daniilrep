// Карась Д.Г.
// ИИС ПИ 2-1
// Лабораторная работа 2



#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "ru");

	cout << "Первое задание: " << endl << endl;
	//ввод параметров a b c
	int a, b, c;
	cout << "Введите a b c: ";
	cin >> a >> b >> c;
	//определение дискриминанта
	int dis = b * b - 4 * a * c;
	//при условии дискриминанта находятся корни
	if (dis > 0) {
		int x1 = (-b + sqrt(dis)) / (2 * a);
		int x2 = (-b - sqrt(dis)) / (2 * a);

		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	else if (dis == 0) {
		int x = (-b) / (2 * a);
		cout << "Корень уравнения один: " << x << endl;
	}
	else {
		cout << "Уравнение не имеет корней";
	}

	cout << endl << "Второе задание: " << endl;
	cout << "---------------------------------" << endl;

	// выбор 2 чисел диапазона рандома
	int left, right;
	cout << "Введите два числа диапазона: ";
	cin >> left;
	cin >> right;
	// получение рандомного числа и вывод
	int result = left + rand() % (right - left);
	cout << "Результат: " << result;\

	cout << endl << "Третье задание: " << endl;
	cout << "---------------------------------" << endl;

	int m[10];
	// заполнение массива
	for (int i = 0; i < 10; i++) {
		cout << "Введите " << i + 1 << " элемент массива: ";
		cin >> m[i];
	}
	cout << "Массив до сортировки: " << endl; // массив до работы алгоритмы
	for (int i = 0; i < 10; i++) {
		cout << m[i] << " ";
	}
	cout << endl;

	// Сортировка массива пузырьком
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (m[j] > m[j + 1]) {
				swap(m[j], m[j + 1]);
			}
		}
	}

	// вывод результата работы алгоритма
	cout << "Результат работы алгоритма сортировки: " << endl;
	for (int i = 0; i < 10; i++)
		cout << m[i] << " ";


	return 0;
}
