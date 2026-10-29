//server.cpp
//Aether, Hunter M.
#include <string>
#include <iostream>

class User {
    const std::string username;
public:

    int userid = 1;

    int getUserId() {
        return userid;
    }
    
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

    //ptr I guess...?
    int users[MAX_SERVER_USERS];
    
    inline Server& getServer() {
        return *this;
    }

    int *getUsers() {
        return users;
    }

    const std::string& getServerName() {
        return servername;
    }

    void setServerName(const std::string& name);

    void addUserToParty(User& user);
    void kickUserFromParty(User& user);
    void showServerInfo();
};

void Server::addUserToParty(User& user) {
     for(auto i = 1; i < 10; i++){
         auto count = this->users[i];
         count + 1;
         auto& typ = user.userid;
             auto addVals = [&](){
                 typ += count;
             };
         if( count > 10 ){
             std::cout << "Cannot Add User To Party, Server User Limit Reached.\n";
         }
         addVals();
         this->getUsers();
     }
}

void Server::showServerInfo() {
    std::cout << "Server Name:\t" << this->getServerName() << "\n";
    std::cout << "Server Users:\t" << this->getUsers() << "\n";
}

