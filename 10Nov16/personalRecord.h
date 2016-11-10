#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class personalRecord {
private:
	char* name;
	float salary;
	char* dateOfBirth;
public:
/*	void personalRecord()
	{
		name = "xyz";
		salary = "123456";
		dateOfBirth = "ddmmyyyy";
	}
	void personalRecord(){};
*/
	void getName(char* n)
	{
		name = n;
	}
	void getSalary(char* s)
	{
		salary = std::stof(s);
	}
	void getDOB(char* d)
	{
		dateOfBirth = d;
	}
	
	char* setName()
	{
		return name;
	}
	float setSalary()
	{
		return salary;
	}
	char* setDOB()
	{
		return dateOfBirth;
	}


};	
