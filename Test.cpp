#include<iostream>
#include"main21.hpp"
#include"doctest.h"


using namespace std;

stack stack;


TEST_CASE("check stack functions "){

    stack.push("A");
    stack.push("B");
    stack.push("C");
    stack.push("D");

    stack.pop();
    stack.pop();

    //stack :  A->B

    //false
    CHECK_FALSE((stack.peek()=="A"));


    //true
    CHECK_FALSE(!(stack.peek()=="B"));

    //stack : A
    stack.pop();

    //true
    CHECK_FALSE(!(stack.peek()=="A"));

    stack.peek();
    stack.peek();
    stack.peek();
    
    //true
    CHECK_FALSE(!(stack.peek()=="A"));

    stack.push("E");
    stack.push("F");

    //stack :A -> E -> F

    //false
    CHECK_FALSE((stack.peek()=="A"));

    //true
    CHECK_FALSE(!(stack.peek()=="F"));

    //true
    CHECK_FALSE(!(stack.peek()=="F"));

    stack.pop();
    stack.pop();

    //stack : A

     //true
    CHECK_FALSE(!(stack.peek()=="A"));

      //false
    CHECK_FALSE((stack.peek()=="F"));

}




