#include <iostream>
#include <cstring>
#include <iomanip>
#include "libserver.h"

using namespace std;

Server::Server(){
    strcpy(this->name, "trades.org.db");
    this->engine = PostgreSQL;
    strcpy(this->host, "localhost");
    strcpy(this->ip, "192.168.1.1");
    this->port = 5432;
}

Server::Server(const char *name, enum ENGINE engine, const char *host, const char *ip, int port){
    strcpy(this->name, name);
    this->engine = engine;
    strcpy(this->host, host);
    strcpy(this->ip, ip);
    this->port = port;
}

Server::Server(const Server &server){
    strcpy(this->name, server.name);
    this->engine = server.engine;
    strcpy(this->host, server.host);
    strcpy(this->ip, server.ip);
    this->port = server.port;
}

void Server::setName(const char *name){
    strcpy(this->name, name);
}

const char *Server::getName() const{
    return this->name;
}

void Server::setEngine(enum ENGINE engine){
    this->engine = engine;
}

const enum ENGINE Server::getEngine() const{
    return this->engine;
}

void Server::setHost(const char *host){
    strcpy(this->host, host);    
}

const char *Server::getHost() const{
    return this->host;
}

void Server::setIp(const char *ip){
    strcpy(this->ip, ip);
}

const char *Server::getIp() const{
    return this->ip;
}

void Server::setPort(int port){
    this->port = port;
}

int Server::getPort() const{
    return this->port;
}

void Server::print(){
    cout<<setw(15)<<this->getName()<<
            setw(15)<<this->getEngine()<<
            setw(15)<<this->getHost()<<
            setw(15)<<this->getIp()<<
            setw(15)<<this->getPort()<<endl;    
}
