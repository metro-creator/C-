#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

setlocale(0, ""); 
	int a;  // ������� ���������� � � ��������� �� �������� 
	cout << "������� ����� a= "; // ������ �� ����� ����� "������� �����"
	cin >> a;  
	int b;      // ������� ���������� b 
	cout << "������� ����� b= "; // ������ �� ����� ����� "������� �����"
	cin >> b;                // ����� �� ������ �����
	
	char retg;  
    cout << "������� ���� �������� ";
	cin >> retg;
	
	if (retg=='+'){
	 cout << a + b ;
	}
else
	if (retg=='-'){
	 cout << a - b ;
	}
else	
	if (retg=='*'){
	 cout << a * b ;
	}
else	
	if (retg=='/' and b==0){ 
 	cout << "�� 0 ������ ������! ";
	} 
else  

	if (retg=='/' ){ 
 	cout << a / b ;
	} 
else  cout << "�������� ������ ��������! ";

}


















