#define GLAD_GL_IMPLEMENTATION
#include <glad/glad.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

class Game 
{
public:
    Game();
    ~Game();
    
    int init();
    void start();
private:
    bool isInitialized {false};
    GLFWwindow *window;
};