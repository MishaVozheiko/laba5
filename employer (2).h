#pragma once

class employer {
private:
    char* name;
    int age;
    int stage;
    void allocName(const char* _name);

public:
    employer();
    employer(const char* _name, int _age, int _stage);
    employer(const employer&);
    ~employer();
    void print();
};
