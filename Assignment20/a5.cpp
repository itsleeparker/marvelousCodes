#include<iostream>
#include "Linked_list.cpp"
using namespace std;


int main(int argc, char const *argv[])
{
	PNODE list = NULL;

	//Insert all the data
	Insert(&list , 15);
	Insert(&list , 25);
	Insert(&list , 39);
	Insert(&list , 38);
	Insert(&list , 59);

	//Display Output
	cout << "\n---WELCOME USER----\n";
	cout << "\nCurrent List : "<<endl;
	display(list);

	cout <<"\nAddition of numbers : "<<endl;
	Display_Addition_Number(list);
	cout <<endl;
	return 0;
}