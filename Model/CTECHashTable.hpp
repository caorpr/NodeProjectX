//
//  CTECHashTable.hpp
//  NodeProjectX
//
//  Created by Anderson, Clayton on 5/5/16.
//  Copyright © 2016 Anderson, Clayton. All rights reserved.
//

#ifndef CTECHashTable_hpp
#define CTECHashTable_hpp
#include "HashNode.cpp"



namespace CTECData
{
    
    
    template <class Type>
    class CTECHashTable
    {
    private:
        int size;
        int capacity;
        HashNode<Type> * internalStorage;
        double efficiencyPercentage;
        
        int findPosition(HashNode<Type> currentNode);
        int handleCollision(HashNode<Type> currentNode);
        void updateCapacity();
        
        int getNextPrime();
        bool isPrime(int candidateNumber);
    public:
        CTECHashTable();
        ~CTECHashTable();
        
        void add(HashNode<Type> currentNode);
        bool remove(HashNode<Type> currentNode);
        bool contains(HashNode<Type> currentNode);
        int getSize();
        
    };
}

#endif /* CTECHashTable_hpp */