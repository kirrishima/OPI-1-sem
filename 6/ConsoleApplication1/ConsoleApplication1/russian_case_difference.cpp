#include "russian_case_difference.h"
//������ ���������� ������� ����� �������� � ������� � ������ ��������� ������� ���������
void RussCharsDiff() {
	char inputChar;
	cout << "������� ������: ";//�������� ������
	cin >> inputChar;//������� ������
	if ('�' <= inputChar && inputChar <= '�') {

		cout << "������� � ��������� �����: " << inputChar - char(inputChar - ('�' - '�')) << endl;//�������� ������
	}
	else if ('�' <= inputChar && inputChar <= '�') {
		cout << "������� � ��������� �����: " << char(inputChar + ('�' - '�')) - inputChar << endl;//�������� ������
	}
	else {
		cout << "������: ������ ������, �� ���������� ������� ������." << endl;//�������� ������
	}
}