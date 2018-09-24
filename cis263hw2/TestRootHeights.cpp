#include <iostream>
#include "BinarySearchTree.h"
#include "AvlTree.h"

using namespace std;

    // Test program
int main( )
{
    BinarySearchTree<int> t;
    AvlTree < int > avl;
    int n;
    while(cin >> n) {
      t.insert(n);
      avl.insert(n);
    }

    cout << "The height of the root of the BST is: " << t.heightRoot() << endl;
    cout << "The height of the root of the AVL tree is: " << avl.heightRoot() << endl;

    return 0;
}
