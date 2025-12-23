#include<iostream>
using namespace std;

int main(){
	int c = 1;
	char grade;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";

	while(true) {
		cout << "Student [" << c << "]: ";
		cin >> grade;

		if (grade == 'A') {
			count[0]++;
			c++;
		}
		else if (grade == 'B') {
			count[1]++;
			c++;
		}
		else if (grade == 'C') {
			count[2]++;
			c++;
		}
		else if (grade == 'D') {
			count[3]++;
			c++;
		}
		else if (grade == 'F') {
			count[4]++;
			c++;
		}
		else if (grade == '0') {
			break;
		}
		else {
			cout << "Wrong input. Please input again.\n";
		}
	}
	
	
	cout << "In total "<< c - 1 << " students." << "\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	  
	
	return 0;
}
