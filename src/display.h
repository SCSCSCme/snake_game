#ifndef DISPLAY_H_
#define DISPLAY_H_

#include <vector>

struct RenderObject {
  char symbol;
  int x, y;
};

class Display {
public:
  void draw();

private:
  std::vector<RenderObject> list;
};

#endif