#include "../Engine/Window.hpp"


Window::Window()
    : ApplicationContext("Ninja Dungeon")
{
}

void Window::setup()
{
    
    ApplicationContext::setup();
    addInputListener(this);
    
    root = getRoot();

    createScene();
    createLight();
    createCam();
    createViewport();

 
}

void Window::createLight(){
    scnMgr->setAmbientLight(ColourValue(0.5, 0.5, 0.5));
    light = scnMgr->createLight("MainLight");
    lightNode = scnMgr->getRootSceneNode()->createChildSceneNode();
    lightNode->attachObject(light);
    lightNode->setPosition(20, 80, 50);
}

void Window::createCam(){
    camNode = scnMgr->getRootSceneNode()->createChildSceneNode();
    cam = scnMgr->createCamera("myCam");
    cam->setNearClipDistance(5); // specific to this sample
    cam->setAutoAspectRatio(true);
    camNode->attachObject(cam);
    camNode->setPosition(0, 0, 140);
}

void Window::createScene(){
    scnMgr = root->createSceneManager();
    shadergen = RTShader::ShaderGenerator::getSingletonPtr();
    shadergen->addSceneManager(scnMgr);
}

void Window::createViewport(){
    getRenderWindow()->addViewport(cam);
}

bool Window::keyPressed(const KeyboardEvent& evt)
{
    if (evt.keysym.sym == SDLK_ESCAPE)
    {
        getRoot()->queueEndRendering();
    }
    return true;
}

