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





namespace CTECData
{
    template <class Type>
    class CTECBinaryTree
    {
    private:
        int size;
        TreeNode<Type> * root;
        int height;
        bool balanced;
        void calculatedSize(TreeNode<Type>  currentNode);
        bool contains(Type value, CTECBinaryTree<Type> * currentTree);
    public:
        CTECBinaryTree();
        ~CTECBinaryTree();
        bool insert(const Type& value);
        Type remove(const Type& value);
        bool contains(Type value);
        int getSize();
        int getHeight();
        bool isBalanced();
        TreeNode<Type> * getRoot();
        void preorderTraversal(TreeNode<Type> * currentNode);
        void inorderTraversal(TreeNode<Type> * currentNode);
        void postorderTraversal(TreeNode<Type> * currentNode);
    };
}