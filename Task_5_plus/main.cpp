#include "tree.h"
int main() {

    BinaryTree binaryTree3(1);
    binaryTree3.clear();
    cout << binaryTree3.allPositive() << endl;

    vector<bool> arr1{};
    BinaryTree binaryTree1(50);

    arr1.push_back(false);
    binaryTree1.insert(20, arr1);
    arr1.push_back(false);
    binaryTree1.insert(10, arr1);
    arr1.pop_back();
    arr1.push_back(true);
    binaryTree1.insert(33, arr1);
    arr1.pop_back();
    arr1.pop_back();
    arr1.push_back(true);
    binaryTree1.insert(70, arr1);
    arr1.push_back(false);
    binaryTree1.insert(60, arr1);
    arr1.pop_back();
    arr1.push_back(true);
    binaryTree1.insert(100, arr1);
    cout << binaryTree1;
    cout << endl;
    cout << endl;

    cout << binaryTree1.countOfEven() << endl; //6
    cout << binaryTree1.average() << endl; //49
    cout << binaryTree1.allPositive() << endl; //true

    vector<bool> bArr = binaryTree1.searchElem(1);

    vector<bool> bArr1 = binaryTree1.searchElem(100);

   if (bArr1 == arr1) {
        cout << true;
    }
    else {
        cout << false;
    }

    cout << endl;
    cout << endl;

    binaryTree1.deleteLeaves();
    cout << binaryTree1;
    cout << endl;

    BinaryTree bin(binaryTree1);
    cout << bin << endl;
    cout << endl;

    binaryTree1.clear();

    cout << binaryTree1;
    cout << bin << endl;

}