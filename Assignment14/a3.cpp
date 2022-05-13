#include <iostream>
using namespace std;

void displayPattern(int rows , int cols){
	for(int i = 1; i <= rows ; ++i){
		for(int j = 1; j <= cols ; ++j){
			printf("%c\t" ,i+64);
		}
		cout << "\n";
	}
}


int main(int argc, char const *argv[])
{
	int rows = 0 , cols = 0;

	cout << "\nWelcome User "<<endl;

	//Take input
	cout << "\nEnter nnumber of rows : ";
	cin >> rows;
	cout << "\nEnter number of cols : ";
	cin >> cols;

	//display output
	displayPattern(rows , cols);
	return 0;
}