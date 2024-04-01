# LBYARCH-MCO2 
### Alyanna Cabrera, S15 
### Samuel Cheng, S15

## Project Description
### This project involves implementing kernels (in C and in x86-64 assembly) capable of performing the SAXPY (A*X + Y) function. The kernel must utilize functional scalar SIMD registers and floating-point instructions. The output of the kernel should display the result of the first ten elements of vector Z for both versions of the kernel (C and x86-64 assembly).
### This project is executed both in debug mode and release mode using three different vector sizes: 2<sup>20</sup>, 2<sup>24</sup>, and 2<sup>28</sup>. This is to see and compare the execution time of the two execution modes.

## Debug Mode

### Vector Size = 2<sup>20</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 81.0000 | 49.0000 |
| Average Time | 2.7000 | 1.6333 |

### Vector Size = 2<sup>24</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 1116.0000 | 563.0000 |
| Average Time | 37.2000 | 18.7667 |

### Vector Size = 2<sup>28</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 17399.0000 | 8139.0000 |
| Average Time | 579.9667 | 271.3000 |

### Average Time Summary for Debug Mode
| Average Time in ms | 2<sup>20</sup> | 2<sup>24</sup> | 2<sup>28</sup> |
|----------|----------|----------|----------|
| C | 2.7000 | 37.2000 | 579.9667 |
| x86-64 Assembly | 1.6333 | 18.7667 | 271.3000 |
| **Faster** | x86-64 Assembly | x86-64 Assembly | x86-64 Assembly |

#### One possible reason why the x86-64 Assembly code was faster is because it provides more direct control over hardware resources, resulting in more optimized code execution compared to C. Additionally, Assembly code bypasses some of the overhead associated with high-level compilation, potentially contributing to its faster performance.

---

## Release Mode

### Vector Size = 2<sup>20</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 41.0000 | 36.0000 |
| Average Time | 1.3667 | 1.2000 |

### Vector Size = 2<sup>24</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 543.0000 | 559.0000 |
| Average Time | 18.1000 | 18.6333 |

### Vector Size = 2<sup>28</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 8131.0000 | 8120.0000 |
| Average Time | 271.0333 | 270.6667 |

### Average Time Summary for Release Mode
| Average Time in ms | 2<sup>20</sup> | 2<sup>24</sup> | 2<sup>28</sup> |
|----------|----------|----------|----------|
| C | 1.3667 | 18.1000 | 271.0333 |
| x86-64 Assembly | 1.2000 | 18.6333 | 270.6667 |
| **Faster** | x86-64 Assembly | C | x86-64 Assembly |

#### The results above indicate that C code performs better in release mode than in debug mode, as although x86-64 Assembly is mostly faster than C, the time difference is much smaller compared to the time difference in debug mode. This difference may stem from the optimizations applied to the C code and kernel in release mode. In debug mode, all optimizations for C are disabled, whereas certain optimizations are enabled for release mode. 

---
## Correctness Check
#### To verify the correctness of our result we printed the results of C and x86-64 Assembly together for the 30 runs of each vector: 2<sup>20</sup>, 2<sup>24</sup>, and 2<sup>28</sup>. See the pictures below for the screenshots of the command line.


## Comparative Analysis
#### The tables above indicate that debug mode is slower than release mode. Debug mode typically includes additional checks and debugging features, whereas release mode is more focused on optimizing the code's performance and enhancing execution speed. These optimization capabilities are best observed in C code, as C compilers offer various optimization levels that can significantly improve performance. As illustrated in our tables, the execution time of C code in release mode consistently outperforms that in debug mode. Lastly, the project also highlights the capabilities of Assembly code in offering greater control and optimization opportunities compared to higher-level languages like C. Due to its proximity to the hardware, Assembly grants us finer control over system resources, enabling us to optimize the code's performance more effectively.
