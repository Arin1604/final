#pragma once

#include <vector>
#include <glm/glm.hpp>

class cylinder
{
public:
    void updateParams(int param1, int param2);
    std::vector<float> generateShape() { return m_vertexData;

    }

private:
    void insertVec3(std::vector<float> &data, glm::vec3 v);
    void setVertexData();
    void makeTile(glm::vec3 topLeft,
                  glm::vec3 topRight,
                  glm::vec3 bottomLeft,
                  glm::vec3 bottomRight);
    void makeCircle();
    glm::vec3 baseHelper(float angle, float y, float radialIncrement);
    glm::vec3 wedgeHelper(float angle, float y);
    void makeCylinder();
    void wedger(float currentTheta, float nextTheta);
    void makeBase(glm::vec3 topLeft,
                     glm::vec3 topRight,
                     glm::vec3 bottomLeft,
                     glm::vec3 bottomRight);
    std::vector<float> m_vertexData;
    int m_param1;
    int m_param2;
    float m_radius = 0.5;
};
