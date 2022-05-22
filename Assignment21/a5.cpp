#include <iostream>
#include "Linked_list.cpp"
using namespace std;


int main(int argc, char const *argv[])
{
	PNODE list = NULL;
	//Insert data in List
	Insert(&list , 213);
	Insert(&list , 80);
	Insert(&list , 56);
	Insert(&list , 34);
	Insert(&list , 22);
	Insert(&list , 10);

	//Display Output
	cout << "\n------WELCOME USER------\n";
	cout << "\nCurrent List : \n";
	display(list);

	//Output
	cout << "\nLargest Number in list are  : "<<endl;
	Display_Large(list);
	cout << endl;
	return 0;
}