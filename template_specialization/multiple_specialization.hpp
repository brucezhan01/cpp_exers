#pragma once

template<typename T0, typename T1, typename T2>
struct S {
    std::string id() {return "General";}
};

// specialization #1
template<typename T0, typename T1>
struct S<T0,T1,char> {
    std::string id() {return "Specialization #1";}
};

// specialization #2
template<typename T>
struct S<int,T,T> {
    std::string id() {return "Specialization #2";}
};

// specialization #3
template<>
struct S<int,char,float> {
    std::string id() {return "Specialization #3";}
};
