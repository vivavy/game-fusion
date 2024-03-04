#include <engine.h>

namespace GF {
    namespace Types {
        class Camera {
            protected:
                fvec3 pos;  // x, y, z
                fvec2 dir;  // pitch, yaw
            
            public:
                Camera() {
                    this->pos = fvec3();
                    this->dir = fvec2();
                };
                
                void move(fvec3 delta) {
                    this->pos += delta;
                };

                void setPos(fvec3 pos) {
                    this->pos = +pos;
                };

                void clump() {
                    if (this->dir.x > 90) this->dir.x = 90;
                    if (this->dir.x < -90) this->dir.x = -90;
                    if (this->dir.y < 0) this->dir.y += 360;
                    if (this->dir.y > 360) this->dir.y -= 360;
                };

                void moveForward(double distance, double angleX = 0, double angleY = 0) {
                    double radX = Functions::deg2rad(this->dir.y + angleX);
                    double radY = Functions::deg2rad(this->dir.x + angleY);

                    this->pos.x -= sin(radX) * distance;
                    this->pos.y += sin(radY) * distance;
                    this->pos.z -= cos(radX) * distance;
                };
        };
    };

    namespace Functions {
        double deg2rad(double degrees) {
            return degrees * M_PI / 180.0;
        };

        double rad2deg(double radians) {
            return radians * 180.0 / M_PI;
        };

        void drawCube(float size)
        {
            std::vector<float> difamb({1.0, 0.5, 0.3, 1.0});

            GL::begin(GL::QUADS);

            GL::material(difamb);

            // front face
            GL::normal(0.0, 0.0, 1.0);
            GL::vertex(size / 2, size / 2, size / 2);
            GL::vertex(-size / 2, size / 2, size / 2);
            GL::vertex(-size / 2, -size / 2, size / 2);
            GL::vertex(size / 2, -size / 2, size / 2);

            // left face
            GL::normal(-1.0, 0.0, 0.0);
            GL::vertex(-size / 2, size / 2, size / 2);
            GL::vertex(-size / 2, size / 2, -size / 2);
            GL::vertex(-size / 2, -size / 2, -size / 2);
            GL::vertex(-size / 2, -size / 2, size / 2);

            // back face
            GL::normal(0.0, 0.0, -1.0);
            GL::vertex(size / 2, size / 2, -size / 2);
            GL::vertex(-size / 2, size / 2, -size / 2);
            GL::vertex(-size / 2, -size / 2, -size / 2);
            GL::vertex(size / 2, -size / 2, -size / 2);

            // right face
            GL::normal(1.0, 0.0, 0.0);
            GL::vertex(size / 2, size / 2, -size / 2);
            GL::vertex(size / 2, size / 2, size / 2);
            GL::vertex(size / 2, -size / 2, size / 2);
            GL::vertex(size / 2, -size / 2, -size / 2);

            // top face
            GL::normal(0.0, 1.0, 0.0);
            GL::vertex(size / 2, size / 2, size / 2);
            GL::vertex(-size / 2, size / 2, size / 2);
            GL::vertex(-size / 2, size / 2, -size / 2);
            GL::vertex(size / 2, size / 2, -size / 2);

            // bottom face
            GL::normal(0.0, -1.0, 0.0);
            GL::vertex(size / 2, -size / 2, size / 2);
            GL::vertex(-size / 2, -size / 2, size / 2);
            GL::vertex(-size / 2, -size / 2, -size / 2);
            GL::vertex(size / 2, -size / 2, -size / 2);

            GL::end();
        };
    };
};
