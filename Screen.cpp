#include "Screen.h"
#include <thread>
#include "windows.h"
Screen::Screen(GLint WIDTH, GLint HEIGHT, SimpleSorter* Solution):_Solution(Solution)
{
	window = initWindow(WIDTH, HEIGHT);
}

void Screen::DisplayRows(PixelBlockRow *PBR)
{
	//	glfwSwapBuffers(window);
		_Solution->Sort(PBR);

}

class temp {

public:
	static void foo() {};
};

void Screen::Display(Container* PBC, SimpleSorter *Solution)
{

	while (!glfwWindowShouldClose(window))
	{
		// Scale to window size
		GLint windowWidth, windowHeight;
		glfwGetWindowSize(window, &windowWidth, &windowHeight);
		glViewport(0, 0, windowWidth, windowHeight);

		// Draw stuff
		glClearColor(0.0f, 0.0f, 0.0f, 0.0f);   // Set the background color
		glClear(GL_COLOR_BUFFER_BIT);

		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrtho(0, WIDTH, HEIGHT, 0, 0, 1);

		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();

	PBC->DrawContainer();// 0, 0);

	std::vector<PixelBlockRow> row = PBC->getRows();

	for ( int i =0; i <PBC->getRows().size(); i ++)
	{
		PixelBlockRow *pbr = &row[i];
		glfwMakeContextCurrent(NULL);
		std::thread *thread1 = new std::thread(&Screen::DisplayRows, this, pbr );//, window, std::ref(row));
		//thread1->join();
		//glfwSwapBuffers(window);
		//glfwMakeContextCurrent(NULL);
		//DisplayRows(pbr);

		}
		getchar();
	}
}

 void Screen::TEST()
{
	glfwSwapBuffers(window);
}

GLFWwindow* Screen::initWindow(const int resX, const int resY)
{
	if (!glfwInit())
	{
		fprintf(stderr, "Failed to initialize GLFW\n");
		return NULL;
	}
	glfwWindowHint(GLFW_SAMPLES, 4); // 4x antialiasing

									 // Open a window and create its OpenGL context
	GLFWwindow* window = glfwCreateWindow(resX, resY, "Sorter", NULL, NULL);

	if (window == NULL)
	{
		fprintf(stderr, "Failed to open GLFW window.\n");
		glfwTerminate();
		return NULL;
	}

	glfwMakeContextCurrent(window);
	//	glfwSetKeyCallback(window,controls);

	// Get info of GPU and supported OpenGL version
	printf("Renderer: %s\n", glGetString(GL_RENDERER));
	printf("OpenGL version supported %s\n", glGetString(GL_VERSION));

	glEnable(GL_DEPTH_TEST); // Depth Testing
	glDepthFunc(GL_LEQUAL);
	glDisable(GL_CULL_FACE);
	glCullFace(GL_BACK);
	return window;
}

void Screen::keyCallBack(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (action == GLFW_PRESS)
		if (key == GLFW_KEY_ESCAPE)
			glfwSetWindowShouldClose(window, GL_TRUE);
}
