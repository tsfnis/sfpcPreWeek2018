
#include "ofMain.h"
#include "popcorn.h"


//--------------------------------------------------------------
void popcorn::setup(){
    
    x = ofRandom( 10, 900);
    y = ofRandom( 10, 900);
    
    velx = ofRandom(-5,5);
    vely = ofRandom(-5,5);
    
    still = false;
    
}

//--------------------------------------------------------------
void popcorn::update(float mx, float my){
    
    if(ofDist(x, y, mx, my) < 50) {
        still = true;
    } else if (x > ofGetWindowWidth() || x < 0){
        velx = velx * -1;
        x += velx;
        y += vely;
        still = false;
    } else if (y > ofGetWindowHeight() || y < 0){
        vely = vely * -1;
        x += velx;
        y += vely;
        still = false;
    } else {
        x += velx;
        y += vely;
        still = false;
    }
}

//--------------------------------------------------------------
void popcorn::draw(){
    
        ofSetColor(242, 220, 109);
        ofDrawCircle(x, y, 11);
        ofDrawCircle(x-13, y-10, 10);
        ofDrawCircle(x+8, y-10, 10);
        ofDrawCircle(x, y+10, 10);
   
    
}
