#include "func.h"
vector<string> inputText() 
{
	cout << "Enter text. To finish press ctrl+q" << endl;
	vector <string> text;
	string textLine;
	int code = 17;
	while (int(textLine[0]) != code) 
	{
		getline(cin, textLine);
		text.push_back(textLine);
	}
	text.pop_back();
	return text;
}
void writeTextFile(vector<string> text, string textFileName)
{
	ofstream textFile(textFileName);
	for (int i = 0; i < text.size(); i++)
	{
		textFile << text[i] << endl;
	}
	textFile.close();
}
vector<string> readTextFile(string textFileName) 
{
	vector<string> text;
	string textLine;
	ifstream textFile(textFileName);
	while (getline(textFile, textLine))
	{
		text.push_back(textLine);
	}
	textFile.close();
	return text;
}
vector<string> changeText(vector<string> text)
{
	vector<string> changedText;
	string changedTextLine = "";
	for (int i = 0; i < text.size(); i++)
	{
		for (int j = 0; j < text[i].length(); j++)
		{
			if (text[i][j] == '1')
			{
				changedTextLine += "0";
			}
			else if (text[i][j] == '0')
			{
				changedTextLine += "1";
			}
			else
			{
				changedTextLine += text[i][j];
			}
		}
		changedText.push_back(changedTextLine);
		changedTextLine = "";
	}
	return changedText;
}
void outputTextFile(string textFileName) 
{
	ifstream textFile(textFileName);
	string textLine;
	while (getline(textFile, textLine))
	{
		cout << textLine << endl;
	}
	textFile.close();
}