#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<string> read_file() {
	vector<string> out;
	ifstream file;
	file.open ("./mystery_fragments.txt");
	
	string line;
	while (getline(file, line)) {
		out.push_back(line);
	}
	
	file.close();
	return out;
}

int print_help(int count, vector<string> lines) {
	
	count += 1;
	
	if (count == 4) {
		count = 0;
		cout << "YOU WANT TOO MUCH HELP!!!\n\n";
	} else {
		int index = rand() % lines.size();
		cout << lines[index] << "\n\n";
	}
	
	return count;
}

int main(int argc, char** argv) {
	srand(time(NULL));
	
	vector<string> lines = read_file();
	int count = 0;
	char ch;
	
	cout << "Enter 'M' to get help, or 'Q' to quit:\n";
	cin.get(ch);
	
	while (true) {
		if (ch != '\0') {
			if (ch == 'M' || ch == 'm') {
				count = print_help(count, lines);
				cout << "Enter 'M' to get help, or 'Q' to quit:\n";
			} else if (ch == 'Q' || ch == 'q') {
				break;
			}
			
			cin.get(ch);
		}
	} 
	
	return 0;
}
