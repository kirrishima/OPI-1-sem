#include "digit_char_code.h"

//������ ���������� ���� �������� �����
void NumberCharToCode() {
	char inputDigit;
	cout << "������� �����: ";//�������� ������
	cin >> inputDigit;//������� ������

	if ('0' <= inputDigit && inputDigit <= '9') {
		int digitValue = inputDigit - '0';
		cout << "��� �������: " << int(inputDigit) << endl;//�������� ������
	}
	else {
		cout << "������: ������ ������, �� ���������� ������." << endl;//�������� ������
	}
}