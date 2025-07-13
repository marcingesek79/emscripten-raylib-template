#include "raylib.h"

[[nodiscard]] static Vector2 getTextCenteredPosition(const char* text, int font_size, int screen_width, int screen_height)
{
    int text_width {MeasureText(text, font_size)};
    return {(screen_width - text_width) / 2.0f, (screen_height - font_size) / 2.0f};
}

int main(void)
{
    constexpr int screen_width {800};
    constexpr int screen_height {600};
    constexpr int font_size {20};

    InitWindow(screen_width, screen_height, "Template");

    const char* text = "Hello world!";
    Vector2 text_position = getTextCenteredPosition(text, font_size, screen_width, screen_height);

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText(text, text_position.x, text_position.y, font_size, BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}