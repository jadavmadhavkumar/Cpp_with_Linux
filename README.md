<H1>Hello  Every One </H1>
<h3>let's start with Cpp in Linux with Cmake and using Codelite text editer.</h3>




<!DOCTYPE html>
<html>
<head>
    <title>Running OpenGL in Linux</title>
    <style>
        body {
            font-family: Arial, sans-serif;
        }
    </style>
</head>
<body>
    <h1>Running OpenGL in Linux</h1>
    <h2>Step 1: Install the necessary packages</h2>
    <p>1. <strong>Install the OpenGL development package</strong>:</p>
    <pre>
        <code>
            sudo apt-get install freeglut3-dev
        </code>
    </pre>
    <p>or</p>
    <pre>
        <code>
            sudo yum install freeglut-devel
        </code>
    </pre>
    <p>2. <strong>Install the GLUT library</strong>:</p>
    <pre>
        <code>
            sudo apt-get install libglut-dev
        </code>
    </pre>
    <p>or</p>
    <pre>
        <code>
            sudo yum install glut
        </code>
    </pre>
    <h2>Step 2: Compile and Run the OpenGL Program</h2>
    <p>1. <strong>Compile the program</strong>:</p>
    <pre>
        <code>
            g++ -o program program.cpp -lGL -lGLU -lglut
        </code>
    </pre>
    <p>Replace <code>program.cpp</code> with the name of your OpenGL program.</p>
    <p>2. <strong>Run the program</strong>:</p>
    <pre>
        <code>
            ./program
        </code>
    </pre>
    <h2>Additional Tips</h2>
    <p><strong>Verify OpenGL installation</strong>:</p>
    <pre>
        <code>
            glxinfo | grep OpenGL
        </code>
    </pre>
    <p>This command will display information about your OpenGL installation.</p>
    <p><strong>Troubleshooting</strong>:</p>
    <ul>
        <li>If you encounter issues with OpenGL not being recognized, try reinstalling the necessary packages.</li>
        <li>If you encounter issues with the program not running, check for any syntax errors in your code.</li>
    </ul>
    <h2>Example Code</h2>
    <p>Here is an example of a simple OpenGL program in C++:</p>
    <pre>
        <code>
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
    <h2>References</h2>
    <ul>
        <li><a href="https://www.opengl.org/resources/libraries/glut/">GLUT Documentation</a></li>
        <li><a href="https://www.opengl.org/documentation/">OpenGL Documentation</a></li>
        <li><a href="https://www.linux.org/learn/docs/OpenGL-Installation-on-Linux">Linux OpenGL Installation</a></li>
    </ul>
    <h2>License</h2>
    <p>This README file is licensed under the <a href="https://opensource.org/licenses/MIT">MIT License</a>.</p>
</body>
</html>
