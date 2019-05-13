#include<iostream>
#include<string.h>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

void calc(ifstream&, ofstream&);
int main()
{
	ifstream in;
	ofstream out;

	in.open("grades.txt");

	if (in.fail())
	{
		cout << "Input file failed. Please try again or use another file./n";
		system("pause");
		return 1;
	}

	out.open("output.txt");
	calc(in, out);
	out.close();
	in.close();

	system("pause");
	return 0;
}

void calc(ifstream& in, ofstream& out)

{
	int i, sum, a[10];
	string first, last;
	double average;
	in >> first;
	while (in)

	{
		sum = 0;
		in >> last;
		for (i = 0; i < 10; i++)
		{
			in >> a[i];
			sum += a[i];
		}

		out << first << " " << last << " ";
		for (i = 0; i < 10; i++)
			out << a[i] << " ";
		average = sum / 10.;
		out << average << endl;
		in >> first;
	}
}