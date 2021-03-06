// Database.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "employee.h"
#include "database.h"

using namespace std;

int menu();
int main()
{
	Database database;
	Employee emp;
	string filename;

	cout <<"***********************WELCOME TO POLYMORPHIC.COM*********************" << endl;
	cout <<"THIS APPLICATION ALLOWS YOU TO CALCULATE THE LABOR COST OF ANY COMPANY" << endl;
	cout << "*********THIS IS THE LIST OF EMPLOYEES OF POLYMORPHIC STUDIOS" << endl;
	cout << "**********************BY Andre Remiers 2020***************************" << endl;

	cout << "PLEASE DIGIT THE NAME OF THE MAIN PROJECT: ";
	cout << endl;

	getline(cin, filename);
	filename + ".txt";
	ifstream fin(filename.c_str());
	if (!fin.fail())
	{
		database.load(fin);
		fin.close();
		int choice = 0;
		while (choice != 8)
		{
			choice = menu();
			switch (choice)
			{
			case 1: {
				cin >> emp;
				database.add(emp);
				break;
			}
			case 2: {
				system("cls");
				string name;
				cout << "ARE YOU LOOKING FOR AN EMPLOYEE, PLEASE DIGIT HIS/HER NAME?: ";
				if (cin.peek() == '\n')cin.ignore();
				getline(cin, name);
				database.search(name);
				break;
			}
			case 3: {
				system("cls");
				int id;
				cout << "ARE YOU LOOKING FOR AN EMPLOYEE, PLEASE DIGIT HIS/HER IDENTIFICATION ?:  ";
				cin >> id;
				database.search_id(id);
				break;
			}
			case 4: {
				system("cls");
				cout << "SEEING ALL THE LABOR COST NAME" << endl;
				database.display_all();
				break;
			}
			case 5: {
				system("cls");
				string name;
				cout << "ARE YOU GOING TO FIRE AN EMPLOYEE, PLEASE DIGIT HIS/HER NAME?:  ";
				if (cin.peek() == '\n')cin.ignore();
				getline(cin, name);
				database.remove(name);
				break;
			}
			case 6: {
				system("cls");
				database.sort_salary();
				cout << "ORGANIZE THE EMPLOYEE LIST BY THEIR SALARIES." << endl;
				database.display_all();
				break;
			}
			case 7: {
				system("cls");
				database.sort_name();
				cout << "ORGANIZE THE EMPLOYEE LIST BY THEIR NAMES." << endl;
				database.display_all();
				break;
			}
			case 8: {
				break;
			}
			default: {
				system("cls");
				cout << "PLEASE DIGIT A VALID KEYWORD!" << endl;
				break;
			}
			}
		}
		ofstream fout(filename.c_str());
		if (!fout.fail())
		{
			database.save(fout);
		}
		else {
			cout << "File could not open!" << endl;
		}
		fout.close();
		cout << "THANK YOU FOR USING POLYMORPHIC.COM. I HOPE YOU COME BACK SOON" << endl;
	}
	else {
		cout << "File does not exist, creating new file!" << endl;
		ofstream new_file(filename.c_str());
		new_file.close();
		main();
	}
	return 0;
}
int menu()
{
	int choice;
	cout << "1. DO YOU WANT TO ADD A NEW EMPLOYEE ?." << endl;
	cout << "2. DO YOU WANT TO SEARCH FOR AN EMPLOYEE BY HIS/HER NAME ?." << endl;
	cout << "3. DO YOU WANT TO SEARCH FOR AN EMPLOYEE BY HIS/HER IDENTIFICATION ?." << endl;
	cout << "4. DO YOU WANT TO SEE THE LABOR COST OF THIS COMPANY ?." << endl;
	cout << "5. DO YOU WANT TO FIRE AN EMPLOYEE ?." << endl;
	cout << "6. DO YOU WANT TO ORGANIZAE THE LIST OF EMPLOYEES BY HIS/HER SALARIES ?" << endl;
	cout << "7. DO YOU WANT TO ORGANIZAE THE LIST OF EMPLOYEES BY HIS/HER IDENTIFICATION ?" << endl;
	cout << "8. DO YOU WANT TO CLOSE THIS PROGRAM ?" << endl;
	cin >> choice;
	return choice;
}

