#pragma once
#include "../GameFeatures/gamefeatures.hpp"

struct COLOR{uint8_t r,g, b;};

const COLOR COLOR_BLACK   = {0, 0, 0};
const COLOR COLOR_RED     = {255, 0, 0};
const COLOR COLOR_GREEN   = {0, 255, 0};
const COLOR COLOR_BLUE    = {0, 0, 255};
const COLOR COLOR_YELLOW  = {255, 255, 0};
const COLOR COLOR_MAGENTA = {255, 0, 255};
const COLOR COLOR_CYAN    = {0, 255, 255};
const COLOR COLOR_GREY    = {200, 200, 200};
const COLOR COLOR_ORANGE  = {255,165, 0};
const COLOR COLOR_WHITE   = {255, 255, 255};
const COLOR COLOR_SLEVER  = {192,192,192};
const COLOR COLOR_GOLD    = {255,215,0};


struct VEC2{double x, y;};

class Shape2D:public GameFeatures{
    public:
        Shape2D()noexcept;
        Shape2D(VEC2 POS1, COLOR FILL, COLOR OUTLINE=COLOR_BLACK, double THICKNESS=1)noexcept;
        double line_thickness=1;
        VEC2 pos1={};
        COLOR fill={}, outline={};
};
class Rect: public Shape2D{
    public:
        Rect()noexcept;
        double rounded=0,width=0, height=0;
        Rect(double WIDTH, double HEIGHT,VEC2 POS,COLOR FILL, COLOR OUTILNE=COLOR_BLACK,double ROUNDED=0,double THICKNESS=1)noexcept;
        bool rect_in_rect(Rect);
        void render()override;
};
class Cir:public Shape2D{
    public:
        Cir()noexcept;
        double radius=0;
        Cir(double RADIUS,VEC2 CENTER,COLOR FILL, COLOR OUTLINE=COLOR_BLACK,double THICKNESS=1)noexcept;
        void render()override;
        bool rect_in_circle(Rect rect);
};
class Line:public Shape2D{
    public:
        Line()noexcept;
        VEC2 pos2={};
        Line(VEC2 POS1, VEC2 POS2, COLOR FILL,double THICKNESS=1)noexcept;
        void render()override;
};
template<typename T>
class Text:public Shape2D{
    public:
        Text()noexcept;
        std::string text="", font_path="";
        uint16_t font_size=0;
        T *font=nullptr;
        Text(std::string TEXT,std::string FONT_PATH, uint16_t FONT_SIZE, VEC2 POS, COLOR FILL);
        void load()override;
        void render()override;
        void destroy()override;
        ~Text();
};
