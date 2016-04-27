//
//  CTECBinaryTree.cpp
//  NodeProjectX
//
//  Created by Anderson, Clayton on 4/13/16.
//  Copyright © 2016 Anderson, Clayton. All rights reserved.
//

#include "CTECBinaryTree.hpp"
using namespace CTECData;
using namespace std;



template <class Type>
CTECBinaryTree<Type> :: CTECBinaryTree()
{
    this->root = nullptr;
    this-size = 0;
    this-height = 0;
    this-balanced = true;
}

template <class Type>
int CTECBinaryTree<Type> :: getSize()
{
    size = 0;
    calculatedSize(root);
    return size;
}
template<class Type>
void CTECBinaryTree<Type> :: calculatedSize(TreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        calculateSize(currentNode->getLeftChild());
        calculateSize(currentNode->getRightChild());
    }
}
                                 
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
}
    
template <class Type>
bool CTECBinaryTree<Type> :: contains(Type value)
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
      return isInTree;
}

                                 
template <class Type>
bool CTECBinaryTree<Type> :: contains(Type value, TreeNode<Type> * currentTree)
{
    bool isInTree = false;
    
    if(currentTree != nullptr)
    {
        if(currentTree>getRoot()->getValue() == value)
        {
            isInTree = true;
        }
        else
        {
            if(value < currentTree->getRoot()->getValue())
            {
                isInTree= contains(value, currentTree->getRoot()->getLeftChild());
            }
            else
            {
                isInTree = contains(value, currentTree->getRoot()->getRightChild());
            }
        }
    }
    return isInTree;
}



template <class Type>
bool CTECBinaryTree<Type> :: insert(const Type& value)
{
    if(contains(value))
    {
        return false;
    }
    else
    {
        TreeNode<Type> * currentNode = root;
        TreeNode<Type> * trailNode;
        
        if(root == nullptr)
        {
            root = new TreeNode<Type>(value);
        }
        else
        {
            while (currentNode != nullptr)
            {
                trailNode = currentNode;
                
                if (currentNode->getValue() < value)
                {
                    currentNode = currentNode->getRightChild();
                }
                else
                {
                    currentNode = currentNode->getLeftChild();
                }
            }
            if(trailNode->getValue() > value)
            {
                TreeNode<Type> * insertedNode = new TreeNode<Type>(value, trailNode);
                trailNode->setLeftChild(insertedNode);
            }
            else
            {
                TreeNode<Type> * insertedNode = new TreeNode<Type>(value, trailNode);
                trailNode->setRightChild(insertedNode);
            }
        }
    }
    return true;
}



template <class Type>
TreeNode<Type> * CTECBinaryTree<Type> :: getRightMostChild(TreeNode<Type> * leftSubTree)
{
    TreeNode<Type> * rightNode = leftSubTree;
    while(rightNode->getRightChild() != nullptr)
    {
        rightNode = rightNode->getRightChild();
    }
    return rightNode;
}






template <class Type>
TreeNode<Type> * CTECBinaryTree<Type> :: getLeftMostChild(TreeNode<Type> * rightSubTree)
{
    TreeNode<Type> * leftNode = rightSubTree;
    while(leftNode->getRightChild() != nullptr)
    {
        leftNode = leftNode->getLeftChild();
    }
    return leftNode;
}




