// Database_Studentcpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
using namespace std;
#include<conio.h>
#include<stdio.h>
#include <vector>
#include<string>
#include<iterator>

struct student
{
	
	int rollno;
	vector <string> noun1;
	vector <string> noun2;
	vector <string> adjective1;
	vector <string> adjective2;
	vector <string> verb1;
	vector <string> verb2;
	vector <string> adverb;


	//char name[25];
	//char adress[50];
	//char classs[20];
	//int age;
	//long double tel;
	//int marks;
	//char grade[4];
};
int main()
{


	char dow;
	int arr = 0;
	do {

		vector <vector<student>> stud;

		cout << "WELCOME TO POLYSTUDIOS 2018 DATA BASE OF WORDS" << endl;
		cout << " Press 1 Enter new family word \n";
		cout << " Press 2 Delet family word \n";
		cout << " Press 3 Update family word \n";
		cout << " Press 4 Search family word \n";
		cout << " Press 5 Display family words \n";
		cout << "\n \t Select Option::";


		int rolchek = 0;

		int sw;
		cin >> sw;


		switch (sw)
		{

		case 1:


			cout << "\n Enter the Data of the Family World No: " << arr + 1 << " is :\n";

			cout << "\t Enter the Family Word No = ";
			int rol2;
			int rol;


			cin >> rol;

			for (int j = 0; j <= arr; j++)
			{


				rol2 = rol;
				if (rol2 == stud[j][j].rollno)
				{
					rolchek = 1;
				}
			}
			if (rolchek != 1) {
				stud[arr][arr].rollno = rol;


				cout << "\t Enter a Noun of the family Word = " << arr + 1 <<"\n";
				stud.push_back[arr].noun1[arr];

				cout << "\t Enter the second Noun of the family Word = " << arr + 1 << "\n";
				stud.push_back[arr].noun2;

				cout << "\t Enter an adjective of the Family Word =  " << arr + 1 << "\n";
				stud.push_back[arr].adjective1;

				cout << "\t Enter a second adjective of the Family Word =  " << arr + 1 << "\n";
				stud.push_back[arr].adjective2;

				cout << "\t Enter a verb of the Family Word =  " << arr + 1 << "\n";
				stud.push_back[arr].verb1;

				cout << "\t Enter a second verb of the Family Word =  " << arr + 1 << "\n";
				stud.push_back[arr].verb2;

				cout << "\t Enter an adverb of the Family Word =  " << arr + 1 << "\n";
				stud.push_back[arr].adverb;
				arr = arr + 1;
			}
			else
			{
				//this is just because the roll or the number of the Family Word
				cout << "This Family Word Already Entered \n";
			}


			break;

		case 2:

			cout << "\n Enter the Roll of the Family Word to delete ::\n";



			cin >> rol;


			for (int j = 0; j <= arr; j++)
			{


				rol2 = rol;
				if (rol2 == stud[j][j].rollno)
				{


					stud[j][j].rollno = 'd';
					cout << "\t Family Word Exterminated";
				}
			}

			break;

		case 3:
			cout << "\n Enter the Roll No of the Family Word to Update ::\n";



			cin >> rol;


			for (int j = 0; j <= arr; j++)
			{


				rol2 = rol;
				if (rol2 == stud[j][j].rollno)
				{
					cout << "\t Rollno =  ";
					cout << stud[j][j].rollno;
					cout << "\t Noun1 =  ";
					cout << stud[j][j].noun1[j];
					cout << "\t  Noun2 =  ";
					cout << stud[j][j].noun2[j];
					cout << "\t  Adjective1 =  ";
					cout << stud[j][j].adjective1[j];
					cout << "\t Adjective2 = ";
					cout << stud[j][j].adjective2[j];
					cout << "\t  Verb1 =  ";
					cout << stud[j][j].verb1[j];
					cout << "\t Verb2 = ";
					cout << stud[j][j].verb2[j];
					cout << "\t Adverb = ";
					cout << stud[j][j].adverb[j];


					cout << "\n\t Please ReEnter The information of the Family Word";


					cout << "\t Enter a Noun of the family Word = ";
					stud.push_back[j].noun1;

					cout << "\t Enter the second Noun of the family Word = ";
					stud.push_back[j].noun2;

					cout << "\t Enter an adjective of the Family Word =  ";
					stud.push_back[j].adjective1;

					cout << "\t Enter a second adjective of the Family Word =  ";
					stud.push_back[j].adjective2;

					cout << "\t Enter a verb of the Family Word =  ";
					stud.push_back[j].verb1;

					cout << "\t Enter a second verb of the Family Word =  ";
					stud.push_back[j].verb2;

					cout << "\t Enter an adverb of the Family Word =  ";
					stud.push_back[j].adverb;
					
/*
					cout << "\n\t Enter the Name =  ";
					stud.push_back[j].noun1;;

					cout << "\n\t Enter the Adress =  ";
					stud.push_back[j].noun1;;

					cout << "\n\t Enter the Telephone no =  ";
					cin >> stud[j].tel;

					cout << "\n\t Enter the Class = ";
					cin >> stud[j].classs;

					cout << "\n\t Enter the Markes =  ";
					cin >> stud[j].marks;

					cout << "\n\t Enter the Grade = ";
					cin >> stud[j].grade;

					cout << "\n\t Enter the Age = ";
					cin >> stud[j].age;
*/
				}
			}

			break;

		case 4:

			//you cannoy search by string, just by number.
			//fixing to seek by string instead of by Roll id.
			cout << "\n Enter the Roll of the Family Word to Search ::";

			cin >> rol;


			for (int j = 0; j <= arr; j++)
			{


				rol2 = rol;
				if (rol2 == stud[j][j].rollno)
				{


					cout << "\n \t Rollno =  ";
					cout << stud[j][j].rollno;
					cout << "\n \t Noun1 =  ";
					cout << stud[j][j].noun1[j];
					cout << "\n \t  Noun2 =  ";
					cout << stud[j][j].noun2[j];
					cout << "\n \t  Adjective1 ";
					cout << stud[j][j].adjective1[j];
					cout << "\n \t Adjective2 = ";
					cout << stud[j][j].adjective2[j];
					cout << "\n \t  Verb1 =  ";
					cout << stud[j][j].verb1[j];
					cout << "\n \t Verb2 = ";
					cout << stud[j][j].verb2[j];
					cout << "\n \t Adverb = ";
					cout << stud[j][j].adverb[j];

				}
			}

			break;

		case 5:
			cout << "\n____________________________________________________________________________\n";
			for (int i = 0; i < 1; i++)
			{

				cout << "NOUN1 ||";
				cout << " NOUN2  ||";
				cout << " ADJECTIVE1  || ";
				cout << "ADJECTIVE2 ||";
				cout << " VERB1||";
				cout << " VERB2 ||";
				cout << "  ADVERB ||";
				for (int k = 0; k<arr; k++)
				{
					if (stud[k][k].rollno != 'd')
					{


						cout << "\n";
						cout << " ";
						cout << stud[k][k].rollno;
						cout << "    || ";
						cout << stud[k][k].noun1[k];
						cout << " || ";
						cout << stud[k][k].noun2[k];
						cout << "   ||   ";
						cout << stud[k][k].adjective1[k];
						cout << "   ||   ";
						cout << stud[k][k].adjective2[k];
						cout << "  ||   ";
						cout << stud[k][k].verb1[k];
						cout << "    ||  ";
						cout << stud[k][k].verb2[k];
						cout << "    ||  ";
						cout << stud[k][k].adverb[k];

					}




				}
			}
			cout << "\n____________________________________________________________________________";

			break;


		default:
			cout << "\t Worng option Selected ";
			break;

		}




		cout << "\n \n \t Do You want to Continue Again [Y/N]";
		cin >> dow;

	} while (dow == 'y');


	return 0;
	_getch();

}

