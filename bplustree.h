#ifndef _BPLUSTREE_H_

#include <iostream>
#include <string>
#include <vector>
#include "params.h"

struct BNode {
    unsigned char data[PAGE_SIZE_IN_BYTES];
};

template <class KeyT, class DataT>
class BPlusTree {
public:
    BPlusTree(bool hasDuplicatesIn) {
        
    }

    void insertKeyVal(KeyT key, DataT &data) {

    }

    void deleteKeyVal(KeyT key) {

    }

    DataT findKeyVal(KeyT key) {

    }

    KeyT findKey(KeyT key) {
        
    }

    std::vector<DataT> findLessThan(KeyT key) {

    }

    std::vector<DataT> findGreaterThan(KeyT key) {

    }

    ~BPlusTree();
private:
    bool hasDuplicates;
    int order;
    BNode* root;
};

#endif