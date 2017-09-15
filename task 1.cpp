#include <conio.h>
#include <string>
#include <iostream>


using namespace std;

int main(){
	
	int a[10][10], b[10][10], c[10][10];
	int x, y, z, d, e, f;
	cout << "Enter rows and columns for a" << endl;
	cin >> x, y; //x denotes rows and y denotes columns

	cout << "Enter rows and columns for b" << endl;
	cin >> z,d; //z denotes rows and d denotes columns

	cout << "Enter values for a" << endl;

	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			cin >> a[i][j];
		}
		cout << "/n" ;
	}

	cout << "Enter values for b" << endl;

	for (int i = 0; i < z; i++){
		for (int j = 0; j < d; j++){
			cin >> a[i][j];
		}
		cout << "/n" ;
	}
	

		cout << "Multiply matrix A and B" << endl;
		
		if (y == z){
			for (int i = 0; i < x; i++){
				for (int j = 0; j < z; j++){
					c[i][j] = 0;
					for (int k = 0; k < z; k++){
						c[i][j] = a[i][j] * b[i][j];
					}
				}
			}
			cout << "Result" << endl;
			for (int i = 0; i < x; i++){
				for (int j = 0; j < d; j++){
					cout << "/t" << c[i][j] << endl;
				}
			}
		
		}
		else(cout << "not possible" << endl);
}