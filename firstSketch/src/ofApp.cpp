#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(230, 255, 230);
    ofSetColor(100, 0, 0);
    
    /*
    //drawing "syd"
    //the S
    ofDrawCircle(180, 50, 5);
    ofDrawCircle(100, 80, 5);
    ofDrawCircle(180, 140, 5);
    ofDrawCircle(100, 180, 5);
    ofDrawLine(180, 50, 100, 80);
    ofDrawLine(100, 80, 180, 140);
    ofDrawLine(180, 140, 100, 180);
    
    ofSetColor(0, 100, 0);
    //the Y
    ofDrawCircle(230, 50, 5);
    ofDrawCircle(280, 100, 5);
    ofDrawCircle(330, 50, 5);
    ofDrawCircle(280, 180, 5);
    ofDrawLine(230, 50, 280, 100);
    ofDrawLine(280, 100, 330, 50);
    ofDrawLine(280, 100, 280, 180);
    
    ofSetColor(0, 0, 100);
    //the D
    ofDrawCircle(350, 50, 5);
    ofDrawCircle(420,100, 5);
    ofDrawCircle(420, 160, 5);
    ofDrawCircle(350, 180, 5);
    ofDrawLine(350, 50, 420, 100);
    ofDrawLine(420, 100, 420, 160);
    ofDrawLine(420, 160, 350, 180);
    ofDrawLine(350, 180, 350, 50);
    */
    
    ofSetLineWidth(8);
    /* manually drawing E
    //drawing an 'E'
    ofDrawLine(50, 50, 100, 50);
    ofDrawLine(50, 80, 90, 80);
    ofDrawLine(50, 130, 100, 130);
    ofDrawLine(50, 50, 50, 130);
    
    //drawing one next to it
    ofTranslate(100, 0);
    ofDrawLine(50, 50, 100, 50);
    ofDrawLine(50, 80, 90, 80);
    ofDrawLine(50, 130, 100, 130);
    ofDrawLine(50, 50, 50, 130);
    */
    
    //drawing E with variables
    float x = 50;
    float y = 50;
    float width = 50;
    float height = 80;
    
    ofDrawLine(x, y, x+width, y);
    ofDrawLine(x, y+height/2, x+width, y+height/2);
    ofDrawLine(x, y+height, x+width, y+height);
    ofDrawLine(x, y, x, y+height);
    
    //scaling it up
    x = x*2 + 10;
    y = y*2 + 10;
    width = width*2;
    height = height*2;
    
    ofDrawLine(x, y, x+width, y);
    ofDrawLine(x, y+height/2, x+width, y+height/2);
    ofDrawLine(x, y+height, x+width, y+height);
    ofDrawLine(x, y, x, y+height);
    
    //again! and with the mouse
    x = x*2 + 10;
    y = y*2 + 10;
    width = mouseX;
    height = mouseY;
    
    ofDrawLine(x, y, x+width, y);
    ofDrawLine(x, y+height/2, x+width, y+height/2);
    ofDrawLine(x, y+height, x+width, y+height);
    ofDrawLine(x, y, x, y+height);
    
    //one that follows the mouse
    ofSetColor(0, ofRandom(255), 0);
    x = mouseX;
    y = mouseY;
    width = 50;
    height = 80;
    
    ofDrawLine(x, y, x+width, y);
    ofDrawLine(x, y+height/2, x+width, y+height/2);
    ofDrawLine(x, y+height, x+width, y+height);
    ofDrawLine(x, y, x, y+height);
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

    //cout << x << " " << y << " ";
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
