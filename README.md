# LBYARCH-MCO2 
### Alyanna Cabrera, S15 
### Samuel Cheng, S15

## Project Description
### This project involves implementing the SAXPY (A*X + Y) function in C and x86-64 assembly. The x86-64 kernel must utilize functional scalar SIMD registers and floating-point instructions. The output of the kernels should display the values of the first ten elements of the result vector Z.
### The program was executed both in debug mode and release mode with three different vector sizes: 2<sup>20</sup>, 2<sup>24</sup>, and 2<sup>28</sup>, with execution time recorded for each execution. See a screenshot of the problem specification below.
![problem](screenshots/problem.png)

---
## Data Initialization
### The group opted to use the same constant values in initializing the data. **2.0** is assigned to A, **3.5** to X, **1.5** to Y, and **0.0** to Z. When using the SAXPY function, the expected result (Z) is always ((2.0 * 3.5) + 1.5), or **8.5**. This can be seen in the screenshots below.

## Debug Mode
### Vector Size = 2<sup>20</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 96.0000 | 53.0000 |
| Average Time | 3.2000 | 1.7667 |

### Vector Size = 2<sup>24</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 1201.0000 | 713.0000 |
| Average Time | 40.0333 | 23.7667 |

### Vector Size = 2<sup>28</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 16762.0000 | 8244.0000 |
| Average Time | 558.7333 | 274.8000 |

### Average Time Summary for Debug Mode
| Average Time in ms | 2<sup>20</sup> | 2<sup>24</sup> | 2<sup>28</sup> |
|----------|----------|----------|----------|
| C | 3.2000 | 40.0333 | 558.7333 |
| x86-64 Assembly | 1.7667 | 23.7667 | 274.8000 |
| **Faster** | x86-64 Assembly | x86-64 Assembly | x86-64 Assembly |

#### One possible reason why the x86-64 Assembly code was faster is because it provides more direct control over hardware resources, resulting in more optimized code execution compared to C. Additionally, Assembly code bypasses some of the overhead associated with high-level compilation, potentially contributing to its faster performance.

---

## Release Mode

### Vector Size = 2<sup>20</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 36.0000 | 42.0000 |
| Average Time | 1.2000 | 1.4000 |

### Vector Size = 2<sup>24</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 664.0000 | 716.0000 |
| Average Time | 22.1333 | 23.8667 |

### Vector Size = 2<sup>28</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 8110.0000 | 8240.0000 |
| Average Time | 270.3333 | 274.6667 |

### Average Time Summary for Release Mode
| Average Time in ms | 2<sup>20</sup> | 2<sup>24</sup> | 2<sup>28</sup> |
|----------|----------|----------|----------|
| C | 1.2000 | 22.1333 | 270.3333 |
| x86-64 Assembly | 1.4000 | 23.8667 | 274.6667 |
| **Faster** | C | C | C |

#### The results above indicate that the C code performs better in release mode than in debug mode. While x86-64 assembly is faster than C in debug mode, C now outperforms x86-64 Assembly in release mode. The runtime improvement may stem from the optimizations applied to the C code in release mode, which are disabled in debug mode.

---
## Correctness Check
#### To verify the correctness of our both the C and x86-64 assembly kernels, the first ten elements of the result vector Z were printed each time the function was computed.

### Vector Size = 2<sup>20</sup> 
| Debug Mode | Release Mode |
|----------|----------|
| ![debug 2^20](screenshots/debug%2020.png) | ![release 2^20](screenshots/release%2020.png) |

### Vector Size = 2<sup>24</sup> 
| Debug Mode | Release Mode |
|----------|----------|
| ![debug 2^24](screenshots/debug%2024.png) | ![release 2^24](screenshots/release%2024.png) |

### Vector Size = 2<sup>28</sup> 
| Debug Mode | Release Mode |
|----------|----------|
| ![debug 2^28](screenshots/debug%2028.png) | ![release 2^28](screenshots/release%2028.png) |

## Comparative Analysis
#### From the results above, it can be observed that both kernels run slightly slower when run in debug mode than in release mode. This is likely because running debug mode typically includes additional checks and other debugging features, whereas release mode places more emphasis on optimizing the code's performance. 

#### The C kernel runs much faster in release mode than in debug mode, even outperforming the assembly code in some cases. This is because of the optimization performed in release mode, as C compilers offer various optimization levels that can significantly improve performance.

#### Lastly, the results also highlight the capabilities of Assembly code in offering greater control and optimization opportunities compared to higher-level languages like C. Due to its proximity to the hardware, Assembly grants us finer control over system resources, enabling us to optimize the code's performance as much as possible without relying on a complex compiler.
