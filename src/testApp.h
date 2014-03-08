#pragma once

#include "ofMain.h"

class testApp : public ofBaseApp{
	
    public:
        void setup();
        void update();
        void draw();
        void keyPressed  (int key);
        void mousePressed(int x, int y, int button);
        
        ofSerial	device;

        int readVal;
        unsigned char buffs[10];
        int ptr;
        unsigned char terminateChar;
        string finalStr;
};
