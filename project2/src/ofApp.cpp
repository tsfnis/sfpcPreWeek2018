#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetFrameRate(30);
    n = 20;
    o = 20;
    
    seed = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(20, 107, 13);
    ofSeedRandom(seed);
    
    //how many clover patches do you want
    for(int i = 1; i< 10; i++){
        drawClover( ofRandom(20, ofGetWindowWidth())-100, ofRandom(20, ofGetWindowHeight())-100, ofRandom(20, 30));
    }
    
    //option 1: bee that chases the mouse
    //n = 0.90 * n + 0.1 * mouseX;
    //o = 0.90 * o + 0.1 * mouseY;
    
    //option 2: bee that bounces across window
    if(n >= ofGetWindowWidth()+40){
        n = 0;
    }
    drawBee(n, o);
    n = n + 4;
    o = ofMap(sin(ofGetElapsedTimef()), -1, 1, 500, 60);
    
    
    //generate new clover patches
    if(ofGetMousePressed()) {
        seed = ofGetElapsedTimef();
    }
    
}
//--------------------------------------------------------------
void ofApp::drawClover(int x, int y, int radius){
    
    //big clover
    ofSetColor(85, 204, 77);
    ofDrawCircle(x - radius, y - radius/2, radius);
    ofDrawCircle(x, y + radius, radius);
    ofDrawCircle(x + radius, y - radius/2, radius);
    
    
    // xorig,yorig,radius and angle
    // x = xorig + radius * cos(angle)
    // y = yorig + radius * sin(angle);
    
    
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
    
    //back bee wing
    ofSetColor(0);
    ofNoFill();
    ofDrawCircle(x+8, y-25, 15);
    ofSetColor(255,255,255);
    ofFill();
    ofDrawCircle(x+8, y-25, 15);
    
    //bee body
    ofSetColor(242, 209, 23);
    ofDrawCircle(x, y, 25);
    
    //bee eye, stinger, and stripe (all black)
    ofSetColor(0);
    ofDrawCircle(x+8, y-4, 3);
    
    ofDrawTriangle(x-23, y-8, x-23, y+8, x-50, y);
    
    ofDrawEllipse(x-5, y, 5, 48);
    ofDrawEllipse(x-15, y, 5, 40);
    
    //front bee wing
    ofSetColor(0);
    ofNoFill();
    ofDrawCircle(x-15, y-25, 15);
    ofSetColor(255,255,255);
    ofFill();
    ofDrawCircle(x-15, y-25, 15);
    
  
    

    
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
