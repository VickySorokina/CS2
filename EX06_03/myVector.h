#ifndef MYVECTOR_H
#define MYVECTOR_H
template<typename T>
class myVector
{
public:

 myVector<T>();
 myVector<T>(int size);
 myVector<T>(int size, T defaultVal);
 
 void push_back(T element);
 void pop_back();
 unsigned int size() const;
 T at(int index);
 bool empty() const;
 void clear();
 void swap(myVector v2);
};

template<typename T>
myVector<T>::myVector(): size(0)
{
elements = new T;
}

template<typename T>
myVector<T>::myVector(int size) //and this is where I gave up
#endif //MYVECTOR_H