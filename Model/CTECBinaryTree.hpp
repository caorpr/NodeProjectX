//
//  CTECBinaryTree.hpp
//  NodeProjectX
//
//  Created by Anderson, Clayton on 4/13/16.
//  Copyright © 2016 Anderson, Clayton. All rights reserved.
//

#ifndef CTECBinaryTree_hpp
#define CTECBinaryTree_hpp

#include <stdio.h>

#endif /* CTECBinaryTree_hpp */



template <class Type>
void CTECBinaryTree<Type> :: preorderTraversal(TreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        cout <<currentNode->getValue() << " " ;
        preorderTraversal(currentNode->getLeftChd());
        preorderTraversal(currentNode->getRightChild());
    }
}

template <class Type>
void CTECBinaryTree<Type> :: inorderTraversal(TreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        preorderTraversal(currentNode->getLeftChd());
        cout <<currentNode->getValue() << " " ;
        preorderTraversal(currentNode->getRightChild());
    }
}


template <class Type>
void CTECBinaryTree<Type> :: postorderTraversal(TreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        
        preorderTraversal(currentNode->getLeftChd());
        preorderTraversal(currentNode->getRightChild());
        cout <<currentNode->getValue() << " " ;
    }
    
    
template <class Type>
    bool CTECBInarytree<Type> :: contains(Type value)
    {
        bool isInTree = false;
        
        if(root != nullptr)
        {
            if(root->getValue() == value)
            {
                isInTree = true;
            }
            else
            {
                if(value < root->getValue())
                {
                    isInTree = contains(value, root->getLeftChild());
                }
                else
                {
                    isInTree = contains(value, root->getRightChild());
                }
            }
        }
    }
    return isInTree;
}