//
//  Network.hpp
//  AbletonTestModularMadness
//
//  Created by Sander van Kasteel on 29/11/2018.
//  Copyright © 2018 Sander van Kasteel. All rights reserved.
//

#ifndef Network_hpp
#define Network_hpp

#include <stdio.h>
#include <map>
#include "Module/ModuleFactory.hpp"

class Network {
private:
    ModuleFactory* mf;
    std::map<std::string,BaseModule*> moduleRegistry = {};
    std::list<BaseModule*> modulesInOrder = {};
public:
    Network();
    ~Network();
    void makeModule(const std::string &name, const std::string &type);
    void makeConnection(const std::string &name1, const std::string &name2);
    void process(const std::string &input, std::string &output);
    void reset();
};

#endif /* Network_hpp */
