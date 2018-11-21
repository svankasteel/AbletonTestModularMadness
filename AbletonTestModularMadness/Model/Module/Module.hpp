//
//  Module.hpp
//  AbletonTestModularMadness
//
//  Created by Sander van Kasteel on 21/11/2018.
//  Copyright © 2018 Sander van Kasteel. All rights reserved.
//

#ifndef Module_hpp
#define Module_hpp

#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

class Module {
protected:
    list<Module> connectionsOut;
    string output;
public:
    virtual void process(const string &input, string &output);
};

#endif /* Module_hpp */
