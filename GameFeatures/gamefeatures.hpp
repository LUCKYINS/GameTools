#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include <cstdint>
#include <fstream>
#include <filesystem>

class GameFeatures{
    /* Interface */
    public:
        virtual void load(){}
        virtual void event(){}
        virtual void render(){}
        virtual void update(){}
        virtual void loop(){}
        virtual void destroy(){}
};
