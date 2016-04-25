//
//  CTECGraph.hpp
//  NodeProjectX
//
//  Created by Anderson, Clayton on 4/25/16.
//  Copyright © 2016 Anderson, Clayton. All rights reserved.
//

#ifndef CTECGraph_hpp
#define CTECGraph_hpp

#include <stdio.h>


namespace CTECData
{
    template <class Type>
    class CTECGraph
    {
    private:
        static const int MAXIMUM = 20;
        bool adjacencyMatx [MAXIMUM][MAXIMUM];
        Type labels[MAXIMUM];
        int manyVertices;
    public:
        CTECGraph();
        ~CTECGraph();
        
        
        
        
    };
}

#endif /* CTECGraph_hpp */
