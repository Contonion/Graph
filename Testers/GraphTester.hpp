//
//  GraphTester.hpp
//  Graph
//
//  Created by Jackman, Cade on 3/18/19.
//  Copyright © 2019 CadeJackman. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include "../Model/NonLinear/Graph.hpp"
#include <iostream>

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
    
public:
    void testGraphs();
};

#endif /* GraphTester_hpp */
