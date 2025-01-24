#include "display.hpp"
/*---------------------------------------
                Display
---------------------------------------*/
template<typename T>
Display<T>::Display() = default;
template<typename T>
Display<T>::Display(double WIDTH, double HEIGHT):width(WIDTH), height(HEIGHT){}
template<typename T>
void Display<T>::load(){}
template<typename T>
void Display<T>::destroy(){}
template<typename T>
void Display<T>::clear_display(){}
template<typename T>
void Display<T>::render_display(){}
template<typename T>
Display<T>::~Display(){destroy();}
