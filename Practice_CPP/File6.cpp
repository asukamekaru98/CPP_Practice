#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;

const int PAGE_WIDTH = 16;
const int PAGE_HEIGHT = 16;
const int PAGE_SIZE = PAGE_WIDTH * PAGE_HEIGHT;

class DumpFile {
public:
	bool Run();

private:
	bool Open();
	void Close();
	void Dump();
	bool Control();

private:
	fstream m_file;
	int m_page;
};

int main() {
	DumpFile dump;

	if (!dump.Run()) {
		return EXIT_FAILURE;
	}
}

bool DumpFile :: Run() {
	if (!Open()) {
		return false;
	}

	do {
		Dump();
	} while (Control());

	Close();
}

bool DumpFile::Open() {
	string filename;

	cout << "�t�@�C���� > " << flush;
	getline(cin, filename);

	m_file.open(filename.c_str(), ios::in, ios::binary);
	m_page = 0;

	return m_file.is_open();
}

void DumpFile::Close() {
	m_file.close();
}

void DumpFile::Dump() {
	cout << endl;

	m_file.clear();
	m_file.seekg(m_page * PAGE_SIZE);

	for (int h = 0; h < PAGE_HEIGHT; ++h) {
		unsigned char buf[PAGE_WIDTH];

		m_file.read((char*)buf, sizeof buf);

		for (int w = 0, size = m_file.gcount(); w < size; ++w)
		{
			printf("%02X ", buf[w]);
		}
		cout << endl;
	}
}

bool DumpFile::Control() {
	while (true) {
		string command;

		cout << "�R�}���h? (n:��/p:�O/q:�I��) > " << flush;
		getline(cin, command);

		if (command == "n") {
			if (!m_file.eof()) {
				++m_page;
				return true;

			}
			else {

			}
		}
		else if (command == "p") {
			if (m_page > 0) {
				--m_page;
				return true;

			}
			else {

			}
		}
		else {
			return false;
		}
	}
}