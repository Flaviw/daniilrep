// ������ �.�.
// ��� �� 2-1
// ������������ ������ 6


#include <iostream>
using namespace std;


void a_helper(int* h, int* l, double* n) { // � ������� � ����� ���� ��� �������������
	cout << "1.���� �������� �������" << endl;
	cout << "2.���� ������� �������" << endl;
	cout << "3. �������� �������� �����" << endl;
	cout << "4. ����� �� ���������" << endl;
	
	cout << "�������� �����: ";
	int choice;
	cin >> choice;

	if (choice == 1) {
		cout << "������� ������: " << endl;
		cin >> *h;

	}
	else if (choice == 2) {
		cout << "������ ������: " << endl;
		cin >> *l;

	}
	else if (choice == 3) {
		cout << "����� �����: " << endl;
		cin >> *n;
	}
	else return;
}





int maximum(int a, int b, int c) { // ����������� ������������� �����
	if (a > b)
		if (a > c)
			return a;
		else return c;
	else if (b > c)
		return b;
	else return c;

	return -1;
}

int p_second_task(int a, int b, double c) { // �������� ��������
	if (floor(c) == c) {
		while (c < a || c > b)
		{
			cout << "������ �����, ���������: ";
			a_helper(&a, &b, &c);
		}
		return c;
	}
	else return ((b-a/2));

}

void Sort(int* arr, int n) { // �������� ���������� 
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

	cout << "������ �������: " << endl;
	cout << maximum(-5, 7, 0) << endl; // ������������ ������� �������

	cout << endl << "������ �������: " << endl;
	cout << "-------------------------------" << endl;

	cout << p_second_task(1, 100, 99) << endl; // ������������ ������� �������

	cout << endl << "������ �������: " << endl;
	cout << "-------------------------------" << endl;

	int* m = new int[5];
	cout << "��������� ������ ��� ����������(5 ���������): "; // ���������� �������
	for (int i = 0; i < 5; i++)
		cin >> m[i];
	cout << "������ �� ����������: " << endl; // ����� �� ����������
	for (int i = 0; i < 5; i++)
		cout <<  m[i];

	Sort(m, 5); // ����������

	cout << "��������������� ������: " << endl; // ����� ����� ����������
	for (int i = 0; i < 5; i++)
		cout << m[i] << " ";

	return 0;
}