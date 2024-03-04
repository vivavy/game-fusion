#pragma once
#include <GL/gl.h>
#include <GL/glu.h>
#include <engine.hpp>


namespace GL {
    int QUADS = GL_QUADS;
    int TRIANGLES = GL_TRIANGLES;
    int PROJECTION = GL_PROJECTION;
    int DEPTH_TEST = GL_DEPTH_TEST;
    int LIGHTING = GL_LIGHTING;
    int LIGHT0 = GL_LIGHT0;

    void matrixMode(int);
    void loadIdentity(void);
    void perspective(double,double,double,double);
    void enable(int option);
    void begin(int);
    void end(void);
    void material(std::vector<float>);
    void normal(GF::hvec3);
    void normal(float, float, float);
    void vertex(GF::hvec3);
    void vertex(float, float, float);
    void clearColor(GF::hvec3);
    void clear(void);
};
