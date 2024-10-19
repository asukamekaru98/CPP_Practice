#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <string>

using namespace std;

const char* Open(ifstream& file, const char* filename)
{
	file.open(filename);
	return file.is_open() ? NULL : "File not found";
}

const char* GetLine(ifstream& file,string& line)
{
	getline(file, line);
	return file.fail() ? "ÉtÉ@ÉCÉãÇ©ÇÁì«Ç›çûÇﬂÇ‹ÇπÇÒÇ≈ÇµÇΩ" : NULL;
}

int main()
{
	const char* error = NULL;

	ifstream file;
	string line;

	error = Open(file, "test.txt");
	if (error != NULL)
	{
		goto ON_ERROR;
	}

	error = GetLine(file, line);
	if (error != NULL) {
		goto ON_ERROR;
	}

	cout << line << endl;

	return EXIT_SUCCESS;

ON_ERROR:
	cout << error << endl;
	return EXIT_FAILURE;
}