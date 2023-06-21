#include<iostream>
using namespace std;

/*
* This program is an answer sheet that displays the results right after a multiple choice test is complete.
* This program utilizes comparison of arrays using for loops and if/else statements to keep track of the scores.
* 
* Matanda Hillary Phiri
*/

int main() {
	//Declare Variables
	const int Q_number = 20;
	char CorrectAnswer[Q_number] = { 'A','D','B','B', 
									 'C','B','A','B',
									 'C','D','A','C',
									 'D','B','D','C',
									 'C','A','D','B'},
	InputAnser[Q_number];

	int scored = 0, missed = 0;
	char start;
	

	//Display intruction
	cout << "\t\t\tAnswer Sheet\n";
	cout << "Simply input your selected answer choice for every question number that displays\n"
		<<"To get started, press enter.";
	cin.get(start);
	cin.clear();

	for (int i = 0; i < Q_number; i++) {
		cout << (i + 1) << ".";
		cin >> InputAnser[i];
		InputAnser[i] = toupper(InputAnser[i]);
		//Input validation
		while ((InputAnser[i] != 'A') && (InputAnser[i] != 'B') && (InputAnser[i] != 'C') && (InputAnser[i] != 'D')) {
			cout << "!ERROR! there are only 4 options A,B,C, and D.\n"
				<<"Please select one:";
			cin >> InputAnser[i];
			InputAnser[i] = toupper(InputAnser[i]);
		}

		if (InputAnser[i] == CorrectAnswer[i])
			scored += 1;
		else
			missed += 1;
		
		cout<< endl;
	
	}
	if (scored >= 15) {
		cout << "You missed " << missed << " and scored " << scored << ".\n";
		cout << "Therefore, With a score of " << scored << "/" << Q_number << ", you have passed the exam.\n\n\n\n";
	}
	else {
		cout << "You missed " << missed << " and scored " << scored << ".\n";
		cout << "With a score of " << scored << "/" << Q_number << ", you have failed the exam.\n\n\n\n";
	}

	return 0;
}