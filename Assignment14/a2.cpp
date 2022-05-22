#include <iostream>
using namespace std;

void displayPattern(int rows , int cols){
	for(int i = 0 ; i < rows ; ++i){
		for(int j = 1 ; j <= cols ; ++j){
			if(i%2!=0){
				printf("%c\t" , j+96);
			}else{
				printf("%c\t" , j+64);
			}
		}
		cout << "\n";
	}
}


int main(int argc, char const *argv[])
{
	int rows = 0, cols = 0;
	cout<<"\nWelcome User "<<endl;

	cout << "\nEnter number of rows : ";
	cin >> rows;
	cout << "\nEnter number of cols : ";
	cin >> cols;

	//display output
	displayPattern(rows ,cols);
	return 0;
}