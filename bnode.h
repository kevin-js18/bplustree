#ifndef _BNODE_H_

#include "params.h"

class BNode {
public:
    virtual void handleOverflow() = 0;

    virtual void handleSparseNode() = 0;

    void getParentPointer(unsigned char* buffer);

    size_t findSearchKeyIndex(unsigned char* buffer);

    size_t getSearchKeyCount();

private:
    unsigned char data[PAGE_SIZE_IN_BYTES];
};

class TreeBNode : public BNode {
public:
    TreeBNode();

    ~TreeBNode();

    void getNthSearchKey(size_t index, unsigned char* buffer);

    void getNthChildPointer(size_t index, unsigned char* buffer);

    void addSearchKey(unsigned char* buffer);

    void removeSearchKey(size_t index);
};

class LeafBNode : public BNode {
public:
    LeafBNode();

    ~LeafBNode();

    void getNthDataEntry(size_t index, unsigned char* buffer);

    void addDataEntry(unsigned char* buffer);

    void removeDataEntry(size_t index);
};

#endif