<H1>Hello  Every One </H1>
<h3>let's start with Cpp in Linux with Cmake and using Codelite text editer.</h3>




<!DOCTYPE html>
<html>
<head>
    <title>Running OpenGL in Linux</title>
</head>
<body style="font-family: Arial, sans-serif; background-color: #f0f0f0; padding: 20px;">
    <h1 style="color: #333; font-size: 24px; margin-bottom: 10px;">Running OpenGL in Linux</h1>
    <h2 style="color: #666; font-size: 18px; margin-bottom: 10px;">Step 1: Install the necessary packages</h2>
    <p style="font-size: 16px; margin-bottom: 20px;">1. <strong>Install the OpenGL development package</strong>:</p>
    <code style="font-size: 14px; font-family: monospace; background-color: #f9f9f9; padding: 10px; border: 1px solid #ccc; border-radius: 5px; width: 100%;">sudo apt-get install freeglut3-dev</code>
    <p style="font-size: 16px; margin-bottom: 20px;">or</p>
    <code style="font-size: 14px; font-family: monospace; background-color: #f9f9f9; padding: 10px; border: 1px solid #ccc; border-radius: 5px; width: 100%;">sudo yum install freeglut-devel</code>
    <p style="font-size: 16px; margin-bottom: 20px;">2. <strong>Install the GLUT library</strong>:</p>
    <code style="font-size: 14px; font-family: monospace; background-color: #f9f9f9; padding: 10px; border: 1px solid #ccc; border-radius: 5px; width: 100%;">sudo apt-get install libglut-dev</code>
    <p style="font-size: 16px; margin-bottom: 20px;">or</p>
    <code style="font-size: 14px; font-family: monospace; background-color: #f9f9f9; padding: 10px; border: 1px solid #ccc; border-radius: 5px; width: 100%;">sudo yum install glut</code>
    <h2 style="color: #666; font-size: 18px; margin-bottom: 10px;">Step 2: Compile and Run the OpenGL Program</h2>
    <p style="font-size: 16px; margin-bottom: 20px;">1. <strong>Compile the program</strong>:</p>
    <code style="font-size: 14px; font-family: monospace; background-color: #f9f9f9; padding: 10px; border: 1px solid #ccc; border-radius: 5px; width: 100%;">g++ -o program program.cpp -lGL -lGLU -lglut</code>
    <p style="font-size: 16px; margin-bottom: 20px;">Replace <code style="font-size: 14px; font-family: monospace;">program.cpp</code> with the name of your OpenGL program.</p>
    <p style="font-size: 16px; margin-bottom: 20px;">2. <strong>Run the program</strong>:</p>
    <code style="font-size: 14px; font-family: monospace; background-color: #f9f9f9; padding: 10px; border: 1px solid #ccc; border-radius: 5px; width: 100%;">./program</code>
    <h2 style="color: #666; font-size: 18px; margin-bottom: 10px;">Additional Tips</h2>
    <p style="font-size: 16px; margin-bottom: 20px;"><strong>Verify OpenGL installation</strong>:</p>
    <code style="font-size: 14px; font-family: monospace; background-color: #f9f9f9; padding: 10px; border: 1px solid #ccc; border-radius: 5px; width: 100%;">glxinfo | grep OpenGL</code>
    <p style="font-size: 16px; margin-bottom: 20px;">This command will display information about your OpenGL installation.</p>
    <p style="font-size: 16px; margin-bottom: 20px;"><strong>Troubleshooting</strong>:</p>
    <ul style="list-style: none; padding: 0; margin: 0;">
        <li style="margin-bottom: 10px;">If you encounter issues with OpenGL not being recognized, try reinstalling the necessary packages.</li>
        <li style="margin-bottom: 10px;">If you encounter issues with the program not running, check for any syntax errors in your code.</li>
    </ul>
    <h2 style="color: #666; font-size: 18px; margin-bottom: 10px;">Example Code</h2>
    <div style="background-color: #f2f2f2; padding: 10px; border: 1px solid #ccc; border-radius: 5px; width: 100%;">
        <pre style="padding: 10px; border: none; border-radius: 5px; width: 100%;">
            <code style="font-size: 14px; font-family: monospace; background-color: #f9f9f9; padding: 10px; border: none; border-radius: 5px; width: 100%;">
                #include <GL/glut.h>

                void display() {
                    glClear(GL_COLOR_BUFFER_BIT);
                    glBegin(GL_TRIANGLES);
                    glVertex2f(-0.5, -0.5);
                    glVertex2f(0.5, -0.5);
                    glVertex2f(0, 0.5);
                    glEnd();
                    glutSwapBuffers();
                }

                int main(int argc, char** argv) {
                    glutInit(&argc, argv);
                    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
                    glutInitWindowSize(640, 480);
                    glutCreateWindow("OpenGL Example");
                    glutDisplayFunc(display);
                    glutMainLoop();
                    return 0;
                }
            </code>
        </pre>
<div>
    </div>
    <h2 style="color: #666; font-size: 18px; margin-bottom: 10px;">References</h2>
    <div style="margin-top: 20px;">
        <ul style="list-style: none; padding: 0; margin: 0;">
            <li style="margin-bottom: 10px;"><a href="https://www.opengl.org/resources/libraries/glut/" style="text-decoration: none; color: #666;">GLUT Documentation</a></li>
            <li style="margin-bottom: 10px;"><a href="https://www.opengl.org/documentation/" style="text-decoration: none; color: #666;">OpenGL Documentation</a></li>
            <li style="margin-bottom: 10px;"><a href="https://www.linux.org/learn/docs/OpenGL-Installation-on-Linux" style="text-decoration: none; color: #666;">Linux OpenGL Installation</a></li>
        </ul>
    </div>
    <h2 style="color: #666; font-size: 18px; margin-bottom: 10px;">License</h2>
    <p style="font-size: 16px; margin-bottom: 20px;">This README file is licensed under the <a href="https://opensource.org/licenses/MIT" style="text-decoration: none; color: #666;">MIT License</a>.</p>
    <div>
</body>
</html>
