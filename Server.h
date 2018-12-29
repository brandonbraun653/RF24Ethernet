#pragma once
#ifndef server_h
#define server_h

#include <cstdint>

class Server
{
public:
    virtual void begin(uint16_t port = 0) = 0;
};

#endif
