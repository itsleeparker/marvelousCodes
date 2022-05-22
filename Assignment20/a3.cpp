#include <iostream>
#include "Linked_list.cpp"
using namespace std;


int main(int argc, char const *argv[])
{
	PNODE list = NULL;
	int sum_of_even ;
	//Insert Data into the list
	Insert(&list , 2);
	Insert(&list , 3);
	Insert(&list , 4);
	Insert(&list , 5);
	Insert(&list , 6);

	//Display output
	cout << "\n---WELCOME USER----"<<endl;
	cout << "\nCurrent List is  : "<<endl;
	display(list);

	cout << "\nEven Numbers are : "<<endl;
	//Display all even numbers
	sum_of_even = Add_Even(list);
	cout << "\nSum of even numbers are "<<sum_of_even<<endl;
	return 0;
}