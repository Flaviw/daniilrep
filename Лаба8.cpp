// ������ �.�.
// ��� �� 2-1
// ������������ ������ 8


#include <iostream>
using namespace std;


double middle_a(int* arr, int n) {//������� ��������� �������� ���������������
	double s = 0;
	for (int i = 0; i < n; i++)
		s += arr[i];//����� ���� ��������� �������
	s /= n;//���������� ����������
	return s;
}



int main() {
	setlocale(LC_ALL, "ru");


	cout << "������ �������: " << endl;

	int n;
	cin >> n;//���� ������������ �����
	int arr[5];

	for (int i = 0; i < 5; i++) // ���������� ������� ������� ����� 
	{
		arr[i] = n % 10;
		n /= 10;
	}

	for (int i = 4; i >= 0; i--)//����� ��������
		cout << arr[i] << endl;

	cout << endl <<  "������ �������: " << endl;
	cout << "-----------------------------" << endl;


	char bukva;
	cout << "���� �����: ";
	cin >> bukva; // ���� �����

	bukva = toupper(bukva); // ������� � ������� �������
	cout << "������� �������: " << bukva << endl;


	cout << endl << "������ �������: " << endl;
	cout << "-----------------------------" << endl;


	int size; // ���� ������� �������
	cout << "������� ������ �������: ";
	cin >> size;

	int* arr2 = new int[size]; //�������� �������

	for (int i = 0; i < size; i++)//����������
	{
		cout << "������� " << i + 1 << " ������� �������: ";
		cin >> arr2[i];
	}

	double result = middle_a(arr2, size);//��������� ���������� �� �������

	cout << "���������: " << result;//����� ����������

	delete[] arr2;
	return 0;
}
