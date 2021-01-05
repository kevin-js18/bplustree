#include "bplustree.h"

struct RowSim {
    std::vector<int> data;
};

struct ResultSetSim {
    std::vector<RowSim> rows;
};

int main() {
    ResultSetSim resultSet;
    for (int i = 0; i < 5; ++i) {
        RowSim row;
        for (int j = 0; j < 10; ++j) {
            row.data.push_back(j);
        }

        resultSet.rows.push_back(row);
    }

    BPlusTree<int, ResultSetSim> intTree(true);
    BPlusTree<std::string, ResultSetSim> stringTree(true);
    BPlusTree<int, ResultSetSim> intTreeNoDupl(false);
    BPlusTree<std::string, ResultSetSim> stringTreeNoDupl(false);

    return 0;
}