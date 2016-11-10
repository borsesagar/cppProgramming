#include "personalRecord.h"

int main(int argc, char*argv[])
{
	int numOfRecords;
	char* getVal;
	fstream out;
	out.open("record", ios::out);
	
	if (argc != 2) {
		cout << "Please provide number of records to be maintained as arg \n";
		return 0;
	}
	numOfRecords = atoi(argv[1]);
	for (int i=0; i<numOfRecords; i++) {
		personalRecord obj[i];

		cout << "Enter name of the Employee\n";
		cin >> getVal;
		obj[i].getName(getVal);
		out << "Name: ";
		out << obj[i].setName();

		cout << "Enter salary\n";
		cin >> getVal;
		obj[i].getSalary(getVal);
		out << "\tSalary: ";
		out << obj[i].setSalary();

		cout << "Enter DOB in DDMMYYYY\n";
		cin >> getVal;
		obj[i].getDOB(getVal);
		out << "\tDOB: ";
		out << obj[i].setDOB();
		out << "\n";
	}
	out.close();
	return 0;
}
	
