// ������ �.�.
// ��� �� 2-1
// ������������ ������ 3

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	cout << "������� 1" << endl;

	int N;
	cout << "������� ������: ";
	cin >> N;

	int* arr = new int[N];
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		cout << "������� �������� ��� " << i + 1 << " �������� �������: ";
		cin >> arr[i];
	}

	cout << "����������� ������: ";
	for (int i = 0; i < N; i++) {
		if(arr[i]>=0)
		cout << arr[i] << " ";
	}


	delete[] arr;


	cout << endl << "������� 2" << endl;
	cout << "----------------------------------" << endl;

	cout << "���� ������: ";
	string str, str2 = "";
	cin >> str;
	string  example = "aeiouyAEIOUY";

	for (int i = 0; i < str.length(); i++)
		for (int j = 0; j < example.length(); j++)
			if (str[i] == example[j])
				str2 += str[i];


	cout << "������� �� ������: " << str2 << endl;

	return 0;
}