//
//  CTECBinaryTree.cpp
//  NodeProjectX
//
//  Created by Anderson, Clayton on 4/13/16.
//  Copyright © 2016 Anderson, Clayton. All rights reserved.
//

#include "CTECBinaryTree.hpp"
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
        void inorderTraversal(treeNode<Type> * currentNode);
        void postorderTraversal(TreeNode<Type> * currentNode);
    };
}