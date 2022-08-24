# Operating Systems - Multi-Threaded server In C++:

### The goal here in this project is to understand how the OS implements malloc and free on multi-threaded system and how we implement mutexes ,Implementing a multi-threaded lock free stack using POSIX methods that supports the following commands: PUSH/POP/TOP,  merging the server with the stack, now we serve multiple client that transmit the stack command (instead of standard input) ,  locking  implemented now as we may receive multiple commands to the stack on different connections.
![index-design-patterns-3x](https://user-images.githubusercontent.com/97015893/186420937-8f78154f-70ba-4bb0-9b7b-75b1ad4ad8fb.png)
clinet.cpp file ->  for the client

SERVER.cpp ->  implementing server that handles multiple clients with the use of mutexe , the server handles calls from the clients
to the stack on the servrer:

stack calls:

1.push() 

2.pop()

3.peek()

stack.hpp -> stack implemention

imple.hpp -> implementing malloc and free

Test.cpp -> tests class, doctest.h functions is used for testing.
