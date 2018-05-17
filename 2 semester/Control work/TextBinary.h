#pragma once

const int M = 20;
const int N = 50;

class Integer
{
public:
	Integer() {}
	Integer(char* num);
	~Integer() {}
	void SetIntegerNumbers(int*, char, int);
	void SetInteger(int *);
	void SetBase(int);
	void DisplayInteger();
	void EnterInteger();
private:
	char *  TransformDecimalNumberToAny(int value, char * str, int base);
	int integerNum[M]{};
	int base;
	char str[N]{};
};
