//wap to implement singly linked list and using **pointer and apply some activities on it
#include <iostream>
#include "Linked_list.cpp"
using namespace std;

int main(int argc, char const *argv[])
	{
		PNODE link = NULL;
		int count = 0;
		//Insert all the data in the linked list
		Insert(&link, 1);
		Insert(&link, 2);
		Insert(&link, 3);
		Insert(&link, 4);
		Insert(&link, 5);

		//Display the list
		cout << "\nLinked List : "<<endl;
		display(link);

		//Check the occurence of the number 
		if(findOne(link , 3 , &count)){
			cout << "\nNumber found at "<<count<<" Position"<<endl;		
		}else{
			cout<<"\nGiven Number not found";
		}
		cout<<"\n---THANKYOU USE AGAIN------\n"<<endl;
		return 0;
	}	