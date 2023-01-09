#pragma once
#include <iostream>
#include <string>
#include <map>

using namespace std;

namespace menu_utils {


	int MainMenu() {
		int input = 0;
		string str_in = "";

		while (input != 9) {
			std::cout << "Enter a Denomination in:\n" <<
				"1. US. Dollars\n" <<
				"2. Yen\n" <<
				"3. Canadian Dollar\n" <<
				"4. Ruble\n" <<
				"5. Riyal\n\n" <<
				"9. Quit\n\n";

			(cin) >> input;

			//if (!cin.good()) {
			//	//cout << "invalid option, Pease Try again\n";
			//	cin.clear();
			//	input = 5;
			//	
			//}

			//else {
			if (!cin) {
				MainMenu();
			}

			switch (input) {
			case 1:
				cout << "one";
				return 1;
			case 2:
				cout << "Two\n";
				return 2;
			case 3:
				cout << "one\n";
				return 3;
			case 4:
				cout << "one]\n";
				return 4;
			case 5:
				cout << "five\n";
				return 5;
			case 9:
				cout << "Quitting";
				exit(input);

			default:
				cout << "Invalid option, Pease Try again\n";
				MainMenu();
			}
			//}

		}
		return -1;
	}
};

namespace conversions {
	void printThis() {
		std::cout << "-------------------------------------------------------------------\n";
		std::cout << "-------------------------------------------------------------------\n";
		std::cout << "-------------------------------------------------------------------\n";
		std::cout << "Print conversion\n";
		std::cout << "-------------------------------------------------------------------\n";
	}



};

namespace map {
	


};