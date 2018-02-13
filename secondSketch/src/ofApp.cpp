#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(200);
    
    float time = ofGetElapsedTimef();
    float sinTime = sin(time);
    
    float size = ofMap(mouseX, 0, ofGetWindowWidth(), 5, 25);
    
    ofDrawCircle(80, ofMap(sinTime, -1, 1, 500, 100), size * .8 );
    
    time = ofGetElapsedTimef() + .7;
    sinTime = sin(time);
    
    ofDrawCircle(180, ofMap(sinTime, -1, 1, 500, 100), size * 1.8 );
    
    time = ofGetElapsedTimef() + .2;
    float cosTime = cos(time);
    
    ofDrawCircle(230, ofMap(cosTime, -1, 1, 500, 100) , size * .4);
    
    time = ofGetElapsedTimef() + .5;
    sinTime = sin(time);
    
    ofDrawCircle(280, ofMap(sinTime, -1, 1, 500, 100) , size );
    
    time = ofGetElapsedTimef() + .1;
    cosTime = cos(time);
    
    ofDrawCircle(350, ofMap(cosTime, -1, 1, 500, 100) , size * 1.4);
    
    
    
    

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
