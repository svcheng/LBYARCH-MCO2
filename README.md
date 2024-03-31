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
| Total Time | 126.0000 | 69.0000 |
| Average Time | 4.2000 | 2.3000 |

### Vector Size = 2<sup>24</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 1960.0000 | 836.0000 |
| Average Time | 65.3333 | 27.8667 |

### Vector Size = 2<sup>28</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 415956.0000 | 347137.0000 |
| Average Time | 13865.2000 | 11571.2333 |

### Average Time Summary for Debug Mode
| Average Time in ms | 2<sup>20</sup> | 2<sup>24</sup> | 2<sup>28</sup> |
|----------|----------|----------|----------|
| C | 4.2000 | 65.3333 | 13865.2000 |
| x86-64 Assembly | 2.3000 | 27.8667 | 11571.2333 |
| **Faster** | x86-64 Assembly | x86-64 Assembly | x86-64 Assembly |

#### One possible reason why the x86-64 Assembly code was faster is because it provides more direct control over hardware resources, resulting in more optimized code execution compared to C. Additionally, Assembly code bypasses some of the overhead associated with high-level compilation, potentially contributing to its faster performance.

---

## Release Mode

### Vector Size = 2<sup>20</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 98.0000 | 68.0000 |
| Average Time | 3.2667 | 2.2667 |

### Vector Size = 2<sup>24</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 661.0000 | 633.0000 |
| Average Time | 22.0333 | 21.1000 |

### Vector Size = 2<sup>28</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 372857.0000 | 326242.0000 |
| Average Time | 12428.5667 | 10874.7333 |

### Average Time Summary for Release Mode
| Average Time in ms | 2<sup>20</sup> | 2<sup>24</sup> | 2<sup>28</sup> |
|----------|----------|----------|----------|
| C | 3.2667 | 22.0333 | 12428.5667 |
| x86-64 Assembly | 2.2667 | 21.1000 | 10874.7333 |
| **Faster** | x86-64 Assembly | x86-64 Assembly | x86-64 Assembly |

#### The results above indicate that C code performs better in release mode than in debug mode, as although x86-64 Assembly is still faster than C, the time difference is much smaller compared to the time difference in debug mode. This difference may stem from the optimizations applied to the C code and kernel in release mode. In debug mode, all optimizations for C are disabled, whereas certain optimizations are enabled for release mode. 

---

## Comparative Analysis
#### The tables above indicate that debug mode is slower than release mode. Debug mode typically includes additional checks and debugging features, whereas release mode is more focused on optimizing the code's performance and enhancing execution speed. These optimization capabilities are best observed in C code, as C compilers offer various optimization levels that can significantly improve performance. As illustrated in our tables, the execution time of C code in release mode consistently outperforms that in debug mode. Lastly, the project also highlights the capabilities of Assembly code in offering greater control and optimization opportunities compared to higher-level languages like C. Due to its proximity to the hardware, Assembly grants us finer control over system resources, enabling us to optimize the code's performance more effectively.
