#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
vector<string> inputText();
void writeTextFile(vector<string> text, string textFileName);
vector<string> readTextFile(string textFileName);
vector<string> changeText(vector<string> text);
void outputTextFile(string textFileName);