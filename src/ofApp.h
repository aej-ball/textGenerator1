#pragma once

#include "ofMain.h"
#include "ofxTextSuite.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
    
    void makeWriting();
    
    
    
    vector<string> person, verb, determiner, noun, adverb, preposition, conjunction, pronoun, conjunctiveAdverb;
    string generatedText;
    vector< vector <int>> textStructure;
    vector< vector <string>> textParts;

    ofxTextBlock screenText;
};
