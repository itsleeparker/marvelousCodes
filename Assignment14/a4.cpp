#include <iostream>
using namespace std;

void displayPattern(int rows , int cols){
	for(int i = rows ; i>=1 ; --i){
		for(int j = 0 ; j < cols ; ++j)
			cout << i << "\nt";
		cout<<"\n";
	}
}

int main(int argc, char const *argv[])
{
	int rows = 0 , cols = 0;

	cout << "\nWelcome User ";

	cout << "\nEnter number of rows : ";
	cin >> rows;
	cout << "\nEnter number cols:  ";
	cin >> cols;

	//display Output
	displayPattern(rows , cols);
	return 0;
}