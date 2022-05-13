#include <iostream>
using namespace std;


void displayPattern(int rows , int cols){
	for(int i = 0 ; i<rows ;++i){
		for(int j = 1 ; j<=cols ;++j){
			if(i%2 == 0){
				cout<<j*2<<"\t";
			}else{
				cout<<j*2 - 1<<"\t";
			}
		}
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