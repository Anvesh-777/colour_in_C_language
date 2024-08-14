#include <stdio.h>
int main() 
{    
    const char* message = "Happy Independence Day";
    
    // ANSI escape code to reset formatting
    const char* reset = "\033[0m";

    // Foreground color codes (30-37 are standard, 90-97 are bright colors)
    int color_codes[] = {30, 31, 32, 33, 34, 35, 36, 37, 90, 91, 92, 93, 94, 95, 96, 97};
    int num_colors = sizeof(color_codes) / sizeof(color_codes[0]);

    for(int i = 0; i < num_colors; i++) {
        printf("%c[%dm%s%s\n", 27, color_codes[i], message, reset);
    }

    return 0;
}

