#include <iostream>
using namespace std;


void displayPattern(int rows , int cols){
	for(int i = 1 ; i <= rows ; ++i){
		for(int j = 1 ; j <= cols ; ++j){
			if(j == 1 || i == 1 || j == cols || i == rows){
				cout<<"*\t";
			}else{
				cout <<"@\t";
			}
		}
		cout << "\n";
	}
}

int main(int argc, char const *argv[])
{
	int rows = 0  , cols = 0;
	cout << "\nWelcome User "<<endl;
	cout << "\nEnter number of rows : ";
	cin >> rows; 
	cout << "\nEnter numbe of cols : ";
	cin >> cols;

	displayPattern(rows ,cols);
	return 0;
}