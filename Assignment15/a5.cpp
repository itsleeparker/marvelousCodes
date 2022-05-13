#include <iostream>
using namespace std;

void displayPattern(int rows , int cols){
	int count  = 0;
	for(int i = 1 ;  i <= rows ; ++i ){
		for(int j = 1; j <= cols ; ++j){
			cout << j + count << "\t";
		}
		count++;
		cout<<"\n";	
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