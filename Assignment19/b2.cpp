#include <iostream>
#include "Linked_list.cpp"
using namespace std;


int main(int argc, char const *argv[])
{
	PNODE list = NULL;

	//Insert Data into the node
	Insert(&list , 11);
	Insert(&list , 28);
	Insert(&list , 41);
	Insert(&list , 17);
	Insert(&list , 6);
	Insert(&list , 89);

	//Display the output data
	cout << "\n----Welcome User-----"<<endl;
	cout << "\nCurrent List : "<<endl;
	display(list);

	//Display prime numbers 
	cout << "\nPrime numbers are  : ";
	Display_Prime(list);
	return 0;
}