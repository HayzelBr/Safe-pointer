#ifndef SAFEPTR_H
#define SAFEPTR_H

using namespace std; 

template <typename T>
class SafePtr {

    private:
        T *ptr;

    public:
        SafePtr(T val){
            ptr = new T{val};
        }
        ~SafePtr() {
            delete ptr;
        }

        T getValor() {
            return *ptr;
        }

        long getEndereco(){
            return (long)ptr;
        }

};

#endif