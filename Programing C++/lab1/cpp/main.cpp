#include "func.h"
int main() 
{
	vector<string> text;
	vector<string> firstText;
	vector<string> changedText;
	text = inputText();
	writeTextFile(text, "first.txt");
	firstText = readTextFile("first.txt");
	changedText = changeText(firstText);
	writeTextFile(changedText, "last.txt");
	cout << "Your text :" << endl;
	outputTextFile("first.txt");
	cout << "Changed text:" << endl;;
	outputTextFile("last.txt");
	return 0;
}