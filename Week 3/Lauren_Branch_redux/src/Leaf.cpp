//
//  Leaf.cpp
//  Lauren_Branch_redux
//
//  Created by Shaun & Lauren on 9/22/15.
//
//

#include "Leaf.h"

void Leaf::setup() {
    
    xPos = (ofGetWidth()/2);
    yPos = (ofGetHeight()/2);
    
    stemColor = ofColor(ofRandom(100,150), 60, 19); //basically brown
    leafColor = ofColor(ofRandom(0, 20), ofRandom(100,200), ofRandom(0,200)); //random green
    scaleFactor = ofRandom(.5, 1.0);
    ofSetRectMode(OF_RECTMODE_CENTER);
    stemLength = ofRandom(50, 100);
    stemWidth = ofRandom(2, 4);
    leafLength = ofRandom(150,300);
    leafWidth = ofRandom(80,200);
    leafCurvature = ofRandom(1, 5);
    rotation = ofRandom(0, 360);
    
    
}

void Leaf::update(){
    
    
}

void Leaf::draw(float _xPos, float _yPos){
    
    ofPushMatrix();
    ofTranslate(xPos, yPos);
    ofScale(scaleFactor, scaleFactor);
    ofRotate(rotation);
    
    //draw leaf
    
    ofSetColor(leafColor);
    
    //draw left half of leaf
    
    ofBeginShape();
    
    float x0 = 0;
    float x1 = x0 - leafWidth;
    float x2 = x0 - leafWidth/leafCurvature;
    float x3 = x0;
    
    float y0 = 0;
    float y1 = y0 - leafLength/3;
    float y2 = y1 - leafLength/3;
    float y3 = y0 - leafLength;
    
    ofVertex(x0,y0);
    ofBezierVertex(x1,y1,x2,y2,x3,y3);
    
    
    //    float x0 = 0;
    //    float x1 = x0 - leafWidth;
    //    float x2 = x0 - leafWidth/leafCurvature;
    //    float x3 = x0;
    //
    //    float y0 = 0 - stemLength;
    //    float y1 = y0 - leafLength/3;
    //    float y2 = y1 - leafLength/3;
    //    float y3 = y0 - leafLength;
    //
    //    ofVertex(x0,y0);
    //    ofBezierVertex(x1,y1,x2,y2,x3,y3);
    
    ofEndShape();
    
    //draw right half of leaf
    
    ofBeginShape();
    
    
    x0 = 0; //don't need to redefine as float, because we are just reusing the variables created above
    x1 = x0 + leafWidth;
    x2 = x0 + leafWidth/leafCurvature;
    x3 = x0;
    
    y0 = 0;
    y1 = y0 - leafLength/3;
    y2 = y1 - leafLength/3;
    y3 = y0 - leafLength;
    
    ofVertex(x0,y0);
    ofBezierVertex(x1,y1,x2,y2,x3,y3);
    
    //
    //    x0 = 0; //don't need to redefine as float, because we are just reusing the variables created above
    //    x1 = x0 + leafWidth;
    //    x2 = x0 + leafWidth/leafCurvature;
    //    x3 = x0;
    //
    //    y0 = 0 - stemLength;
    //    y1 = y0 - leafLength/3;
    //    y2 = y1 - leafLength/3;
    //    y3 = y0 - leafLength;
    //
    //    ofVertex(x0,y0);
    //    ofBezierVertex(x1,y1,x2,y2,x3,y3);
    
    ofEndShape();
    
    //draw stem and veins of leaf
    
    //    ofSetColor(stemColor);
    //    ofRect(0,0 - (stemLength/2), stemWidth, stemLength); //MATH!
    //    ofTriangle(0 - stemWidth/2, 0 - stemLength, 0 + stemWidth/2, 0 - stemLength, 0, 0 - stemLength - 3*(leafLength/4));
    
    ofPopMatrix();
    
    
    
    
    
    
}

