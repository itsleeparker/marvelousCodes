#include <iostream>
#include "Linked_list.cpp"
using namespace std;


int main(int argc, char const *argv[])
{
	PNODE list = NULL;
	//Insert data in List
	Insert(&list , 25);
	Insert(&list , 80);
	Insert(&list , 56);
	Insert(&list , 34);
	Insert(&list , 89);
	Insert(&list , 78);

	//Display Output
	cout << "\n------WELCOME USER------\n";
	cout << "\nCurrent List : \n";
	display(list);

	//reverse List 
	reverse_numbers(list);
	cout << "\nReversed Numbers are  : "<<endl;
	display(list);
	cout << endl;
	return 0;
}