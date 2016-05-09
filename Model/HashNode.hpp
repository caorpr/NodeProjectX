//
//  HashNode.hpp
//  NodeProjectX
//
//  Created by Anderson, Clayton on 5/9/16.
//  Copyright © 2016 Anderson, Clayton. All rights reserved.
//

#ifndef HashNode_hpp
#define HashNode_hpp

#include <iostream>



namespace CTECData
{
    template <class Type>
    class HashNode
    {
    private:
        int key;
        Type value;
    public:
        HashNode(int key, const Type& value);
        int getKey();
        Type GetValue();
    };
}






#endif /* HashNode_hpp */
