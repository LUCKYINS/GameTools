#include "shape2d.hpp"
/*---------------------------------------
                Shape
---------------------------------------*/
Shape2D::Shape2D()noexcept=default;
Shape2D::Shape2D(VEC2 POS, COLOR FILL, COLOR OUTILINE, double THICKNESS)noexcept:pos1(POS), fill(FILL), outline(OUTILINE), line_thickness(THICKNESS){};
/*---------------------------------------
                Rect
---------------------------------------*/
Rect::Rect()noexcept=default;
Rect::Rect(double WIDTH, double HEIGHT,VEC2 POS, COLOR FILL, COLOR OUTILNE, double ROUNDED, double THICKNESS)noexcept:width(WIDTH), height(HEIGHT),Shape2D(POS, FILL, OUTILNE, THICKNESS), rounded(ROUNDED){}
void Rect::render(){}
/*---------------------------------------
                Cir
---------------------------------------*/
Cir::Cir()noexcept=default;
Cir::Cir(double RADIUS,VEC2 CENTER ,COLOR FILL, COLOR OUTLINE,double THICKNESS)noexcept:radius(RADIUS), Shape2D(CENTER, FILL, OUTLINE, THICKNESS){}
void Cir::render(){}
/*---------------------------------------
                LINE
---------------------------------------*/
Line::Line()noexcept=default;
Line::Line(VEC2 POS1, VEC2 POS2, COLOR FILL, double THICKNESS)noexcept:pos2(POS2),Shape2D(POS1, FILL, FILL, THICKNESS){}
void Line::render(){}
/*---------------------------------------
                TEXT
---------------------------------------*/
template<typename T>
Text<T>::Text()noexcept=default;
template<typename T>
Text<T>::Text(std::string TEXT, std::string FONT_PATH, uint16_t FONT_SIZE, VEC2 POS, COLOR FILL):text(TEXT),font_path(FONT_PATH),font_size(FONT_SIZE),Shape2D(POS, FILL, FILL){}
template<typename T>
void Text<T>::load(){};
template<typename T>
void Text<T>::render(){};
template<typename T>
void Text<T>::destroy(){};
template<typename T>
Text<T>::~Text(){destroy();}
