#pragma once

enum ENGINE {PostgreSQL, MySQL, Oracle};

class Server{

    private:
        char name[20];
        enum ENGINE engine;
        char host[20];
        char ip[13];
        int port;

    public:
        Server();        
        Server(const char *name, enum ENGINE engine, const char *host, const char *ip, int port);
        Server(const Server &server);
        void setName(const char* name);
        void setEngine(enum ENGINE engine);
        void setHost(const char* host);
        void setIp(const char* ip);
        void setPort(int port);
        const char *getName() const;
        const enum ENGINE getEngine() const;
        const char *getHost() const;
        const char *getIp() const;
        int getPort() const;
        void print();
};
