#include <iostream>
#include <vector>
#include <string>

/*
    Programmer : Aether
*/

/*node script sorter*/
class NodeScript {
private:
    const char* scriptName;
    int scriptId;
public:
    NodeScript(const char* script, int id) : scriptName( script ), scriptId( id ){}
    ~NodeScript();
    
    inline NodeScript& getNode(){ return *this; }
    std::vector<std::string>scriptElement = {"write", "read", "save"};
    
    void SortNode_Scripts(NodeScript& node) {
            auto sort = []<typename K>(K n) {
                if( n.scriptName == n.scriptElement[0] ){
                    std::cout << "write mode...\n";
                }
                if( n.scriptName == n.scriptElement[1] ){
                    std::cout << "read mode...\n";
                }
                if( n.scriptName == n.scriptElement[2] ){
                    std::cout << "save mode...\n";
                }
            };
            sort( node );
    };
};

NodeScript::~NodeScript() {
}

int main() {
    
    NodeScript aNode("write", 1);
    NodeScript bNode("read", 1);
    NodeScript cNode("save", 1);
    
    aNode.getNode().SortNode_Scripts( aNode );
    aNode.getNode().SortNode_Scripts( bNode );
    aNode.getNode().SortNode_Scripts( cNode );
    
    return 0;
}
