#include <GL.h>

void GL::material(std::vector<float> diffamb) {
    float diffambv[] = {diffamb[0], diffamb[1], diffamb[2], diffamb[3]};
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, diffambv);
};

void GL::begin(int value) {
    glBegin(value);
};

void GL::end(void) {
    glEnd();
};

void normal(GF::hvec3 vec) {
    glNormal3f(vec.x, vec.y, vec.z);
};

void normal(float x, float y, float z) {
    glNormal3f(x, y, z);
};


void vertex(GF::hvec3 vec) {
    glVertex3f(vec.x, vec.y, vec.z);
};

void vertex(float x, float y, float z) {
    glVertex3f(x, y, z);
};

void GL::clearColor(GF::hvec3 color) {
    glClearColor(color.x, color.y, color.z, 1.0f);
};

void GL::clear(void) {
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
};

void GL::matrixMode(int mode) {
    glMatrixMode(mode);
};

void GL::loadIdentity(void) {
    glLoadIdentity();
};

void GL::perspective(double a, double b, double c, double d) {
    gluPerspective(a, b, c, d);
};

void GL::enable(int option) {
    glEnable(option);
};
