#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetVerticalSync(true);
    ofBackground(255);
	
	device.listDevices();
	vector <ofSerialDeviceInfo> deviceList = device.getDeviceList();
	int baud = 9600;
	device.setup(0, baud); //open the first device
	//device.setup("COM4", baud); // windows example
	//device.setup("/dev/tty.usbserial-A4001JEC", baud); // mac osx example

    ptr = 0;
    terminateChar = 'A';
}


//--------------------------------------------------------------
void testApp::update(){

    if(device.available()){
        readVal = device.readByte();
        if ( readVal == OF_SERIAL_NO_DATA ){
            printf("no data was read");
        } else if ( readVal == OF_SERIAL_ERROR ){
            printf("an error occurred");
        } else if (readVal == terminateChar){
            finalStr = ofToString(buffs);
            ptr = 0;
        } else {
            buffs[ptr] = readVal;
            ptr++;
        }
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(0);
	string receiveMsg;
	receiveMsg = "Receive: " + finalStr + "\n";
    ofDrawBitmapString(receiveMsg, 50, 100);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
}


