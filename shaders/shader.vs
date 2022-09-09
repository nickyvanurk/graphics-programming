#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aColor;

out vec3 vertexColor;

uniform float offsetX;
uniform float offsetY;

void main() {
    gl_Position = vec4(aPos.x + offsetX, aPos.y + offsetY, aPos.z, 1.0);
    vertexColor.x = aPos.x + offsetX + 0.5f;
    vertexColor.y = aPos.y + offsetY + 0.5f;
}
