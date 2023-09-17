// reverseSentence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string sentence;

    cout << "Enter a sentence:" << endl;
    getline(cin, sentence);

    int totalChar = sentence.length(); // finds total amount of characters from input
    int characters = 0;
    int wordCounter = 0;
    int i = 0;
    string words[500];

    while (characters < totalChar) {

        int spaces = sentence.find(' '); // finds the position of the first space
        string word;
       
        if (spaces != string::npos) // checks if there are still spaces
        {
            word = sentence.substr(0, spaces);
            wordCounter++; // increments word count
            characters += spaces; // adds word length to total characters

            words[i] = word; // stores the word in the array
            i++; // increment for next word to be put into next array value

            sentence.erase(0, spaces + 1); // erases the word from the sentence
        }

        else 
        {
            words[i] = sentence; // last word equals whats left in the input buffer
            break; // breaks out of the loop
        }
    }

    cout << "\nThe reversed sentence: " << endl;;
       
        for (i = 0; i <= wordCounter; i++) { // reverses the sentence
            cout << words[wordCounter - i] << " "; 
        }

    cout << endl << endl;

    system("PAUSE");

}
