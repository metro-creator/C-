#include <iostream>
#include <stdlib.h>
 
using namespace std;

int main(){
	setlocale(0, "");
	cout <<"������� ��� ��������: ";	
	int b_year;	
	cin >> b_year;	
	int vozrast;	
	vozrast=2020-b_year;	
	cout <<"������� ���: ";
	char pol;	
	cin >> pol;

 
 if (pol!="�" or pol!="�"){
  cout <<"�� ����������� ����� ���";}	
else
 if (vozrast>=0 and vozrast<18){
  cout <<"��� ����� � ������� �����������"; }
else	
 if (vozrast>=18 and vozrast<65 ) 	{
  cout <<"������ ��������" << endl;	
  
  if (b_year==1985 or b_year==1988 or b_year==1991 or b_year==1994)	{
  cout <<"��� ����� ������ ���������������";}
}
else
 if(vozrast>=65)	{
 cout <<"������ ��������" << endl;	
 cout <<"��� ����� ������ �������������� ������������";}
else
	cout <<"�� ����� ��� � �������";

 return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
