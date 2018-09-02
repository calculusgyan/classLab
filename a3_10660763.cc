#include <iostream>
using namespace std;

int main(){

	string gradeScore;
	float studentScore;

	cout << "\n A program to determine the grade of a student score." << endl << endl;
	cout << "\n Enter student score: ";
	cin >> studentScore;

   	if(studentScore <= 100 && studentScore > 80)
		gradeScore = "A";

	else if(studentScore <= 79 && studentScore > 74)
		gradeScore = "B+";

	else if(studentScore <= 74 && studentScore > 70)
		gradeScore = "B";

	else if(studentScore <= 69 && studentScore > 65)
		gradeScore = "C+";

	else if(studentScore <= 64 && studentScore > 60)
		gradeScore = "C";

	else if(studentScore <= 59 && studentScore > 55)
		gradeScore = "D+";

	else if(studentScore <= 54 && studentScore > 50)
		gradeScore = "D";

	else if(studentScore <= 49 && studentScore > 45)
		gradeScore = "E";

	else
		gradeScore = "F";


	cout << "\n The grade for student score is: " << gradeScore << endl << endl;

	return 0;
}

