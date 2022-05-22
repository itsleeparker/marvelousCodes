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
	Insert(&list , 343);
	Insert(&list , 202);
	Insert(&list , 111);

	//Display Output
	cout << "\n------WELCOME USER------\n";
	cout << "\nCurrent List : \n";
	display(list);

	//Output
	cout << "\nPallindrome in list  : "<<endl;
	Pallindrome(list);
	cout << endl;
	return 0;
}