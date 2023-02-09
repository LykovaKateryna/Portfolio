#include "pch.h"
#include "func.h"
void writeTextFile(string text)
{
	ofstream textFile("Result");
	textFile << text << endl;
	textFile.close();
}