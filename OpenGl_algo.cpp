#include <GL/glut.h>
#include <cmath>
#include <iostream>

// Function to draw a circle
void drawCircle(float cx, float cy, float r, int num_segments, float z, float red, float green, float blue) {
    glColor3f(red, green, blue);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = r * cosf(theta);
        float y = r * sinf(theta);
        glVertex3f(x + cx, y + cy, z);
    }
    glEnd();
}

// Function to draw a square
void drawSquare(float cx, float cy, float r, float z, float red, float green, float blue) {
    glColor3f(red, green, blue);
    glBegin(GL_QUADS);
    glVertex3f(cx - r, cy - r, z);
    glVertex3f(cx + r, cy - r, z);
    glVertex3f(cx + r, cy + r, z);
    glVertex3f(cx - r, cy + r, z);
    glEnd();
}

// Function to draw a triangle
void drawTriangle(float cx, float cy, float r, float z, float red, float green, float blue) {
    glColor3f(red, green, blue);
    glBegin(GL_TRIANGLES);
    glVertex3f(cx - r, cy, z);
    glVertex3f(cx + r, cy, z);
    glVertex3f(cx, cy + r, z); // Adjust the y-coordinate for the increased size
    glEnd();
}

// Function to draw a rectangle
void drawRectangle(float cx, float cy, float w, float h, float z, float red, float green, float blue) {
    glColor3f(red, green, blue);
    glBegin(GL_QUADS);
    glVertex3f(cx - w / 2, cy - h / 2, z);
    glVertex3f(cx + w / 2, cy - h / 2, z);
    glVertex3f(cx + w / 2, cy + h / 2, z);
    glVertex3f(cx - w / 2, cy + h / 2, z);
    glEnd();
}

// Function to set up lighting for Phong shading
void setupLighting() {
    GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
    GLfloat light_ambient[] = { 0.2, 0.2, 0.2, 1.0 };
    GLfloat light_diffuse[] = { 0.8, 0.8, 0.8, 1.0 };
    GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };

    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
}

// Function to set up the projection matrix
void setupProjection(int width, int height) {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (float)width / (float)height, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0, 0, 5, 0, 0, 0, 0, 1, 0);
}

// Function to handle window resizing
void reshape(int width, int height) {
    glViewport(0, 0, width, height);
    setupProjection(width, height);
}

// Function to draw the scene
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Set material properties for Phong shading
    GLfloat material_ambient[] = { 0.2, 0.2, 0.2, 1.0 };
    GLfloat material_diffuse[] = { 0.8, 0.8, 0.8, 1.0 };
    GLfloat material_specular[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat material_shininess[] = { 50.0 };

    glMaterialfv(GL_FRONT, GL_AMBIENT, material_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, material_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, material_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, material_shininess);

    // Draw the objects with specified depths and colors
    drawCircle(0.5, 0.5, 0.6, 100, -1.0, 1.0, 0.0, 0.0); // Circle at z = -1.0, red, radius increased
    drawSquare(-0.5, -0.5, 0.6, -1.5, 0.0, 1.0, 0.0);    // Square at z = -1.5, green, size increased
    drawTriangle(-0.5, 0.5, 0.6, -1.2, 0.0, 0.0, 1.0);   // Triangle at z = -1.2, blue, size increased
    drawRectangle(0.5, -0.5, 1.2, 0.6, -1.8, 1.0, 1.0, 0.0); // Rectangle at z = -1.8, yellow, size increased

    // Swap buffers
    glutSwapBuffers();
}

// Function to handle keyboard input
void keyboard(unsigned char key, int x, int y) {
    // Exit the program when the 'q' key is pressed
    if (key == 'q') {
        exit(0);
    }
}

// Function to handle the GLUT main loop
void mainLoop() {
    // Initialize GLUT
    int argc = 0;
    char** argv = NULL;
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Shapes");

    // Enable depth testing for Z-buffer algorithm
    glEnable(GL_DEPTH_TEST);

    // Set up lighting for Phong shading
    setupLighting();

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
}

int main() {
    // Start the GLUT main loop
    mainLoop();

    return 0;
}
