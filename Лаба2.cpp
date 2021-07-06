// ������ �.�.
// ��� �� 2-1
// ������������ ������ 2



#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "ru");

	cout << "������ �������: " << endl << endl;
	//���� ���������� a b c
	int a, b, c;
	cout << "������� a b c: ";
	cin >> a >> b >> c;
	//����������� �������������
	int dis = b * b - 4 * a * c;
	//��� ������� ������������� ��������� �����
	if (dis > 0) {
		int x1 = (-b + sqrt(dis)) / (2 * a);
		int x2 = (-b - sqrt(dis)) / (2 * a);

		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	else if (dis == 0) {
		int x = (-b) / (2 * a);
		cout << "������ ��������� ����: " << x << endl;
	}
	else {
		cout << "��������� �� ����� ������";
	}

	cout << endl << "������ �������: " << endl;
	cout << "---------------------------------" << endl;

	// ����� 2 ����� ��������� �������
	int left, right;
	cout << "������� ��� ����� ���������: ";
	cin >> left;
	cin >> right;
	// ��������� ���������� ����� � �����
	int result = left + rand() % (right - left);
	cout << "���������: " << result;\

	cout << endl << "������ �������: " << endl;
	cout << "---------------------------------" << endl;

	int m[10];
	// ���������� �������
	for (int i = 0; i < 10; i++) {
		cout << "������� " << i + 1 << " ������� �������: ";
		cin >> m[i];
	}
	cout << "������ �� ����������: " << endl; // ������ �� ������ ���������
	for (int i = 0; i < 10; i++) {
		cout << m[i] << " ";
	}
	cout << endl;

	// ���������� ������� ���������
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (m[j] > m[j + 1]) {
				swap(m[j], m[j + 1]);
			}
		}
	}

	// ����� ���������� ������ ���������
	cout << "��������� ������ ��������� ����������: " << endl;
	for (int i = 0; i < 10; i++)
		cout << m[i] << " ";


	return 0;
}