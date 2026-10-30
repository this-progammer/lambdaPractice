//customkeyword.cpp
//Aether, Hunter M.
#include <string>
#include <iostream>

class Keyword {
    const std::string keyword;
public:
    Keyword(const std::string word) : keyword( word ){}
    ~Keyword();

    inline Keyword& getKeyword() {
        return *this;
    }

    // debug what the word does
    inline virtual void debugKeyword() = 0;
};

Keyword::~Keyword()
{
}

inline void Keyword::debugKeyword() {
    auto key = this->keyword;
        if( key == "mitigate" ){
            for( auto i = 0; i < sizeof( key ); ++i ) {
                 this->getKeyword();
            }
        }
}
