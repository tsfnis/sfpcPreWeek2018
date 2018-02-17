

#include <stdio.h>


class popcorn {
    
    public:
    
    float x;
    float y;
    float velx;
    float vely;
    
    void setup();
    void draw();
    void update(float mx, float my);
    
    bool still; //is the popcorn trapped
    
};
