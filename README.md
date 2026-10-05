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



## Context & Motivation

This project is an independent dive into deep learning systems engineering to build intuition around memory-bandwidth constraints, operational intensity and scale-out training performance.



I will update my progress and code directly in this repository as I work through these topics.


**Happy Dashain in advance!**  
*Thank you!*