<H1>Hello  Every One </H1>
<h3>let's start with Cpp in Linux with Cmake and using Codelite text editer.</h3>




<!DOCTYPE html>
<html>
<head>
    <title>Running OpenGL in Linux</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f0f0f0;
            padding: 20px;
        }
        
        h1 {
            color: #333;
            font-size: 24px;
            margin-bottom: 10px;
        }
        
        h2 {
            color: #666;
            font-size: 18px;
            margin-bottom: 10px;
        }
        
        p {
            font-size: 16px;
            margin-bottom: 20px;
        }
        
        code {
            font-size: 14px;
            font-family: monospace;
            background-color: #f9f9f9;
            padding: 10px;
            border: 1px solid #ccc;
            border-radius: 5px;
            width: 100%;
        }
        
        .highlight {
            background-color: #f2f2f2;
            padding: 10px;
            border: 1px solid #ccc;
            border-radius: 5px;
            width: 100%;
        }
        
        .highlight pre {
            padding: 10px;
            border: none;
            border-radius: 5px;
            width: 100%;
        }
        
        .highlight code {
            font-size: 14px;
            font-family: monospace;
            background-color: #f9f9f9;
            padding: 10px;
            border: none;
            border-radius: 5px;
            width: 100%;
        }
        
        .references {
            margin-top: 20px;
        }
        
        .references ul {
            list-style: none;
            padding: 0;
            margin: 0;
        }
        
        .references li {
            margin-bottom: 10px;
        }
        
        .references a {
            text-decoration: none;
            color: #666;
        }
        
        .references a:hover {
            color: #333;
        }
    </style>
</head>
<body>
    <h1>Running OpenGL in Linux</h1>
    <h2>Step 1: Install the necessary packages</h2>
    <p>1. <strong>Install the OpenGL development package</strong>:</p>
    <code>
        sudo apt-get install freeglut3-dev
    </code>
    <p>or</p>
    <code>
        sudo yum install freeglut-devel
    </code>
    <p>2. <strong>Install the GLUT library</strong>:</p>
    <code>
        sudo apt-get install libglut-dev
    </code>
    <p>or</p>
    <code>
        sudo yum install glut
    </code>
    <h2>Step 2: Compile and Run the OpenGL Program</h2>
    <p>1. <strong>Compile the program</strong>:</p>
    <code>
        g++ -o program program.cpp -lGL -lGLU -lglut
    </code>
    <p>Replace <code>program.cpp</code> with the name of your OpenGL program.</p>
    <p>2. <strong>Run the program</strong>:</p>
    <code>
        ./program
    </code>
    <h2>Additional Tips</h2>
    <p><strong>Verify OpenGL installation</strong>:</p>
    <code>
        glxinfo | grep OpenGL
    </code>
    <p>This command will display information about your OpenGL installation.</p>
    <p><strong>Troubleshooting</strong>:</p>
    <ul>
        <li>If you encounter issues with OpenGL not being recognized, try reinstalling the necessary packages.</li>
        <li>If you encounter issues with the program not running, check for any syntax errors in your code.</li>
    </ul>
    <h2>Example Code</h2>
    <div class="highlight">
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
    </div>
    <h2>References</h2>
    <div class="references">
        <ul>
            <li><a href="https://www.opengl.org/resources/libraries/glut/">GLUT Documentation</a></li>
            <li><a href="https://www.opengl.org/documentation/">OpenGL Documentation</a></li>
            <li><a href="https://www.linux.org/learn/docs/OpenGL-Installation-on-Linux">Linux OpenGL Installation</a></li>
        </ul>
    </div>
    <h2>License</h2>
    <p>This README file is licensed under the <a href="https://opensource.org/licenses/MIT">MIT License</a>.</p>
</body>
</html>
