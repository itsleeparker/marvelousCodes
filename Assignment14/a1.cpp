#include<iostream>
using namespace std;

void displayPattern(int rows , int cols){
	int i , j;
	for(i=0 ; i < rows ; ++i){
		for(j = 1 ; j<=cols ; ++j){
			printf("%c\t",j+64); 
		}
		cout<<"\n";
	}

}

int main(int argc, char const *argv[])
{
	int rows = 0  ,  cols = 0 ;
	cout<<"\nWelcome User"<<endl;
	cout << "\nEnter number of rows : ";
	cin >> rows;
	cout << "\nEnter Number of cols : ";
	cin >> cols;

	displayPattern(rows , cols);
	return 0;
}