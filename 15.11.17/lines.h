#pragma once
#include <iostream>

using namespace std;

int getLength(char array[]);
void toUpper(char array[]);
bool isAlphabet(char ch);

int getLength(char array[])
{
	int i = 0;
	while (array[i])
	{
		i++;
	}
	return i;
}

void toUpper(char array[])
{
	int diff = 'a' - 'A';
	int l = getLength(array);
	for (int i = 0; i < l; i++)
	{
		char ch = array[i];
		if (ch >= 'a' && ch <= 'z')
		{
			array[i] = ch - diff;
		}
	}
}

bool isAlphabet(char ch)
{
	return (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z');
}

