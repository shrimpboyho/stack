[stack]() - A Stack Machine in C++
=====
[![Build Status](https://drone.io/github.com/shrimpboyho/stack/status.png)](https://drone.io/github.com/shrimpboyho/stack/latest)

```stack``` aims to be a simple, embeddable, virtual stack machine. It resides in one header file (```stack.h```) and consists of a simple instruction set. It is no where near completion, so don't hesitate to ```make``` and ```fork```.

##How To Install

Just clone the repo and you'll be on your way!

```bash
git clone https://github.com/shrimpboyho/stack.git
cd stack
make
```

##Instruction Set

```stack``` is a 64 bit virtual machine and utilizes a 64 bit instruction set. Each instruction is 64 bits long.

The first 4 bits represent the operation code:

```c
0000 halt
0001 load
0010 add
0011 sub
0100 mul
0101 div
0110 flag
0111 jump
1000 print
```


