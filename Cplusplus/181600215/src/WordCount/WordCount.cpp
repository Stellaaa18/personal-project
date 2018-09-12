#include "stdafx.h"
#include<iostream>
#include<fstream>
#include "AnalyzeArguments.h"
#include "CountChar.h"
#include "CountLines.h"
#include "CountWords.h"
#include "WordsFrequency.h"
using namespace std;

/*
//debug状态下
int main()
{
	for (int i = 0; i < 5000; i++) {
		char s[105] = "input.txt";
		int characters = CountChar(s);
		int lines = CountLines(s);
		int words = CountWords(s);
		cout << "characters: " << characters << endl;
		cout << "words: " << words << endl;
		cout << "lines: " << lines << endl;
		ofstream fout("result.txt");
		fout << "characters: " << characters << endl;
		fout << "words: " << words << endl;
		fout << "lines: " << lines << endl;
		fout.close();
		WordsFrequency(s);
	}

	return 0;
}
*/

int main(int argc,char **argv)
{

	int x = AnalyseParameter(argc, argv);
	if (x == -1)
		return -1;
	int characters = CountChar(argv[1]);
	int lines = CountLines(argv[1]);
	int words = CountWords(argv[1]);
	cout << "characters: " << characters << endl;
	cout << "words: " << words << endl;
	cout << "lines: " << lines << endl;
	ofstream fout("result.txt");
	fout << "characters: " << characters << endl;
	fout << "words: " << words << endl;
	fout << "lines: " << lines << endl;
	fout.close();
	WordsFrequency(argv[1]);

return 0;
}

