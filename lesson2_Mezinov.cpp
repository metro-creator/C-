#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	setlocale(0, ""); 
	int a;  // ������� ���������� � � ��������� �� �������� 
	cout << "������� ����� a= "; // ������ �� ����� ����� "������� �����"
	cin >> a;  
	int b;      // ������� ���������� b 
	cout << "������� ����� b= "; // ������ �� ����� ����� "������� �����"
	cin >> b;                // ����� �� ������ �����
	cout << a + b;          
}

