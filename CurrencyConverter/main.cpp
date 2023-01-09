#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include "main.h"
#include "main.h"
#include "utility.h"



using namespace std;
using namespace conversions;

//double main::convertt(string curr_From, string curr_To, double amount) {
//	double result = amount * (currency[curr_From] * currency[curr_To]);
//	cout << "From Currency is: " << result << " INsert Currency type\n";
//	return result;
//}


int main() {
	std::cout << std::fixed << std::setprecision(2);
	std::map<int, string> sample_map;
	sample_map.insert(pair<int, string>(1, "one"));
	sample_map.insert(pair<int, string>(2, "two"));

	cout << sample_map[1] << " " << sample_map[2] << endl;

	std::map <string, double> currency;
	currency.insert(pair<string, double>("US Dollar", 1.00));
	currency.insert(pair<string, double>("British Pound", .83));
	currency.insert(pair<string, double>("Peso",  19.14));
	currency.insert(pair<string, double>("Euro", .94));
	currency.insert(pair<string, double>("Riyal", 3.76));

	cout << "US DOllar: " << currency["US Dollar"] << " British Pound " << currency["British Pound"] << endl;





	//menu_utils::MainMenu();
	conversions::printThis();

	printThis();

	/*catch (exception& ex) {
		cout << "Not a number";
		cout << &ex;
	}*/
	string curr_From = "US Dollar";
	string curr_To = "Euro";
	double amount = 10;

	cout << "Enter Amount to convert.\n";
	cin >> amount;

	double result =0;
	//convert(curr_From, curr_To,  amount);
	cout << currency[curr_From] << " " << curr_From << " from\n";
	cout << currency[curr_To] << " " << curr_To << " to\n";
	result = amount * (currency[curr_To] /currency[curr_From] );
	cout << amount << " " << curr_From << " is: " << result << " " << curr_To << " Currency type\n";
	//return result;

	cout << result;

	//cout << "From Currency is: " << result << " INsert Currency type\n";



	return 0;


};



//int main::MainMenu(){
//	int input = 0;
//	string str_in = "";
//
//	while (input != 9) {
//		std::cout << "Enter a Denomination in:\n" <<
//			"1. US. Dollars\n" <<
//			"2. Yen\n" <<
//			"3. Canadian Dollar\n" <<
//			"4. Ruble\n" <<
//			"5. Riyal\n\n" <<
//			"9. Quit\n\n";
//
//		(cin) >> (str_in);
//		input << stoi(str_in);
//
//		//if (!cin.good()) {
//		//	//cout << "invalid option, Pease Try again\n";
//		//	cin.clear();
//		//	input = 5;
//		//	
//		//}
//
//		//else {
//		switch (input) {
//		case 1:
//			cout << "one";
//			return 1;
//		case 2:
//			cout << "Two\n";
//			break;
//		case 3:
//			cout << "one\n";
//			break;
//		case 4:
//			cout << "one]\n";
//			break;
//		case 5:
//			cout << "five\n";
//			break;
//		case 9:
//			cout << "Quitting";
//			exit(input);
//
//		default:
//			cout << "Invalid option, Pease Try again\n";
//			return 0;
//		}
//		//}
//
//	}
//}

//double main::convert(string curr_From, string curr_To, double amount)
//{
//	return 0.0;
//}
