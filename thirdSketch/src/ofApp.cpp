#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    ofSetColor(0, 0, 255);
    
    for(int i = 0; i < 20; i++){
       radius[i] = ofMap(sin(ofGetElapsedTimef()), -1, 1, 1, 10);
        cout << radius[i] << endl;
    }
    
    
    
    for(int x = 10; x<1000; x+=25) {
        for(int y = 0; y<1000; y+=25) {
            for(int i = 0; i < 20; i++){
                if(x % 4 == 0 || y % 9 == 0) {
                    //skip that circle
                } else {
                    ofDrawCircle(x, y, radius[i]);
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
