#include <iostream>
#include "raylib.h"

using namespace std;

Color green  = {173, 204, 96, 2};
Color darkgreen = {43, 51, 24, 255};

int cell_size = 30;
int cellCount = 25;
class food
{
    public:
        Vector2 position = {5, 6};
        void Draw()
        {
            DrawRectangle(x, y, w, h, color);
        }
};
int main(void)
{
    cout << "Starting the game..."<<endl;
    InitWindow(cell_size*cellCount, cell_size*cellCount, "Retro Snake");
    SetTargetFPS(60);

    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(green);
        
        EndDrawing();
    }
    CloseWindow();
    return 0;
}