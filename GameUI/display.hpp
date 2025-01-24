#pragma once
#include "../GameFeatures/gamefeatures.hpp"

template<typename T>
class Display:public GameFeatures{
    public:
        double width = 0;
        double height = 0;
        T * display = nullptr;
    public:
        Display();
        Display(double WIDTH, double HEIGHT);
        void load()override;
        void destroy()override;
        void clear_display();
        void render_display();
        ~Display();
};
