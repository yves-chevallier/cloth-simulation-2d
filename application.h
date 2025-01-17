#pragma once

#include "cloth.h"
#include "mouse.h"
#include "renderer.h"

#include <vector>

class Application {
  Renderer *renderer = nullptr;
  Mouse *mouse = nullptr;
  Cloth *cloth = nullptr;

  bool isRunning = false;

  Uint32 lastUpdateTime;

public:
  Application() = default;
  ~Application() = default;

  bool IsRunning() const;

  void Setup(int clothWidth, int clothHeight, int clothSpacing);
  void Input();
  void Update();
  void Render() const;
  void Destroy();
};