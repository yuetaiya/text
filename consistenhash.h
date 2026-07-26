#pragma once
#include<iostream>
#include<set>
#include<string>
#include<map>
#include<functional>
class ConsistenHash
{
    private:
    int virtualnode;
    std::map<std::size_t,std::string>ring;
    std::set<std::string>physicalnode;

    static std::string virtual_name(const std::string &node,size_t t);
    static size_t Hash(const std::string& key);
    

    public:

    ConsistenHash(size_t virtualnode=150);

    void addnode(const std::string &node);
    void removenode(const std::string &node);

    std::string getkey(const std::string &key);






};