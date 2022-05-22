#include <iostream>
#include "Linked_list.cpp"
using namespace std;


int main(int argc, char const *argv[])
{
	PNODE list = NULL;
	int max = 0;
	//Insert data in list
	Insert(&list , 1);
	Insert(&list , 2);
	Insert(&list , 3);
	Insert(&list , 4);
	Insert(&list , 5);

	//Display Output
	cout << "\n---Welcome User-----"<<endl;
	cout << "\nCurrent List : ";
	display(list);
	max = Maximum(list);
	cout << "\nThe Largest number in list is  :  "<< max <<endl;
	return 0;
}