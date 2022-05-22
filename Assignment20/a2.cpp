#include <iostream>
#include "Linked_list.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
	PNODE list = NULL;

	//Insert data into the list;
	Insert(&list , 11);
	Insert(&list , 20);
	Insert(&list , 17);
	Insert(&list , 41);
	Insert(&list , 22);
	Insert(&list , 89);

	//display Output
	cout << "\n----Welcome User----"<<endl;
	cout << "Data in list  : "<<endl;
	display(list);

	//Output
	cout << "Prime Numbers in list : "<<endl;
	Display_Prime(list);
	
	return 0;
}