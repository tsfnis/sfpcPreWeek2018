#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetFrameRate(30);
    n = 20;
    o = 20;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(20, 107, 13);
    ofSeedRandom(0);
    
    //how many clover patches do you want
    for(int i = 1; i< 10; i++){
        drawClover( ofRandom(20, ofGetWindowWidth())-100, ofRandom(20, ofGetWindowHeight())-100, ofRandom(20, 30));
    }
    
    //bee that chases the mouse
    n = 0.90 * n + 0.1 * mouseX;
    o = 0.90 * o + 0.1 * mouseY;
    drawBee(n, o);
    
}
//--------------------------------------------------------------
void ofApp::drawClover(int x, int y, int radius){
    
    //big clover
    ofSetColor(85, 204, 77);
    ofDrawCircle(x - radius, y - radius/2, radius);
    ofDrawCircle(x, y + radius, radius);
    ofDrawCircle(x + radius, y - radius/2, radius);
    
    //lil clover friends
    if(radius > 3) {
        drawClover(x+ radius+ ofRandom(30, 50), y+ radius+ ofRandom(0, 40), radius/2);
        drawClover(x- radius- ofRandom(30, 50), y- radius- ofRandom(0, 40), radius/2);
        drawClover(x+ radius+ ofRandom(30, 50), y- radius- ofRandom(0, 40), radius/2);
        drawClover(x- radius- ofRandom(30, 50), y+ radius+ ofRandom(0, 40), radius/2);
    } else {
        //nothing yr done
    }
}
//--------------------------------------------------------------
void ofApp::drawBee(float x, float y){
    
    ofSetColor(242, 209, 23);
    ofDrawCircle(x, y, 25);
    
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
