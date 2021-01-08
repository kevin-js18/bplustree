#ifndef _BPLUSTREE_H_

#include <cmath>
#include <iostream>
#include <string>
#include <type_traits>
#include <vector>
#include "params.h"

struct BNode {
    unsigned char data[PAGE_SIZE_IN_BYTES];
};

template <class KeyT, class DataT>
class BPlusTree {
public:
    BPlusTree() {
        static_assert(std::is_trivially_copyable<KeyT>::value, "Invalid key type");
        searchKeySize = sizeof(KeyT);
        pointerSize = sizeof(void*);
        dataEntrySize = searchKeySize + pointerSize;

        maxFanout = (PAGE_SIZE_IN_BYTES - 3*(static_cast<uint32_t>(sizeof(void*)))) 
                    / static_cast<uint32_t>(sizeof(KeyT) + sizeof(void*));

        assert(maxFanout > 0);

        minOccupancy = ceil(maxFanout / 2);

        root = new BNode;
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

    ~BPlusTree() {

    }
private:
    uint32_t maxFanout;
    uint32_t minOccupancy;
    size_t pointerSize;
    size_t searchKeySize;
    size_t dataEntrySize;
    BNode* root;
};

#endif