#include <iostream>
#include <vector>

/*programmer : Aether*/

class BrushNode {
    mutable std::vector<float>m_Mins[3]; // mins
    mutable std::vector<float>m_Maxs[3]; // maxs
    bool m_bSelected = true; // false
    mutable std::vector<int>m_Faces[6]; // faces
public:  
    BrushNode( bool bSel ) : m_bSelected( bSel ){}
    ~BrushNode();
    
    inline BrushNode& getNode() {
        return *this;
    }
    
    /*For Each Brush Face Find*/
    void ForEachBrush_Face(BrushNode& node) {
        node.getNode();
        auto *i = node.m_Faces;
            auto findFace = [&]() {
                    if( i->empty() ){
                        std::cout << "Brush faces are empty, attempting to adding new faces...\n";
                        i->resize( 6 );
                            if( !i->empty() ){
                                std::cout << "Brush face count updated... no longer zero faces\n";
                            }
                    }
                std::cout << "Brush node faces :\t" << i->size() << "\n";
            };
        if( node.m_bSelected == 1 ) {
            findFace(); //*if selected find faces
            std::cout << "Brush node is selected" << std::endl;
        } if( node.m_bSelected == 0 ){
            std::cout << "Brush node is not selected" << std::endl;
        }
    }
};

BrushNode::~BrushNode(){
}

int main() {
    
    BrushNode orig_node( true );
    BrushNode newNode( true );
    orig_node.getNode().ForEachBrush_Face( newNode );
    
    return 0;
}
