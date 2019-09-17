

 #include <bits/stdc++.h>
 #include <stdlib.h>
#include<Windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<math.h>

#include<stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/GLAUX.h>

using namespace std;

double a=0.0,b=0.0,c=15.0;
GLfloat	l_t=0;
GLuint texture[50];


void LoadGLTextures()
{
	glPushMatrix();
	AUX_RGBImageRec* TextureImage;

	glGenTextures(20,texture);

	if (TextureImage = auxDIBImageLoad("C:\\Users\\THINKPAD\\3D Objects\\City3D\\building1wall.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[0]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("C:\\Users\\THINKPAD\\3D Objects\\City3D\\building2wall.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[1]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("C:\\Users\\THINKPAD\\3D Objects\\City3D\\building3wall.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[2]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("C:\\Users\\THINKPAD\\3D Objects\\City3D\\road.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[3]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("C:\\Users\\THINKPAD\\3D Objects\\City3D\\metrorail.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[4]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("C:\\Users\\THINKPAD\\3D Objects\\City3D\\white.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[5]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("C:\\Users\\THINKPAD\\3D Objects\\City3D\\building4wall.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[6]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("C:\\Users\\THINKPAD\\3D Objects\\City3D\\building5wall.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[7]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("C:\\Users\\THINKPAD\\3D Objects\\City3D\\building6wall.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[8]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("C:\\Users\\THINKPAD\\3D Objects\\City3D\\metrorailpillar.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[9]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("C:\\Users\\THINKPAD\\3D Objects\\City3D\\road1.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[10]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("C:\\Users\\THINKPAD\\3D Objects\\City3D\\road2.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[11]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("C:\\Users\\THINKPAD\\3D Objects\\City3D\\building7wall.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[12]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}

}


// Draw A Quad with texture
void building1()
{

    glBindTexture(GL_TEXTURE_2D, texture[0]);
        glBegin(GL_QUADS);


            //glColor3f(1.0f,1.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f,1.0f,4.0f);					// Top front Of The Quad (left)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,1.0f);					// Top back Of The Quad (left)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,1.0f);					// Bottom back Of The Quad (left)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,-1.0f,4.0f);					// Bottom front Of The Quad (left)

            //glColor3f(0.0f,1.0f,0.0f);

            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,4.0f);					 // Top front Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,1.0f,1.0f);					// Top back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(1.0f,-1.0f,1.0f);					// Bottom back Of The Quad (right)
            glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,-1.0f,4.0f);					// Bottom front Of The Quad (right)

        glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[0]);
        glBegin(GL_QUADS);

            //glColor3f(1.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,4.0f);					 // Right front Of The Quad (top)
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,1.0f,1.0f);					// Right back Of The Quad (top)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,1.0f,1.0f);				    // Left back Of The Quad (top)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,1.0f,4.0f);				    // Left front Of The Quad (top)


            //glColor3f(0.0f,1.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,-1.0f,4.0f);					// Right front Of The Quad (bottom)
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,-1.0f,1.0f);					// Right back Of The Quad (bottom)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,1.0f);				    // Left back Of The Quad (bottom)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,-1.0f,4.0f);				    // Left front Of The Quad (bottom)

        glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[0]);
        glBegin(GL_QUADS);

            //glColor3f(0.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,1.0f);					 // Top Right Of The Quad (Back)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,1.0f);					// Top Left Of The Quad (Back)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,1.0f);					// Bottom Left Of The Quad (Back)
            glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,-1.0f,1.0f);					// Bottom Right Of The Quad (Back)


            //glColor3f(1.0f,0.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,4.0f);					// Top Right Of The Quad (Front)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,4.0f);					// Top Left Of The Quad (Front)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,4.0f);					// Bottom Left Of The Quad (Front)
            glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,-1.0f,4.0f);				    // Bottom Right Of The Quad (Front)


    glEnd();
}

void building2()
{
    glBindTexture(GL_TEXTURE_2D, texture[1]);
        glBegin(GL_QUADS);


            //glColor3f(1.0f,1.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-4.0f,1.0f,4.0f);					// Top front Of The Quad (left)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-4.0f,1.0f,1.0f);					// Top back Of The Quad (left)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-4.0f,-1.0f,1.0f);					// Bottom back Of The Quad (left)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-4.0f,-1.0f,4.0f);					// Bottom front Of The Quad (left)

            //glColor3f(0.0f,1.0f,0.0f);

            glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f,1.0f,4.0f);					 // Top front Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-2.0f,1.0f,1.0f);					// Top back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-2.0f,-1.0f,1.0f);					// Bottom back Of The Quad (right)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-2.0f,-1.0f,4.0f);					// Bottom front Of The Quad (right)

        glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[1]);
        glBegin(GL_QUADS);

            //glColor3f(1.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f,1.0f,4.0f);					 // Right front Of The Quad (top)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-2.0f,1.0f,1.0f);					// Right back Of The Quad (top)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-4.0f,1.0f,1.0f);				    // Left back Of The Quad (top)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-4.0f,1.0f,4.0f);				    // Left front Of The Quad (top)


            //glColor3f(0.0f,1.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f,-1.0f,4.0f);					// Right front Of The Quad (bottom)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-2.0f,-1.0f,1.0f);					// Right back Of The Quad (bottom)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-4.0f,-1.0f,1.0f);				    // Left back Of The Quad (bottom)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-4.0f,-1.0f,4.0f);				    // Left front Of The Quad (bottom)

        glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[1]);
        glBegin(GL_QUADS);

            //glColor3f(0.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f,1.0f,1.0f);					 // Top Right Of The Quad (Back)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-4.0f,1.0f,1.0f);					// Top Left Of The Quad (Back)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-4.0f,-1.0f,1.0f);					// Bottom Left Of The Quad (Back)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-2.0f,-1.0f,1.0f);					// Bottom Right Of The Quad (Back)


            //glColor3f(1.0f,0.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f,1.0f,4.0f);					// Top Right Of The Quad (Front)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-4.0f,1.0f,4.0f);					// Top Left Of The Quad (Front)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-4.0f,-1.0f,4.0f);					// Bottom Left Of The Quad (Front)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-2.0f,-1.0f,4.0f);				    // Bottom Right Of The Quad (Front)


    glEnd();
}

void building3()
{
    glBindTexture(GL_TEXTURE_2D, texture[2]);
        glBegin(GL_QUADS);


            //glColor3f(1.0f,1.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(2.0f,1.0f,4.0f);					// Top front Of The Quad (left)
            glTexCoord2f(1.0f,1.0f); glVertex3f(2.0f,1.0f,1.0f);					// Top back Of The Quad (left)
            glTexCoord2f(1.0f,0.0f); glVertex3f(2.0f,-1.0f,1.0f);					// Bottom back Of The Quad (left)
            glTexCoord2f(0.0f,0.0f); glVertex3f(2.0f,-1.0f,4.0f);					// Bottom front Of The Quad (left)

            //glColor3f(0.0f,1.0f,0.0f);

            glTexCoord2f(0.0f,1.0f); glVertex3f(4.0f,1.0f,4.0f);					 // Top front Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(4.0f,1.0f,1.0f);					// Top back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(4.0f,-1.0f,1.0f);					// Bottom back Of The Quad (right)
            glTexCoord2f(0.0f,0.0f); glVertex3f(4.0f,-1.0f,4.0f);					// Bottom front Of The Quad (right)

        glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[2]);
        glBegin(GL_QUADS);

            //glColor3f(1.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(4.0f,1.0f,4.0f);					 // Right front Of The Quad (top)
            glTexCoord2f(1.0f,1.0f); glVertex3f(4.0f,1.0f,1.0f);					// Right back Of The Quad (top)
            glTexCoord2f(1.0f,0.0f); glVertex3f(2.0f,1.0f,1.0f);				    // Left back Of The Quad (top)
            glTexCoord2f(0.0f,0.0f); glVertex3f(2.0f,1.0f,4.0f);				    // Left front Of The Quad (top)


            //glColor3f(0.0f,1.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(4.0f,-1.0f,4.0f);					// Right front Of The Quad (bottom)
            glTexCoord2f(1.0f,1.0f); glVertex3f(4.0f,-1.0f,1.0f);					// Right back Of The Quad (bottom)
            glTexCoord2f(1.0f,0.0f); glVertex3f(2.0f,-1.0f,1.0f);				    // Left back Of The Quad (bottom)
            glTexCoord2f(0.0f,0.0f); glVertex3f(2.0f,-1.0f,4.0f);				    // Left front Of The Quad (bottom)

        glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[2]);
        glBegin(GL_QUADS);

            //glColor3f(0.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(4.0f,1.0f,1.0f);					 // Top Right Of The Quad (Back)
            glTexCoord2f(1.0f,1.0f); glVertex3f(2.0f,1.0f,1.0f);					// Top Left Of The Quad (Back)
            glTexCoord2f(1.0f,0.0f); glVertex3f(2.0f,-1.0f,1.0f);					// Bottom Left Of The Quad (Back)
            glTexCoord2f(0.0f,0.0f); glVertex3f(4.0f,-1.0f,1.0f);					// Bottom Right Of The Quad (Back)


            //glColor3f(1.0f,0.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(4.0f,1.0f,4.0f);					// Top Right Of The Quad (Front)
            glTexCoord2f(1.0f,1.0f); glVertex3f(2.0f,1.0f,4.0f);					// Top Left Of The Quad (Front)
            glTexCoord2f(1.0f,0.0f); glVertex3f(2.0f,-1.0f,4.0f);					// Bottom Left Of The Quad (Front)
            glTexCoord2f(0.0f,0.0f); glVertex3f(4.0f,-1.0f,4.0f);				    // Bottom Right Of The Quad (Front)


    glEnd();
}

void building4()
{
    glBindTexture(GL_TEXTURE_2D, texture[6]);
        glBegin(GL_QUADS);


            //glColor3f(1.0f,1.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(2.0f,1.0f,11.0f);					// Top front Of The Quad (left)
            glTexCoord2f(1.0f,1.0f); glVertex3f(2.0f,1.0f,8.0f);					// Top back Of The Quad (left)
            glTexCoord2f(1.0f,0.0f); glVertex3f(2.0f,-1.0f,8.0f);					// Bottom back Of The Quad (left)
            glTexCoord2f(0.0f,0.0f); glVertex3f(2.0f,-1.0f,11.0f);					// Bottom front Of The Quad (left)

            //glColor3f(0.0f,1.0f,0.0f);

            glTexCoord2f(0.0f,1.0f); glVertex3f(4.0f,1.0f,11.0f);					 // Top front Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(4.0f,1.0f,8.0f);					// Top back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(4.0f,-1.0f,8.0f);					// Bottom back Of The Quad (right)
            glTexCoord2f(0.0f,0.0f); glVertex3f(4.0f,-1.0f,11.0f);					// Bottom front Of The Quad (right)

        glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[6]);
        glBegin(GL_QUADS);

            //glColor3f(1.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(4.0f,1.0f,11.0f);					 // Right front Of The Quad (top)
            glTexCoord2f(1.0f,1.0f); glVertex3f(4.0f,1.0f,8.0f);					// Right back Of The Quad (top)
            glTexCoord2f(1.0f,0.0f); glVertex3f(2.0f,1.0f,8.0f);				    // Left back Of The Quad (top)
            glTexCoord2f(0.0f,0.0f); glVertex3f(2.0f,1.0f,11.0f);				    // Left front Of The Quad (top)


            //glColor3f(0.0f,1.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(4.0f,-1.0f,11.0f);					// Right front Of The Quad (bottom)
            glTexCoord2f(1.0f,1.0f); glVertex3f(4.0f,-1.0f,8.0f);					// Right back Of The Quad (bottom)
            glTexCoord2f(1.0f,0.0f); glVertex3f(2.0f,-1.0f,8.0f);				    // Left back Of The Quad (bottom)
            glTexCoord2f(0.0f,0.0f); glVertex3f(2.0f,-1.0f,11.0f);				    // Left front Of The Quad (bottom)

        glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[6]);
        glBegin(GL_QUADS);

            //glColor3f(0.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(4.0f,1.0f,8.0f);					 // Top Right Of The Quad (Back)
            glTexCoord2f(1.0f,1.0f); glVertex3f(2.0f,1.0f,8.0f);					// Top Left Of The Quad (Back)
            glTexCoord2f(1.0f,0.0f); glVertex3f(2.0f,-1.0f,8.0f);					// Bottom Left Of The Quad (Back)
            glTexCoord2f(0.0f,0.0f); glVertex3f(4.0f,-1.0f,8.0f);					// Bottom Right Of The Quad (Back)


            //glColor3f(1.0f,0.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(4.0f,1.0f,11.0f);					// Top Right Of The Quad (Front)
            glTexCoord2f(1.0f,1.0f); glVertex3f(2.0f,1.0f,11.0f);					// Top Left Of The Quad (Front)
            glTexCoord2f(1.0f,0.0f); glVertex3f(2.0f,-1.0f,11.0f);					// Bottom Left Of The Quad (Front)
            glTexCoord2f(0.0f,0.0f); glVertex3f(4.0f,-1.0f,11.0f);				    // Bottom Right Of The Quad (Front)


    glEnd();
}

void building5()
{

    glBindTexture(GL_TEXTURE_2D, texture[7]);
        glBegin(GL_QUADS);


            //glColor3f(1.0f,1.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f,1.0f,11.0f);					// Top front Of The Quad (left)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,8.0f);					// Top back Of The Quad (left)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,8.0f);					// Bottom back Of The Quad (left)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,-1.0f,11.0f);					// Bottom front Of The Quad (left)

            //glColor3f(0.0f,1.0f,0.0f);

            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,11.0f);					 // Top front Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,1.0f,8.0f);					// Top back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(1.0f,-1.0f,8.0f);					// Bottom back Of The Quad (right)
            glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,-1.0f,11.0f);					// Bottom front Of The Quad (right)

        glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[7]);
        glBegin(GL_QUADS);

            //glColor3f(1.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,11.0f);					 // Right front Of The Quad (top)
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,1.0f,8.0f);					// Right back Of The Quad (top)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,1.0f,8.0f);				    // Left back Of The Quad (top)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,1.0f,11.0f);				    // Left front Of The Quad (top)


            //glColor3f(0.0f,1.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,-1.0f,11.0f);					// Right front Of The Quad (bottom)
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,-1.0f,8.0f);					// Right back Of The Quad (bottom)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,8.0f);				    // Left back Of The Quad (bottom)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,-1.0f,11.0f);				    // Left front Of The Quad (bottom)

        glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[7]);
        glBegin(GL_QUADS);

            //glColor3f(0.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,8.0f);					 // Top Right Of The Quad (Back)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,8.0f);					// Top Left Of The Quad (Back)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,8.0f);					// Bottom Left Of The Quad (Back)
            glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,-1.0f,8.0f);					// Bottom Right Of The Quad (Back)


            //glColor3f(1.0f,0.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,11.0f);					// Top Right Of The Quad (Front)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,11.0f);					// Top Left Of The Quad (Front)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,11.0f);					// Bottom Left Of The Quad (Front)
            glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,-1.0f,11.0f);				    // Bottom Right Of The Quad (Front)


    glEnd();
}

void building6()
{
    glBindTexture(GL_TEXTURE_2D, texture[8]);
        glBegin(GL_QUADS);


            //glColor3f(1.0f,1.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-4.0f,1.0f,11.0f);					// Top front Of The Quad (left)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-4.0f,1.0f,8.0f);					// Top back Of The Quad (left)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-4.0f,-1.0f,8.0f);					// Bottom back Of The Quad (left)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-4.0f,-1.0f,11.0f);					// Bottom front Of The Quad (left)

            //glColor3f(0.0f,1.0f,0.0f);

            glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f,1.0f,11.0f);					 // Top front Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-2.0f,1.0f,8.0f);					// Top back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-2.0f,-1.0f,8.0f);					// Bottom back Of The Quad (right)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-2.0f,-1.0f,11.0f);					// Bottom front Of The Quad (right)

        glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[8]);
        glBegin(GL_QUADS);

            //glColor3f(1.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f,1.0f,11.0f);					 // Right front Of The Quad (top)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-2.0f,1.0f,8.0f);					// Right back Of The Quad (top)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-4.0f,1.0f,8.0f);				    // Left back Of The Quad (top)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-4.0f,1.0f,11.0f);				    // Left front Of The Quad (top)


            //glColor3f(0.0f,1.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f,-1.0f,11.0f);					// Right front Of The Quad (bottom)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-2.0f,-1.0f,8.0f);					// Right back Of The Quad (bottom)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-4.0f,-1.0f,8.0f);				    // Left back Of The Quad (bottom)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-4.0f,-1.0f,11.0f);				    // Left front Of The Quad (bottom)

        glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[8]);
        glBegin(GL_QUADS);

            //glColor3f(0.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f,1.0f,8.0f);					 // Top Right Of The Quad (Back)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-4.0f,1.0f,8.0f);					// Top Left Of The Quad (Back)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-4.0f,-1.0f,8.0f);					// Bottom Left Of The Quad (Back)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-2.0f,-1.0f,8.0f);					// Bottom Right Of The Quad (Back)


            //glColor3f(1.0f,0.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f,1.0f,11.0f);					// Top Right Of The Quad (Front)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-4.0f,1.0f,11.0f);					// Top Left Of The Quad (Front)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-4.0f,-1.0f,11.0f);					// Bottom Left Of The Quad (Front)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-2.0f,-1.0f,11.0f);				    // Bottom Right Of The Quad (Front)


    glEnd();
}

void building7()
{
    glBindTexture(GL_TEXTURE_2D, texture[2]);
        glBegin(GL_QUADS);


            //glColor3f(1.0f,1.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-8.0f,1.0f,4.0f);					// Top front Of The Quad (left)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-8.0f,1.0f,1.0f);					// Top back Of The Quad (left)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-8.0f,-1.0f,1.0f);					// Bottom back Of The Quad (left)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-8.0f,-1.0f,4.0f);					// Bottom front Of The Quad (left)

            //glColor3f(0.0f,1.0f,0.0f);

            glTexCoord2f(0.0f,1.0f); glVertex3f(-6.0f,1.0f,4.0f);					 // Top front Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-6.0f,1.0f,1.0f);					// Top back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-6.0f,-1.0f,1.0f);					// Bottom back Of The Quad (right)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-6.0f,-1.0f,4.0f);					// Bottom front Of The Quad (right)

        glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[2]);
        glBegin(GL_QUADS);

            //glColor3f(1.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-6.0f,1.0f,4.0f);					 // Right front Of The Quad (top)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-6.0f,1.0f,1.0f);					// Right back Of The Quad (top)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-8.0f,1.0f,1.0f);				    // Left back Of The Quad (top)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-8.0f,1.0f,4.0f);				    // Left front Of The Quad (top)


            //glColor3f(0.0f,1.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-6.0f,-1.0f,4.0f);					// Right front Of The Quad (bottom)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-6.0f,-1.0f,1.0f);					// Right back Of The Quad (bottom)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-8.0f,-1.0f,1.0f);				    // Left back Of The Quad (bottom)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-8.0f,-1.0f,4.0f);				    // Left front Of The Quad (bottom)

        glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[2]);
        glBegin(GL_QUADS);

            //glColor3f(0.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-6.0f,1.0f,1.0f);					 // Top Right Of The Quad (Back)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-8.0f,1.0f,1.0f);					// Top Left Of The Quad (Back)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-8.0f,-1.0f,1.0f);					// Bottom Left Of The Quad (Back)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-6.0f,-1.0f,1.0f);					// Bottom Right Of The Quad (Back)


            //glColor3f(1.0f,0.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-6.0f,1.0f,4.0f);					// Top Right Of The Quad (Front)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-8.0f,1.0f,4.0f);					// Top Left Of The Quad (Front)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-8.0f,-1.0f,4.0f);					// Bottom Left Of The Quad (Front)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-6.0f,-1.0f,4.0f);				    // Bottom Right Of The Quad (Front)


    glEnd();
}

void pillar1()
{
    glBindTexture(GL_TEXTURE_2D, texture[4]);
        glBegin(GL_QUADS);

            //glColor3f(0.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,3.0f);					 // Top Right Of The Quad (Back)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,3.0f);					// Top Left Of The Quad (Back)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,3.0f);					// Bottom Left Of The Quad (Back)
            glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,-1.0f,3.0f);					// Bottom Right Of The Quad (Back)


            //glColor3f(1.0f,0.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,7.0f);					// Top Right Of The Quad (Front)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,7.0f);					// Top Left Of The Quad (Front)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,7.0f);					// Bottom Left Of The Quad (Front)
            glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,-1.0f,7.0f);				    // Bottom Right Of The Quad (Front)


    glEnd();
}

void pillar2()
{
    glBindTexture(GL_TEXTURE_2D, texture[4]);
        glBegin(GL_QUADS);

            //glColor3f(0.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,3.0f);					 // Top Right Of The Quad (Back)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,3.0f);					// Top Left Of The Quad (Back)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,3.0f);					// Bottom Left Of The Quad (Back)
            glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,-1.0f,3.0f);					// Bottom Right Of The Quad (Back)


            //glColor3f(1.0f,0.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(3.0f,1.0f,7.0f);					// Top Right Of The Quad (Front)
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,1.0f,7.0f);					// Top Left Of The Quad (Front)
            glTexCoord2f(1.0f,0.0f); glVertex3f(1.0f,-1.0f,7.0f);					// Bottom Left Of The Quad (Front)
            glTexCoord2f(0.0f,0.0f); glVertex3f(3.0f,-1.0f,7.0f);				    // Bottom Right Of The Quad (Front)


    glEnd();
}

void pillar3()
{
    glBindTexture(GL_TEXTURE_2D, texture[4]);
        glBegin(GL_QUADS);

            //glColor3f(0.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,3.0f);					 // Top Right Of The Quad (Back)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,3.0f);					// Top Left Of The Quad (Back)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,3.0f);					// Bottom Left Of The Quad (Back)
            glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,-1.0f,3.0f);					// Bottom Right Of The Quad (Back)


            //glColor3f(1.0f,0.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(5.0f,1.0f,7.0f);					// Top Right Of The Quad (Front)
            glTexCoord2f(1.0f,1.0f); glVertex3f(3.0f,1.0f,7.0f);					// Top Left Of The Quad (Front)
            glTexCoord2f(1.0f,0.0f); glVertex3f(3.0f,-1.0f,7.0f);					// Bottom Left Of The Quad (Front)
            glTexCoord2f(0.0f,0.0f); glVertex3f(5.0f,-1.0f,7.0f);				    // Bottom Right Of The Quad (Front)


    glEnd();
}

void pillar4()
{
    glBindTexture(GL_TEXTURE_2D, texture[9]);
        glBegin(GL_QUADS);

            //glColor3f(0.0f,0.0f,1.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,3.0f);					 // Top Right Of The Quad (Back)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,3.0f);					// Top Left Of The Quad (Back)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,3.0f);					// Bottom Left Of The Quad (Back)
            glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,-1.0f,3.0f);					// Bottom Right Of The Quad (Back)


            //glColor3f(1.0f,0.0f,0.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(7.0f,1.0f,7.0f);					// Top Right Of The Quad (Front)
            glTexCoord2f(1.0f,1.0f); glVertex3f(5.0f,1.0f,7.0f);					// Top Left Of The Quad (Front)
            glTexCoord2f(1.0f,0.0f); glVertex3f(5.0f,-1.0f,7.0f);					// Bottom Left Of The Quad (Front)
            glTexCoord2f(0.0f,0.0f); glVertex3f(7.0f,-1.0f,7.0f);				    // Bottom Right Of The Quad (Front)


    glEnd();
}



void road()
{
    glBindTexture(GL_TEXTURE_2D, texture[10]);
        glBegin(GL_QUADS);


            glTexCoord2f(0.0f,1.0f); glVertex3f(19.0f,-1.0f,7.5f);					// Right front Of The Quad (bottom)
            glTexCoord2f(1.0f,1.0f); glVertex3f(19.0f,-1.0f,4.5f);					// Right back Of The Quad (bottom)
            glTexCoord2f(1.0f,0.0f); glVertex3f(9.0f,-1.0f,4.5f);				    // Left back Of The Quad (bottom)
            glTexCoord2f(0.0f,0.0f); glVertex3f(9.0f,-1.0f,7.5f);				    // Left front Of The Quad (bottom)

        glEnd();
        glBindTexture(GL_TEXTURE_2D, texture[3]);
        glBegin(GL_QUADS);


            glTexCoord2f(0.0f,1.0f); glVertex3f(9.0f,-1.0f,7.5f);					// Right front Of The Quad (bottom)
            glTexCoord2f(1.0f,1.0f); glVertex3f(9.0f,-1.0f,4.5f);					// Right back Of The Quad (bottom)
            glTexCoord2f(1.0f,0.0f); glVertex3f(0.0f,-1.0f,4.5f);				    // Left back Of The Quad (bottom)
            glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f,-1.0f,7.5f);				    // Left front Of The Quad (bottom)

        glEnd();
        glBindTexture(GL_TEXTURE_2D, texture[10]);
        glBegin(GL_QUADS);


            glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f,-1.0f,7.5f);					// Right front Of The Quad (bottom)
            glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f,-1.0f,4.5f);					// Right back Of The Quad (bottom)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-5.0f,-1.0f,4.5f);				    // Left back Of The Quad (bottom)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-5.0f,-1.0f,7.5f);				    // Left front Of The Quad (bottom)

        glEnd();
        glBindTexture(GL_TEXTURE_2D, texture[11]);
        glBegin(GL_QUADS);


            glTexCoord2f(0.0f,1.0f); glVertex3f(-5.0f,-1.0f,7.5f);					// Right front Of The Quad (bottom)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-5.0f,-1.0f,4.5f);					// Right back Of The Quad (bottom)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-9.0f,-1.0f,4.5f);				    // Left back Of The Quad (bottom)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-9.0f,-1.0f,7.5f);				    // Left front Of The Quad (bottom)

        glEnd();
        glBindTexture(GL_TEXTURE_2D, texture[11]);
        glBegin(GL_QUADS);


            glTexCoord2f(0.0f,1.0f); glVertex3f(-9.0f,-1.0f,7.5f);					// Right front Of The Quad (bottom)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-9.0f,-1.0f,4.5f);					// Right back Of The Quad (bottom)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-19.0f,-1.0f,4.5f);				    // Left back Of The Quad (bottom)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-19.0f,-1.0f,7.5f);				    // Left front Of The Quad (bottom)

        glEnd();


}

void init(void)
{

    LoadGLTextures();

    //glEnable(GL_TEXTURE_2D);
    glClearColor(0.71, 0.89, 0.97, 0.0);

}

void display(void)
{

   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);      // GL_COLOR_BUFFER_BIT indicates that the buffer is currently enabled for color writing
   glMatrixMode(GL_PROJECTION);       // Specify which matrix is the current matrix mode
   glLoadIdentity();                  // Replace the current matrix with the identity matrix
   int w=glutGet(GLUT_WINDOW_WIDTH);
   int h=glutGet(GLUT_WINDOW_HEIGHT);
   gluPerspective(40,w/h,0.1,100);    // fovy specifies the field of view angle in degrees in y direction, aspect specifies aspect ratio that determines the field of view in the x direction, znear and zfar specifies the distance from viewer to the near and far clipping plane respectively (always positive)
   glMatrixMode(GL_MODELVIEW);       //  To allow transformation on 3D object

   glLoadIdentity();
   gluLookAt(                       //  eyex, eyey, eyez specify the position of the eye point, centerx, centery, centerz specify the position of reference point, upx, upy, upz specify the direction of up vector
               a,b,c,
               0,0,0,
               0,1,0
             );
   glPushMatrix();
   glRotatef(l_t,0.0f,1.0f,0.0f);

   glEnable(GL_TEXTURE_2D);
   building1();
   building2();
   building3();
   building4();
   building5();
   building6();
   building7();
   road();
   pillar1();
   pillar2();
   pillar3();
   pillar4();
   glDisable(GL_TEXTURE_2D);

    glPopMatrix();

   glutSwapBuffers(); // Force execution of GL commands in finite time

}

void my_keyboard(unsigned char key, int p, int q)
{
switch (key)
{
    case 'f':  //front view
        a=0.0,b=0.0,c=15.0,l_t=0;
        glutPostRedisplay();
		break;
    case 'b':  //back view
        a=0.0,b=0.0,c=-5.0,l_t=0;
        glutPostRedisplay();
		break;
    case 'l':  //left view
        a=-50.0,b=0.0,c=0.0,l_t=0;
        glutPostRedisplay();
		break;
    case 'r':  //right view
        a=50.0,b=0.0,c=0.0,l_t=0;
        glutPostRedisplay();
		break;
    case 't': //top view
        a=0.0,b=70.0,c=0.0001,l_t=0;
        glutPostRedisplay();
		break;
    case 'm': //bottom view
        a=0.0,b=-70.0,c=0.0001,l_t=0;
        glutPostRedisplay();
		break;
     default:
        break;
}
}

void spinDisplay_left(void)		//spin speed
{

    l_t =l_t+0.005;
    glutPostRedisplay();
}

void specialKeys(int key,int x,int y)
{
    if(key==GLUT_KEY_RIGHT)
           a+=0.02;
    else if(key==GLUT_KEY_LEFT)
            a-=0.02;
    else if(key==GLUT_KEY_UP)
            c--;
   else if(key==GLUT_KEY_DOWN)
            c++;
    glutPostRedisplay();
}

void mouse(int button, int state, int s, int t)
{

   switch (button)
   {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_left);
         break;
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
            glutIdleFunc(NULL);
         break;
      default:
         break;
   }
}

int main()
{
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize (800, 800);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("3D View of a Quad");
	init();
    glutSpecialFunc(specialKeys);
    glutDisplayFunc(display);
    glEnable(GL_DEPTH_TEST);
    glutKeyboardFunc(my_keyboard);
    glutMouseFunc(mouse);
	glutMainLoop();
	return 0;
}
