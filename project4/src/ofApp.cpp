#include "ofApp.h"

//popcorn eater
//based on "bouncing ball" demo basically
//--------------------------------------------------------------
void ofApp::setup(){
    
    myfont.load("pacifico", 34);
    ate = 0;
    
    for(int i = 0; i < 20; i++){
        pops[i].setup();
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i = 0; i < 20; i++){
        pops[i].update(mouseX, mouseY);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(237, 249, 249);
    
    for(int i = 0; i < 20; i++){
            pops[i].draw();
        if(pops[i].still) {
            ate++;
        }
    }
    
    //popcorn case
    ofSetColor(186, 47, 31);
    ofDrawRectangle(0, ofGetHeight()-90, ofGetWindowWidth(), 90);
    ofDrawRectangle( 0, 0, 5, ofGetWindowHeight());
    ofDrawRectangle(0, 0, ofGetWindowWidth(), 5);
    ofDrawRectangle(ofGetWindowWidth()-5, 0, 5, ofGetWindowHeight());
    
    ofSetColor(255);
    myfont.drawString("Popcorn eaten: "+ ofToString(ate), 30, ofGetWindowHeight()-35);
    
    //popcorn catcher
    ofSetColor(0, 0, 0);
    ofNoFill();
    ofDrawCircle(mouseX, mouseY, 50);
    ofFill();
    
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
