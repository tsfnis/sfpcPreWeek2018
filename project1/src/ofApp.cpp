#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetFrameRate(10);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    //variables for drawing a square E
    //float x = 10;
    //float y = 0;
    float width = 50;
    float height = 80;
    
    for(int x = 10; x<1000; x+=width+10) {
        for(int y = 0; y<1000; y+=height+10) {
            //draw E
            ofSetLineWidth(3);
            ofSetColor(0, ofRandom(255), 0);
            ofDrawLine(x, y, x+width, y);
            ofDrawLine(x, y+height/2, x+width, y+height/2);
            ofDrawLine(x, y+height, x+width, y+height);
            ofDrawLine(x, y, x, y+height);
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
