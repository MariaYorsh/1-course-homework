// CONTROL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <io.h>
#include <fstream>
#include <iostream>
#include "TextBinary.h"

using namespace std;

void InitFile(char* fileName);
void CreateFile(char* fileName, int n);
void DisplayFile(char* fileName);

int main()
{
	char fileName[N] = "List.bin";
	CreateFile(fileName, N);

    return 0;
}
void CreateFile(char* fileName, int n)
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

	system("cls");
	for (int i = 1; i <= n; i++)
	{
		//cout << "enter value # " << i << " : ";
		//cin >> temp;
		int temp = n - i;
		streamOut.width(5);
		streamOut << temp;
		//cout << temp << endl;
	}

	streamOut.close();
}

void InitFile(char* fileName)
{
	ofstream streamOut;
	streamOut.open(fileName, ios::binary);
	if (!streamOut.is_open())
	{
		cout << "\nCan't open file to write!";
		SystemFun();
		return;
	}
	int bufSize = sizeof(Integer);
	Integer num;
	char ok = 'y';
	while (ok == 'y')
	{
		num.EnterInteger();
		streamOut.write((char*)&num, bufSize);
		cout << " If do you want to continue, press 'y' :";
		cin >> ok;
	}
	streamOut.close();
}

void DisplayFile(char* fileName)
{
	ifstream streamIn(fileName, ios::binary);
	if (!streamIn.is_open())
	{
		cout << "Can't open file to read!";
		SystemFun();
		return;
	}
	int bufSize = sizeof(Integer);
	Integer*  num = new Integer;
	while (streamIn.read((char*)num, bufSize))
	{
		num->DisplayInteger();
	}
	streamIn.close();
}

void FileProcessing(char* fileName1, char* fileName2, int n, int base)
{
	ifstream StreamIn(fileName1);
	ofstream BinStreamOut(fileName2);
	Integer num;
	char str[N] = "0";
	for (int i = 0; i < n; i++)
	{
		StreamIn >> num;
		Integer.TransformDecimalNumberToAny(n, str, base);
		Integer.DisplayInteger();
		cout << endl;
		BinStreamOut.write((char*)&Integer, sizeof(TransformDecimalNumberToAny));
	}
	StreamIn.close();
	BinStreamOut.close();
}
