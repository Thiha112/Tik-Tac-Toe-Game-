#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
	int a = 1, input = 0;
	char value,board[11][11] = {
						   { ' ',' ',' ','|',' ',' ',' ','|',' ',' ',' ' },
						   { ' ','1',' ','|',' ','2',' ','|',' ','3',' ' },
						   { ' ',' ',' ','|',' ',' ',' ','|',' ',' ',' ' },
			 			   { '_','_','_','_','_','_','_','_','_','_','_' },
						   { ' ',' ',' ','|',' ',' ',' ','|',' ',' ',' ' },
						   { ' ','4',' ','|',' ','5',' ','|',' ','6',' ' },
						   { ' ',' ',' ','|',' ',' ',' ','|',' ',' ',' ' },
						   { '_','_','_','_','_','_','_','_','_','_','_' },
						   { ' ',' ',' ','|',' ',' ',' ','|',' ',' ',' ' },
						   { ' ','7',' ','|',' ','8',' ','|',' ','9',' ' },
						   { ' ',' ',' ','|',' ',' ',' ','|',' ',' ',' ' },

	};

Board: for (int i = 0; i < 11; i++) {
	cout << "\t\t\t\t";
	for (int j = 0; j < 11; j++) {
		cout << board[i][j];
	}
	cout << endl;
}
cout << endl;

while (input != -1) {
	if (a % 2 == 0) { cout << "This turn is for 'x' : "; cin >> input; value = 'x'; a++; goto Condition; }
	else { cout << "This turn is for 'o' : "; cin >> input; value = 'o'; a++; goto Condition; }
	
Condition: switch (input) {
	case 1: board[1][1] = value; system("CLS"); goto Board; break;
	case 2: board[1][5] = value; system("CLS"); goto Board; break;
	case 3: board[1][9] = value; system("CLS"); goto Board; break;
	case 4: board[5][1] = value; system("CLS"); goto Board; break;
	case 5: board[5][5] = value; system("CLS"); goto Board; break;
	case 6: board[5][9] = value; system("CLS"); goto Board; break;
	case 7: board[9][1] = value; system("CLS"); goto Board; break;
	case 8: board[9][5] = value; system("CLS"); goto Board; break;
	case 9: board[9][9] = value; system("CLS"); goto Board; break;
		}
	}
cout << endl << endl;
cout.width(10);  for (int i = 0; i <= 50; i++) { cout << "*"; }
cout << endl; cout.width(40);  cout << "Game Over!!!" << endl;
cout.width(10);  for (int i = 0; i <= 50; i++) { cout << "*"; }
}
