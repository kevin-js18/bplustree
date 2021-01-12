#ifndef _BPLUSTREE_H_

#include <cmath>
#include <iostream>
#include <string>
#include <type_traits>
#include <vector>

#include "bnode.h"

template <class KeyT, class DataT>
class BPlusTree {
public:
    BPlusTree() {
        static_assert(std::is_trivially_copyable<KeyT>::value, "Invalid key type");
        searchKeySize = sizeof(KeyT);
        dataEntrySize = searchKeySize + POINTER_SIZE_IN_BYTES;

        maxFanout = (PAGE_SIZE_IN_BYTES - 3*(POINTER_SIZE_IN_BYTES) - SIZE_T_SIZE_IN_BYTES) 
                    / (searchKeySize + POINTER_SIZE_IN_BYTES);

        assert(maxFanout > 0);

        minOccupancy = ceil(maxFanout / 2);

        root = new TreeBNode;
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