/*
C++ Files
==============
The fstream library allows us to work with files.

To use the fstream library, include both the standard <iostream> AND the <fstream> header file:

Example
=================
#include <iostream>
#include <fstream>
There are three classes included in the fstream library, which are used to create, write or read files:

Class	Description
=====================
ofstream	Creates and writes to files
ifstream	Reads from files
fstream	    A combination of ofstream and ifstream: creates, reads, and writes to files


CREATE AND WRITE TO A FILE
===============================
To create a file, use either the ofstream or fstream class, and specify the name of the file.

To write to the file, use the insertion operator (<<).
*/

#include <iostream>
#include <fstream>
#include <windows.h>
#include <filesystem>

using namespace std;


int main()
{

    ofstream MyFile("filename.txt");                         //Create FILENAME.txt

    MyFile<<"Here I am writing to my newly created file.\nI want it to be a long story that is more than a single line";    //Write into the FILE

    MyFile.close();                                          //Close the File


/*

Why do we close the file?
==============================
It is considered good practice, and it can clean up unnecessary memory space.
*/


//READING FROM THE FILE JUST WRITTEN

string text_outputer;

ifstream file_reader("filename.txt");

while (getline (file_reader, text_outputer))
{
    cout<<text_outputer<<endl;
}

file_reader.close();

}
