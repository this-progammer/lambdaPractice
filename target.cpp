//target.cpp
// Aether, Hunter M.
#include <string>
#include <iostream>

class Target {
public:
    int m_targetId;
    std::string m_targetName;
    size_t m_targetSize;


    int getTargetId() {
        return m_targetId;
    }

    std::string& getTargetName() {
        return m_targetName;
    }

    size_t getTargetSize() {
        return m_targetSize;
    }

    inline Target& getTarget() {
        return *this;
    }

    void clearName(std::string& name);
    void setName(std::string& name);
    void clearId(int& id);
    void setId(int id);
    void outInfo();
};

void Target::clearName(std::string& name) {
    if(name.empty() == true){
        std::cout << "Cant Clear String, Already Empty.\n";
    }
    name.clear();
}

void Target::setName(std::string& name) {
    auto& str = this->getTarget().getTargetName();
    str = name;
}

void Target::clearId(int& id) {
    id = 0;
}

void Target::setId(int id) { 
    int _id = this->getTargetId();
    _id = id;
}

void Target::outInfo() {
    std::cout << this->getTargetId() << std::endl;
    std::cout << this->getTargetName() << std::endl;
    std::cout << this->getTargetSize() << std::endl;
}

int main() {
    Target target;
    std::string name = "Monkey";
    int n = 5;
    
    target.setName( name );
    target.clearId(n);
    target.setId(n);
    target.outInfo();
    
    return 0;
}
