//
//  main.cpp
//  WordSplicer
//
//  Created by Dylan Schroder on 12/29/15.
//  Copyright © 2015 Dylan Schroder. All rights reserved.
//

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
    cin>>numOfWord;
    for(int i=0; i<numOfWord;i++){
        cout<<"Input a word: ";
        cin>>word;
        cout<<endl;
        words.push_back(word);
    }
    for(int i=0; i<numOfWord;i++){
        finalWord+=split(words.at(i), i);
    }
    cout<<finalWord<<endl;
    
    return 0;
}
string split(string word,int pos){
    
    size_t wordSize=word.length();
    size_t spot=(pos*wordSize)/numOfWord;
    if(pos==0){
        word=word.substr(0, wordSize/numOfWord);
    }else{
            word=word.substr(spot, wordSize);
    }
    return word;
}


bool isVowel(){
    
    return false;
}
