#include<iostream>
#include "Linked_list.cpp"
using namespace std;


int main(int argc, char const *argv[])
{
	PNODE list =NULL;
	int num , pos = 0;

	//Insert values in the list;
	Insert(&list , 2);
	Insert(&list , 3);
	Insert(&list , 4);
	Insert(&list , 5);
	Insert(&list , 2);

	cout << "\n---Welcome User----\n";
	cout  << "\nThe current List is  : "<<endl;
	display(list);

	//Get the last occurence of the value
	cout << "\nEnter  a  number  : ";
	cin >> num;

	pos = last_occurence(list ,num);
	if(pos!=0){
		cout << "\nLast occurence of "<<num<<" in list is at position  "<<pos;
	}else{
		cout << "\nNumber not found in list "<<endl;
	}
	cout<<endl;
	return 0;
}