#include "english_case_difference.h"
//������ ���������� ������� ����� �������� � ������� � ������ ��������� ���������� ���������
void LatinCharsDiff() {
	char inputChar;
	cout << "������� ������: ";//�������� ������
	cin >> inputChar; //������� ������
	
	if ('A' <= inputChar && inputChar <= 'z') {
		int diff = tolower(inputChar) - toupper(inputChar);
		cout << "������� � ��������� �����: " << diff << endl;//�������� ������
	}
	else {
		cout << "������: ������ ������, �� ���������� ��������� ������." << endl;//�������� ������
	}
}