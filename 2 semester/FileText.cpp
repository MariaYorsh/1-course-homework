// FileText.cpp : Defines the entry point for the console application.
//

// 12.04.2018.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include <string.h>
//#include <stdlib>
//#include <process>

using namespace std;

void CreateFile(char* fileName, char * source, int n);
int ContentsFile(char*);
void AddFile(char*, char** words, int); 
char ** ObtainWords(char * source, int& n);

int main()
{
     int n = 256;
	 const int N = 256;
	char fileName[N] = "";
	char  source[] = "A user-defined function groups code to perform a specific task and that group of code is given a name(identifier).When the function is invoked from any part of program.";
	char ** words = ObtainWords(source, n);

		//cin.getline(fileName, n, '\n');
	CreateFile(fileName, source, n);
	int count = ContentsFile(fileName);
	AddFile(fileName, words, count);


	system("pause");
	return 0;
}

void CreateFile(char* fileName, char * source, int n)
{
	ofstream streamOut(fileName);
	//ofstream streamOut;
	//streamOut.open(fileName, ios::out);

	if (!streamOut.is_open())
	{
		cout << "Cannot open file to write!" << endl;
		system("pause");
		exit(1);
	}


	for (int i = 1; i < n; i++)
	{
		//cout << "enter value # " << i << " : ";
		//cin >> temp;
		streamOut.width(5);
		streamOut << source[i];
		//cout << temp << endl;
	}

	streamOut.close();
}

int ContentsFile(char* fileName)
{
	ifstream streamIn(fileName);

	if (!streamIn.is_open())
	{
		cout << "Cannot open file to read!" << endl;
		system("pause");
		exit(1);
	}

	int count = 0, term;

	while (!streamIn.eof())
	{
		streamIn >> term;
		count++;
	}
	streamIn.close();
	return count;
}


void AddFile(char* fileName, char ** words, int n)
{
	ofstream streamOut(fileName, ios::app);

	if (!streamOut.is_open())
	{
		cout << "\nCannot open file to addition!\n";
		system("pause");
		exit(1);
	}
	streamOut << "\n Words:\n";
	for (int i = 0; i < n; i++)
	{
		streamOut << (i+1) << "." << words[i];
	}
	streamOut.close();
}

 char ** ObtainWords(char * source, int& n)
{
	char * copy = new char[strlen(source) + 1];
	strcpy(copy, source);

	char ** words = new char *[strlen(copy) / 2];
	n = 0;
	const char * symbols = "   1234567890_=+!?.,@#$%^&~`'*()[]{}:;\x22";
	char * pword = strtok(copy, symbols);

	words[n] = new char[strlen(pword) + 1];
	strcpy(words[n], pword);
	n++;

	while (pword)
	{
		pword = strtok('\0', symbols);
		if (pword)
		{
			words[n] = new char[strlen(pword) + 1];
			strcpy(words[n], pword);
			n++;
		}
	}
	delete[] copy;
	return words;
}

