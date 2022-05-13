#include <iostream>
using namespace std;


void displayPattern(int rows , int cols){
	int count = 0;
	for(int i = 0 ; i < rows ; i++){
		for(int j = 0 ; j<cols ; ++j){
			if(count == 10)
				count = 0;
			cout<<count++<<"\t";
		}
		cout << "\n";
	}
}

int main(int argc, char const *argv[])
{
	int rows = 0  , cols = 0;
	cout << "\n Welcome User";
	cout << "\nEnter number of rows : ";
	cin >> rows;
	cout << "\nEnter number of cols : ";
	cin >> cols;

	displayPattern(rows , cols);
	
	return 0;
}