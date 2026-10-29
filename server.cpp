//server.cpp
//Aether, Hunter M.
#include <string>
#include <iostream>

class User {
    const std::string username;
public:    
    inline User& getUser() {
        return *this;
    }

     const std::string& getName() {
        return username;
    }
    
    void setUsername(const std::string& name);
};



void User::setUsername(const std::string& name){
    auto j = this->getName();
    j.clear();
    j = name;
}



constexpr auto MAX_SERVER_USERS = 10;

class Server {
    const std::string servername;
public:

    int users[MAX_SERVER_USERS];
    
    inline Server& getServer() {
        return *this;
    }

    const std::string& getServerName() {
        return servername;
    }

    void addUserToParty(User& user);
    void kickUserFromParty(User& user);
    void showServerInfo();
};

void Server::addUserToParty(User& user) {
     for(auto i = 1; i < 10; i++){
         auto count = this->users[i];
         count + 1;
     }
}
