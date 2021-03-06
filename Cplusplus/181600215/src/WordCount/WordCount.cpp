#include "stdafx.h"
#include<iostream>
#include<fstream>
#include "AnalyzeArguments.h"
#include "CountChar.h"
#include "CountLines.h"
#include "CountWords.h"
#include "WordsFrequency.h"
using namespace std;

extern map<string, int> M;
extern vector < pair<string, int>> ans;

int main(int argc,char **argv)
{
	/*
	argc = 2;
	char a[] = "CaseInsentitive.txt";
	argv[1] = a;
	*/
	int x = AnalyseParameter(argc, argv);
	if (x == -1)
		return -1;
	int characters = CountChar(argv[1]);
	int lines = CountLines(argv[1]);
	int words = CountWords(argv[1]);
	ofstream fout("result.txt");
	fout << "characters: " << characters << endl;
	fout << "words: " << words << endl;
	fout << "lines: " << lines << endl;
	fout.close();
	init();
	WordsFreq(argv[1]);
	TopTenWords(argv[1]);
	return 0;
}

