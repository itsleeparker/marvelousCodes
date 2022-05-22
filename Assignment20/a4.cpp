#include <iostream>
#include "Linked_list.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
	PNODE list = NULL;
	int second_max;

	//Insert data into the list
	Insert(&list , 10);
	Insert(&list , 2);
	Insert(&list , 3);
	Insert(&list , 5);
	Insert(&list , 9);

	//Get the maximum number 
	display(list);
	cout << endl;
	second_max = Second_Maximum(list);
	cout << second_max <<endl;
	return 0;
}