#pragma once 

class Polygon {

    protected: 
    int mWidth;
    int mHeight;

    public: 
    void setvalues(int width, int height);
    virtual int Area();
};