#include<iostream>
#include<string.h>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;
struct Student {
	string firstName;
	string lastName;
	char grade;
};

bool compareBygrade(const Student &a, const Student &b) {
	return a.grade < b.grade;
}

int main() {

	ifstream infile("grades.txt");
	if (infile.is_open()) {
		vector<Student> students;
		string fn;
		string ln;
		char grade;
		while (infile >> fn >> ln >> grade) {
			Student st;
			st.firstName = fn;
			st.lastName = ln;
			st.grade = grade;
			students.push_back(st);
		}
		// sorts the vector.

		sort(students.begin(), students.end(), compareBygrade);

		for (int i = 0; i < students.size(); i++) {
			cout << students[i].firstName << " ";
			cout << students[i].lastName << " ";
			cout << students[i].grade << " ";
			cout << endl;
		}
	}
	else {
		cout << "unable to read the file" << endl;
	}
}