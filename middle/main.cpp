#include <iostream>
#include <vector>
#include <iomanip>

#include "functions.h"

using namespace std;

int main(void)
{
	int n;
	cout << "Enter number of students: ";
	cin >> n;
	cout << endl;

	vector<Student> students;

	for (int i = 0; i < n; i++) {
		Student s;

		cout << "== Student " << i + 1 << " ==" << endl;
		cout << "Enter name: ";
		cin >> s.name;

		cout << "Enter 3 scores: ";
		int score;
		for (int j = 0; j < 3; j++) {
			cin >> score;
			s.scores.push_back(score);
		}
		students.push_back(s);

		cout << endl;
	}

	cout << "--- Grade Summary ---\n";
	for (int i = 0; i < students.size(); i++) {
		double average = calculateAverage(students[i].scores);

		cout << students[i].name << ": " << average;

		if (average >= 90) {
			cout << " Excellent!!";
		}
		cout << endl;
	}
	return 0;
}
