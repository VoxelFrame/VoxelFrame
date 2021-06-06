#pragma once
#include "glad/glad.h"
#include "GLFW/glfw3.h"

#include "base.h"
#include "paecs/paecs.h"
#include "game/game.h"
#include "graph/_Graph.h"
#include "net/_net.h"
#include "io/_IO.h"

class Graph;
class Game;
////////////////////////////////////////
struct A
{
    int id;
};
struct B
{
    int id;
    char testChar;
};

void helloworld_sys(B &a);

//the global one
//全局唯一单例 存储，访问 所有动静态资源
class App
{
private:
    /* data */
public:
    // Scene scene;
    std::shared_ptr<paecs::Scene> ecsPtr;
    std::shared_ptr<Game> gamePtr;
    std::shared_ptr<Graph> graphPtr;
    std::shared_ptr<IO> ioPtr;

    // timing
    float deltaTime = 0.0f; // time between current frame and last frame
    float lastFrame = 0.0f;

    // app()
    // {

    // }
    inline void calcTimePerLoop()
    {
        float currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;
    }
    void run();
    static App &getInstance();
};

// extern app _g_app;