//
// Created by yuzhi on 11/30/2022.
//

#ifndef ARRAYS_ARRAYS_H
#define ARRAYS_ARRAYS_H
#define MAX_SIZE 100

typedef struct {
    int age;
    char name[10];
}Student;

class Arrays {
private:
    Student data[MAX_SIZE];
    int length;
public:
    Arrays();
    unsigned char arraysInit(int dataCount);
    ~Arrays();
};


#endif //ARRAYS_ARRAYS_H
