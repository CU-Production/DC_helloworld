#include <raylib.h>
#include <rlgl.h>
#include <kos/init.h>
#include <kos/dbgio.h>

int main(int argc, char* argv[]) {
  const int screenWidth = 640;
  const int screenHeight = 480;

  const int H_WIDTH = screenWidth / 2;
  const int Q_WIDTH = screenWidth / 4;
  const int H_HEIGHT = screenHeight / 2;
  const int Q_HEIGHT = screenHeight / 4;


  InitWindow(screenWidth, screenHeight, "kos window");

  while (!WindowShouldClose()) {
    BeginDrawing();
      ClearBackground(RAYWHITE);
        rlBegin(RL_TRIANGLES);
          rlColor4ub(255, 0, 0, 255);
          rlVertex2f(H_WIDTH-Q_WIDTH, H_HEIGHT+Q_HEIGHT);
          rlColor4ub(0, 255, 0, 255);
          rlVertex2f(H_WIDTH+Q_WIDTH, H_HEIGHT+Q_HEIGHT);
          rlColor4ub(0, 0, 255, 255);
          rlVertex2f(        H_WIDTH, H_HEIGHT-Q_HEIGHT);
        rlEnd();

      DrawText("Hello World!", 90, 200, 20, BLACK);
    EndDrawing();
  }

   CloseWindow();

  return 0;
}