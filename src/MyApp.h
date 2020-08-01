#pragma once

#include "Application.h"
#include "GameObject.h"

#define STATE_START 0
#define STATE_GAME  1

class MyApp : public Application {
private:
    GameObject *m_Bricks = new GameObject[30];
    GameObject m_Platform;
    GameObject m_Ball;
    Shader m_SimpleShader = Shader("assets/brick.vert", "assets/brick.frag");
    Shader m_BallShader = Shader("assets/brick.vert", "assets/ball.frag");

    int padding_x = 50;
    int padding_y = 200;
    int spacing = 10;

    int m_State = STATE_START;

    const float topSpeed = 14.f;
    // float curSpeed = 0.f;
    const float friction = 3.4f;
    const float accelerationSpeed = 1.1f;
    float curAccelerationSpeed = .0f;
    const float topAccelerationSpeed = 2.5f;
public:
  MyApp(const char *title, int width, int height);

  void Start();
  void onUpdate();
  void onDraw();
  void onKeyCallback(int key, int action);
};