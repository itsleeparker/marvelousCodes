#include <iostream>
#include "Linked_list.cpp"
using namespace std;


int main(int argc, char const *argv[])
{
	PNODE list = NULL;

	//Insert all the data into the list

	Insert(&list , 10);
	Insert(&list , 20);
	Insert(&list , 30);
	Insert(&list , 40);

	//get the sum and display the answer
	cout << "\n---Welcome User-----"<<endl;
	cout << "\nCurrent List : ";
	display(list);

	cout << "\nThe sum of number in list is " << sum_of_data(list)<<endl;
	return 0;
}