#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    for(int i = 0; i < 20; i++){
        blues[i] = (ofRandom(10,255));
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    //ofSetColor(0, 0, 255);
    
    //three flavors of radius cycling
    float rad1 = ofMap(sin(ofGetElapsedTimef()), -1, 1, 1, 10);
    float rad2 = ofMap(cos(ofGetElapsedTimef()), -1, 1, 1, 10);
    float rad3 = ofMap(-sin(ofGetElapsedTimef()), -1, 1, 1, 10);
    
    //counter for the blues :/
    int i = 0;
    
    for(int x = 10; x<1000; x+=25) {
        
        for(int y = 0; y<1000; y+=25) {
            
                if(x % 4 == 0 || y % 9 == 0) {
                    //skip that circle
                } else {
                    ofSetColor(0, 0, blues[i]);
                    if(x%3 == 0) {
                    ofDrawCircle(x, y, rad3);
                    } else if ( y%3 == 0) {
                    ofDrawCircle(x, y, rad2);
                    } else {
                    ofDrawCircle(x, y, rad1);
                    }
                    if(i > 20) {
                        i = 0;
                    } else {
                        i++;
                    }
                    
                }
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
