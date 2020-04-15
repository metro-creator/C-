#include <iostream>
#include <stdlib.h>
 
using namespace std;

int main(){
	setlocale(0, "");
	cout <<"Введите год рождения: ";	
	int b_year;	
	cin >> b_year;	
	int vozrast;	
	vozrast=2020-b_year;	
	cout <<"Введите пол: ";
	char pol;	
	cin >> pol;

 
 if (pol!="м" or pol!="ж"){
  cout <<"Вы неправильно ввели пол";}	
else
 if (vozrast>=0 and vozrast<18){
  cout <<"Вам нужно в детскую поликлинику"; }
else	
 if (vozrast>=18 and vozrast<65 ) 	{
  cout <<"доступ разрешен" << endl;	
  
  if (b_year==1985 or b_year==1988 or b_year==1991 or b_year==1994)	{
  cout <<"Вам нужно пройти диспанцеризацию";}
}
else
 if(vozrast>=65)	{
 cout <<"доступ разрешен" << endl;	
 cout <<"Вам нужно пройти дополнительное обследование";}
else
	cout <<"Вы ввели год в будущем";

 return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
