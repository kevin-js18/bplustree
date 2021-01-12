#include <cstring>

#include "bnode.h"

BNode::BNode() {
    size_t initialSize = 0;
    unsigned char* sizeBuffer = reinterpret_cast<unsigned char*>(&initialSize);
    memcpy(nodeData, sizeBuffer, SIZE_T_SIZE_IN_BYTES);
}

TreeBNode::TreeBNode() {

}

TreeBNode::~TreeBNode() {

}

void TreeBNode::handleOverflow() {

}

void TreeBNode::handleSparseNode() {

}

LeafBNode::LeafBNode() {

}

LeafBNode::~LeafBNode() {

}

void LeafBNode::handleOverflow() {

}

void LeafBNode::handleSparseNode() {

}