// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/12/19
// gets the user input for a sentence then separates
// each word by a newline

#include <array>
#include <iostream>
#include <list>
#include <sstream>
#include <string>

std::string StringParser(std::string sentence) {
    // local variables
    std::string wordsWithNL = "";

    // Used to split string around spaces.
    // Code by Geeks For Geeks
    std::istringstream ss(sentence);

    std::string word;  // for storing each word

    // Traverse through all words
    // while loop till we get
    // strings to store in string word
    while (ss >> word) {
        // print the read word
        wordsWithNL = wordsWithNL + word + "\n";
    }
    return wordsWithNL;
}
    int main() {
        // Variables
    std::string userSentence, userSentenceString, sentence;
    std::string newLine, separateWord;

    // Title
    std::cout << "String Parser!\n";

    // User input for the sentence
    std::cout << "Enter your sentence: ";
    std::getline(std::cin, userSentenceString);

    // TRY CATCH to make sure the sentence is a string
    try {
        userSentence = stoi(userSentenceString);
        std::cout << "Please enter a string!\n";
        } catch (std::invalid_argument) {
            // Calling and displaying the parsing function
            userSentence = StringParser(userSentenceString);
            std::cout << "The separated words in your sentence are: \n";
            std::cout << userSentence << "\n";
        }
}
