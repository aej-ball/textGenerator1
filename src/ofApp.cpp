#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    screenText.init("frabk.ttf", 20);
    
    person = {"James", "Margaret", "Sofie", "Thomas", "Christopher", "Lily"};
    verb = {"hit", "stroked", "kissed", "punched", "dragged", "hugged", "stared", "laughed at", "played with", "ate"};
    determiner = {"the", "a", "each", "every"};
    noun = {"dog", "cat", "pig", "house", "car", "bin", "BeeGee", "computer", "spoon"};
    adverb = {"hard", "gently", "firmly", "lustriously", "cringily", "inappropriately", "stupidly", "flawlessly"};
    preposition = {"with", "for", "on", "at", "to"};
    conjunction = {"and", "but", "if", "because", "then"};
    conjunctiveAdverb = {"so", "although", "however"};
    pronoun = {"him", "her", "them", "us", "we", "me", "you"};
    
    textParts.push_back(person); //0
    textParts.push_back(verb); //1
    textParts.push_back(determiner); //2
    textParts.push_back(noun); //3
    textParts.push_back(adverb); //4
    textParts.push_back(preposition); //5
    textParts.push_back(conjunction); //6
    textParts.push_back(conjunctiveAdverb); //7
    textParts.push_back(pronoun); //8
    
    vector<int>sentence1 = {0, 1, 2, 3, 4, 5, 2, 3, 6, 7, 2, 3, 1, 8};
    textStructure.push_back( sentence1);
    
    generatedText = "press space to generate text";
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    screenText.setText( generatedText);
    screenText.draw(10, 20);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case ' ':
            makeWriting();
            break;
            
        default:
            break;
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::makeWriting(){
    string writing;
    vector<int> sentence;
    sentence = textStructure[ ofRandom(textStructure.size())];
    for (int i = 0; i<sentence.size(); i++){
        
        writing += " ";
        int numWords =textParts[ sentence[i] ].size();
        writing += textParts[ sentence[i] ][ ofRandom( numWords)];
    }
    generatedText = writing;
    cout << writing << endl;
    
    
    
    
}
