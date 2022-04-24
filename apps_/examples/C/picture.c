#include <vesa.h>


#define x_start 768
#define x_end 1024


int main(){
    for (int x = x_start; x != x_end; x++){
        for (int y = 0; y != 128; y++){
            draw_pixel(x, y, VESA_LIGHT_BLUE);
        }
    }

    for (int x = 800; x != 860; x++){
        for (int y = 48; y != 128; y++){
            draw_pixel(x, y, 0x8b4513);
        }
    }
    for (int x = 800; x != 860; x++){
        for (int y = 0; y != 16; y++){
            draw_pixel(x, y, VESA_LIGHT_GREEN);
        }
    }
    for (int x = 780; x != 880; x++){
        for (int y = 16; y != 32; y++){
            draw_pixel(x, y, VESA_LIGHT_GREEN);
        }
    }

    for (int x = 768; x != 900; x++){
        for (int y = 32; y != 48; y++){
            draw_pixel(x, y, VESA_LIGHT_GREEN);
        }
    }
    

    for (int x = x_start; x != x_end; x++){
        for (int y = 128; y != 192; y++){
            draw_pixel(x, y, VESA_GREEN);
        }
    }

    return 0;
}