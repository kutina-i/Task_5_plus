#pragma once
#include <iostream>
#include <utility>
#include <ostream>
#include <istream>
#include <vector>

using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node() :data(0), left(nullptr), right(nullptr) {}
    Node(int _data, Node* leftPtr, Node* rightPtr) : data(_data), left(leftPtr), right(rightPtr) {}
};

class BinaryTree {
public:
    using PNode = Node*;
    BinaryTree();
    explicit BinaryTree(int x);
    void clear();
    ~BinaryTree();
    BinaryTree(const BinaryTree& obj);
    BinaryTree(BinaryTree&& obj) noexcept;
    bool operator==(const BinaryTree& obj);
    bool operator!=(const BinaryTree& obj);
    BinaryTree& operator=(const BinaryTree& obj);
    BinaryTree& operator=(BinaryTree&& obj) noexcept;
    void insert(int x, const vector<bool>& boolArr);
    friend ostream& operator<<(ostream& out, BinaryTree& obj);
    unsigned countOfEven();
    bool allPositive();
    void deleteLeaves();
    double average();
    vector<bool> searchElem(int x);
    void levelPrint(ostream& out);
    void levelPrint(PNode elem, unsigned level, ostream& out);
private:
    void clear(PNode elem);
    bool isEqual(PNode elem, PNode elem1);
    PNode copyTree(PNode obj);
    unsigned countOfEven(PNode elem);
    bool allPositive(PNode elem);
    bool deleteLeaves(PNode elem);
    void average(PNode elem, pair<long, int>& values);
    bool searchElem(PNode elem, vector<bool>& arr, int x);
    PNode root;
};
