#include <iostream>
#include "Linked_list.cpp"
using namespace std;


int main(int argc, char const *argv[])
{
	PNODE list = NULL;
    int min = 0;
	//Insert Data into the list
	Insert(&list , 10);
	Insert(&list , 20);
	Insert(&list , 30);
	Insert(&list , 40);
	Insert(&list , 50);

	//Fimd the smallest number in list
	min = Minimum(list);

	//Display Output
	cout << "\n---WELCOME USER-----"<<endl;
	cout << "Current List  : "<<endl;
	display(list);

	cout << "\nThe smallest number in the list is "<<min<<endl;
	return 0;
}