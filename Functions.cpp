//Functions
//Justin Rawlings
//11/2/2018
//CSC215


#include "pch.h"
#include <string>
#include <iostream>

using namespace std;

string getTextFromUser(string prompt); //Gets a string of text from user.
int getNumbersFromUser(string prompt); //Gets a number from user.
void tellStory(string name, string noun, int number, string element); //Tells user a story based on input.

string getTextFromUser(string prompt) //Function to get user input.
{
	string text;
	cout << prompt;
	cin >> text;
	return text;
}

int getNumbersFromUser(string prompt) //Function to get user input.
{
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

void tellStory(string name, string noun, int number, string element) //The story building part of the program.
{
	cout << "\nI have a story for you:\n";
	cout << "A great human ";
	cout << name;
	cout << " was in search of a mythical element.";
	cout << "In the land of ";
	cout << noun;
	cout << " in search of the mythical ";
	cout << element;
	cout << " when they found it.\n";
	cout << "After ";
	cout << number;
	cout << " of days, ";
	cout << name;
	cout << " found the ";
	cout << element;
	cout << " in a deep crevice.";
	cout << name;
	cout << " was pumped to find this item and went home to show it off to everyone.";
}

int main() //Main program.
{
	cout << "Welcome to a test of functions in C++. \n\n";
	cout << "Enter the text and numbers asked. \n";

	string name = getTextFromUser("Please tell my your name: "); //User Name.
	string noun = getTextFromUser("Please enter a city name: "); //City name.
	int number = getNumbersFromUser("Enter a number: "); //Number for the story.
	string element = getTextFromUser("Enter an element from the 5 elements of myth:"); //Elements from the 5 elements. (Water, Earth, Air, Fire, and Metal.)

	tellStory(name, noun, number, element); //Initiates the tellStory function.

	return 0;
}