#pragma once

#include <string>

class MD5 {

public:

    explicit MD5(std::string content);

    std::string getHash() const;
    bool isEqual(MD5 hash) const;

};


