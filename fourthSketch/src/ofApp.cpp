#include "ofApp.h"

//wanted to make bouncing balls but in a snowglobe
//turns out to be simple using ofDistance from center of globe to point,
//but changing the velocity so they don't bounce in one path is weirder
//--------------------------------------------------------------
void ofApp::setup(){
    
    for (int i = 0; i < 50; i++){
        snowx[i] = ofRandom(ofGetWindowWidth()/2 - 100, ofGetWindowWidth()/2 + 100);
        snowy[i] = ofRandom(ofGetWindowHeight()/2 - 100, ofGetWindowHeight()/2 - 100);
        velx[i] = ofRandom(-5,5);
        vely[i] = ofRandom(-5,5);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    ofSetColor(255, 255, 255);
    ofNoFill();
    ofDrawCircle( ofGetWindowWidth()/2, ofGetWindowHeight()/2, 200);
    ofFill();
    
    for (int i = 0; i < 50; i++){
        
        snowx[i] = snowx[i] + velx[i];
        snowy[i] = snowy[i] + vely[i];
        
        if (ofDist(snowx[i], snowy[i], ofGetWindowWidth()/2, ofGetWindowHeight()/2) > 200){
                velx[i] = velx[i] * -1;
                vely[i] = vely[i] * -1;
        }
        
//        if (snowy[i] > ofGetHeight()/2 + 200 || snowy[i] < ofGetHeight()/2 - 200){
//            vely[i] = vely[i] * -1;
//        }
    }
    
    
    for (int i = 0; i < 50; i++){
        ofDrawCircle(snowx[i],snowy[i],2);
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
