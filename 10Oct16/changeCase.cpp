#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char* argv[])
{
	fstream inputFile, outputFile;
	char ch;
	int count = 0;

	if (argc != 3 ) {
		cout << "USAGE: Please provide 1st arg as input file and 2nd arg as output file\n";
		return 0;
	}
	inputFile.open(argv[1], ios::in);
	outputFile.open(argv[2], ios::out);
	while(!inputFile.eof()){
		ch = inputFile.get();
		if (int(ch) > 64 && int(ch) < 91) {
			ch = (ch+32);
			outputFile.put(ch);
		} else if (int(ch) > 96 && int(ch) < 123) {
			ch = (ch - 32);
			outputFile.put(ch);
		} else {
			outputFile.put(ch);
			count++;
		}
	}
	inputFile.close();
	outputFile.close();
	cout << "Number of non alphabetic char in file " << count << endl;
	return 0;
}
	
	
	
