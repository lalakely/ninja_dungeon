#ifndef WINDOW_HPP
#define WINDOW_HPP

#include "Ogre.h"
#include "OgreApplicationContext.h"
#include "OgreInput.h"
#include "OgreRTShaderSystem.h"
#include <iostream>

using namespace Ogre;
using namespace OgreBites;

class Window
        : public ApplicationContext
        , public InputListener
{
public:
    Window();
    virtual ~Window() {}

    //Attributes
    Root* root;
    SceneManager* scnMgr;
    RTShader::ShaderGenerator* shadergen;
    Light* light;
    SceneNode* lightNode;
    Camera* cam;
    SceneNode* camNode;

    void setup();
    bool keyPressed(const KeyboardEvent& evt);
    void createLight();
    void createCam();
    void createViewport();
    void createScene();
};



#endif