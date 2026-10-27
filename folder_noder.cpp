//Folder.cpp
//Written By Me : Aether, Hunter M.
//Date : 10/27/26

#include <string>
#include <iostream>

constexpr auto MAX_FILES = 999;

class FileNode{
    size_t node_size_;
    int node_num = 0;
    std::string _strName;
public:
    inline FileNode& getNode() {
        return *this;
    }

    int getNum() {
        return node_num;
    }

    size_t getSize() {
        return node_size_;
    }

    std::string& getName() {
        return _strName;
    }

    int IncNode() {
        int n = this->node_num;
        n + 1;
            if( n == 0 ){
                std::cout << "Failed To Increment Node Number\n";
            }
        return n;
    }

    int DecNode() {
        int n = this->node_num;
            if( n == 0 ){
                std::cout << "Cannot Decrement Zero From Node Number\n";
            }    
        n - 1;
        return n;
    }
    
};
 
class Folder {
    std::string _name;
    int _files_count[MAX_FILES]; 
    mutable bool _isempty;
    FileNode _nodes[MAX_FILES];
public:

    inline Folder& getFolder() {
        return *this;
    }
    
    void FindNodePtr(FileNode& node);
    void FindNodeString();
};

// find node by ptr
void Folder::FindNodePtr(FileNode& node) {
    int id = node.getNode().getNum();
    node.IncNode();
    for(auto i = 0; i < id; i++){
        FileNode* target_node = (&node);
        target_node->getNode();
            for(auto j = 1; j <= i; j++){
                if( id > 1 ){
                      std::cout << "Node ID Error At\t" << (&id) << "\n"; 
                }
            }
    }
    int pc = id;
    std::cout << pc;
}

// find node by string
void Folder::FindNodeString(){
    std::string namename;
    std::cin >> namename;
        for( auto i = 0; i < MAX_FILES; i++ ){
            if(namename != this->_nodes[i].getName()){
                for(auto j = 1; j >= i; j++){
                    std::cout << "No Such Node Exist\n";
                }
            }
            if(namename == this->_nodes[i].getName()){
                this->_nodes[i].getNode().getName();
            }
    }
 std::cout << namename << "\n";
}


int main() {
    Folder folderptr;
    FileNode nodeptr;

    folderptr.FindNodePtr( nodeptr );
    folderptr.FindNodeString();

    return 0;
}
