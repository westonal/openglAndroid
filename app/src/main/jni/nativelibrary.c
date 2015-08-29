#include <GLES2/gl2.h>

void initializeOpenGL() 
{
	glClearColor(1.0f, 1.0f, 0.0f, 1.0f);
}
void resizeViewport(int newWidth, int newHeight) 
{
	glViewport(0, 0, newWidth, newHeight);
}
void renderFrame() 
{
	glClear(GL_COLOR_BUFFER_BIT);
}
