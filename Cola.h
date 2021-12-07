#ifndef COLA_H
#define COLA_H

#include "ListaDoblementeLigada.h"

template <class T>
class Cola
{
private:
    ListaDoblementeLigada<T> lista;
public:
    Cola();
    ~Cola();

    void push(const T &dato);
    void pop(); 
    T* front();
    T* back();

    size_t size();
    bool empty();
};

template <class T>
Cola<T>::Cola()
{
}

template <class T>
Cola<T>::~Cola()
{
}

template <class T>
void Cola<T>::push(const T &dato) {
    lista.push_back(dato);
}

template <class T>
void Cola<T>::pop() {
    lista.pop_front();
}

template <class T>
T* Cola<T>::front() {
    return lista.front();
}

template <class T>
T* Cola<T>::back() {
    return lista.back();
}

template <class T>
size_t Cola<T>::size() {
    return lista.size();
}

template <class T>
bool Cola<T>::empty() {
    return lista.empty();
}

#endif