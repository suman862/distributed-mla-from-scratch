# Distributed Training & CUDA Programming from Scratch

Hi! I'm **Suman Khatri**, pursuing my Master's degree in Applied Artificial Intelligence. 

During the upcoming Dashain vacation, I am dedicating time to build deep, systems-level foundations in low-level GPU programming and distributed deep learning infrastructure. Rather than relying solely on high-level frameworks, my goal is to master CUDA kernel optimization and distributed training dynamics from first principles alongside my ongoing research, development and deployment work.

---

##  Objectives & Scope

- **CUDA Foundations & GPU Architecture**: Understand thread hierarchies, memory banks, warp execution dynamics, shared memory caching and memory bandwidth bottlenecks.
- **Modern Hardware Optimization**: Study tensor core utilization and architectural features tailored for NVIDIA H100/Hopper/Blackwell GPUs.
- **Distributed Training Primitives**: Implement and analyze data parallelism, tensor parallelism, pipeline parallelism, Zero Redundancy Optimizer (ZeRO), and collective communication operations (`AllReduce`, `AllGather`, `ReduceScatter`).

---

## Primary Learning Resources

Below are the core video lectures and hands-on walkthroughs I am following for this sprint:

1. **[Building a Distributed Training Framework from First Principles](https://www.youtube.com/watch?v=XoGvCBRnwLs&t=35419s)**  
   *Focus: Distributed communication primitives, multi-GPU synchronization, custom gradient parallelization.*

2. **[CUDA Programming Course – High-Performance Computing with GPUs](https://www.youtube.com/watch?v=86FAWCzIe_4&t=9126s)**  
   *Focus: Fundamental CUDA C/C++ programming, execution configuration, memory hierarchy, grid/block layout.*

3. **[CUDA Programming for NVIDIA H100s – Comprehensive Course](https://www.youtube.com/watch?v=SqQUQHdYWyc)**  
   *Focus: Modern Hopper architecture features, TMA (Tensor Memory Accelerator), asynchronous data transfers, and FP8/FP16 scaling.*

### References(secondary resource)
1. **[C Programming Full Course for free ⚙️
](https://www.youtube.com/watch?v=xND0t1pr3KY)**   by Bro Code 
   

## Context & Motivation

This project is an independent dive into deep learning systems engineering to build intuition around memory-b andwidth constraints, operational intensity and scale-out training performance.



I will update my progress and code directly in this repository as I work through these topics.


**Happy Dashain in advance!**  
*Thank you!*




---
## Day 1: Intro to  C and C++
Date :10/10/2026

Hi! Today, I have two goals to present you:
1. The basics of C ,and
2. Pointers

Before deep diving  into any language we should have a fundamental understanding of programming languages. There are two kinds of languages. 
1. Compiled languages (C and C++)
2. Interpreted Languages

Compiled languages means they need to be converted into machine understandable language from human understable languages. For C `gcc` is a one of the main compiler tool. So in this course we will use `gcc`. Please make sure you have installed the `gcc`. 

Now i will directly go into basics of basic i.e. basic syntax of C. 
For that i will take a very simple code.

```c
#include <stdio.h>

int main() {
    // code goes here
    return 0;
}
```

I think above is the simplest form of any C-programming code. In the above example <filename.h> is  `header file` . It contains the different build-in functions and we can use that function inside int main.  examples `stdio.h` , `math.h`,and so forth. 



### Key C Header Files

* **`<stdio.h>`** — **Input/Output:** `printf()`, `scanf()`
* **`<stdlib.h>`** — **Memory Allocation & Utilities:** `malloc()`, `free()`, `exit()`
* **`<string.h>`** — **String Operations:** `strlen()`, `strcpy()`, `strcmp()`
* **`<math.h>`** — **Math Functions:** `sqrt()`, `pow()` *(compile with `-lm`)*
* **`<stdbool.h>`** — **Booleans:** `bool`, `true`, `false`
* **`<ctype.h>`** — **Character Checks:** `isalpha()`, `isdigit()`
* **`<time.h>`** — **Time & Dates:** `time()`, `clock()`


---
Lets jump into our veri first Hello  code.
```C
#include <stdio.h>

int main() {
   printf("My fist working C code\n");
   return 0;
}

```

Two immediate question for you; 
1. why `return 0`  but not `retun 1` or `return 2`?
2. why int only . why not float?

So above is a source code. We will use gcc compiler to compile to convert it into machine readable code execute it. 

## Day 2: Sunday,October 11, 2026

Hi ! Today, plan of my work is 
1. to recap what i had learn yestarday and 
2. to continue pointers. 

Yestarday I had learn about pointers. Pointers are bascially a variabale but pointers store the address of another variable . 
So, Plan for today is to learn pointer to pointer to integer and pointer to pointer to pointer to interger. Lets hope it will go well. 

## Day 3: Sunday,October 11, 2026

Hi !
Today i revisited and practice the concept i had learning yestarday and learned more about NULL pointers . Alos, I learned about malloc function in memmory management. At end of the day i learned about size and tourched the basic of C++
