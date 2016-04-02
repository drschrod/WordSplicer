//
//  wordSplicer.cpp
//  WordSplicer
//
//  Created by Dylan Schroder on 12/29/15.
//  Copyright © 2015 Dylan Schroder. All rights reserved.
//  Description: Just a fun little bit of code that reads in N number of words and splices them together

#include <iostream>
#include <String>
#include <iostream>
#include <vector>
//#include <cstdlib>
#include <curl/curl.h>

using namespace std;
string split(string word,int pos);
int numOfWord;
string word;
vector<string> words;


int main(int argc, const char * argv[]) {
    //curl_global_init( CURL_GLOBAL_ALL );
    string finalWord;
    cout<<"Input the number of words you want to splice: ";
    cin>>numOfWord;             // gets the number of words to read in
    for(int i=0; i<numOfWord;i++){
        cout<<"Input a word: ";
        cin>>word;//temporarily stores the current word in word
        cout<<endl;
        words.push_back(word);//stores the word in a vector words
    }
    for(int i=0; i<numOfWord;i++){
        finalWord+=split(words.at(i), i);//call split() func in the finalword construction
    }
    cout<<finalWord<<endl;
    
    return 0;
}
//Split function returns parts of the word such that when the whole code finishes splicing, the word is somewhat pronouncable 
string split(string word,int pos){
    
    size_t wordSize=word.length();  //get length of the word to be split
    size_t spot=(pos*wordSize)/numOfWord;   //spot is the position value that we want to start at in the word
    if(pos==0){
        word=word.substr(0, wordSize/numOfWord);    //if the word is the first word in the vector above then we want the first half of that word not the second half
    }else{                                          //otherwise we want to start at spot position that was calculated above
            word=word.substr(spot, wordSize);
    }
    return word;
}

//this function is not complete but is meant to check if the split word starts with a vowel or not allowing for a more pronounceable word in the end
bool isVowel(){
    
    return false;
}
