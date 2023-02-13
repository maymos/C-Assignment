#include <iostream>
#include <fstream>
#include <windows.h>
#include <filesystem>

using namespace std;


int main()
{

string text_outputer;

ifstream file_reader("study.txt");

while (getline (file_reader, text_outputer))
{
    cout<<text_outputer<<endl;
}

file_reader.close();

}

