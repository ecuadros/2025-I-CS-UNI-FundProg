#include <iostream>
#include "foldtraverse.hpp"

using namespace std;

//Variadic
// traverse tree, using fold expression:
template<typename T, typename ... TP> 
static Node* traversex (T np, TP ... paths)
{
    return (np ->* ... ->* paths);      // np ->* paths1 ->* paths2 ->* paths3 ...
}

void DemoFoldTraverse(){
    // init binary tree structure:
    Node* root = new Node{5};
    root->subLeft = new Node{2};
    root->subLeft->subRight = new Node{4};
    root->subLeft->subRight->subLeft = new Node{3};
    root->subLeft->subLeft = new Node{1};
    root->subRight = new Node{10};
    root->subRight->subRight = new Node{20};
    root->subRight->subLeft = new Node{8};
    root->subRight->subLeft->subRight = new Node{9};

    // traverse binary tree:
    Node* node = Node::traverse(root, Node::right, Node::left, Node::right);
    cout << node->getValue() << '\n';
    node = root ->* Node::right ->* Node::left ->* Node::right;
    cout << node->getValue() << '\n';
    node = root -> subRight -> subLeft -> subRight;
    cout << node->getValue() << '\n';

    node = ::traversex(root, Node::left, Node::right, Node::left);
    cout << node->getValue() << '\n';
    node = root ->* Node::left ->* Node::right ->* Node::left;
    cout << node->getValue() << '\n';
    node = root -> subLeft -> subRight -> subLeft;
    cout << node->getValue() << '\n';
}