# LBYARCH-MCO2 
###### Alyanna Cabrera, S15 
###### Samuel Cheng, S15

## Project Description
###### This project involves implementing kernels (in C and in x86-64 assembly) capable of performing the SAXPY (A*X + Y) function. The kernel must utilize functional scalar SIMD registers and floating-point instructions. The output of the kernel should display the result of the first ten elements of vector Z for both versions of the kernel (C and x86-64 assembly).
###### This project is executed both in debug mode and release mode using three different vector sizes: 2<sup>20</sup>, 2<sup>24</sup>, and 2<sup>28</sup>. This is to see and compare the execution time of the two execution modes.

## Debug Mode

#### Vector Size = 2<sup>20</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 167.0000 | 83.0000 |
| Average Time | 5.5667 | 2.7667 |

#### Vector Size = 2<sup>24</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 1960.0000 | 836.0000 |
| Average Time | 65.3333 | 27.8667 |

#### Vector Size = 2<sup>28</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 415956.0000 | 347137.0000 |
| Average Time | 13865.2000 | 11571.2333 |

#### Average Time Summary for Debug Mode
| Average Time in ms | 2<sup>20</sup> | 2<sup>24</sup> | 2<sup>28</sup> |
|----------|----------|----------|----------|
| C | 5.5667 | 65.3333 | 13865.2000 |
| x86-64 Assembly | 2.7667 | 27.8667 | 11571.2333 |
| **Faster** | x86-64 Assembly | x86-64 Assembly | x86-64 Assembly |

#### One possible reason why the x86-64 Assembly code was faster is because it provides more direct control over hardware resources, resulting in more optimized code execution compared to C. Additionally, Assembly code bypasses some of the overhead associated with high-level compilation, potentially contributing to its faster performance.

---

## Release Mode

#### Vector Size = 2<sup>20</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time |  |  |
| Average Time |  |  |

#### Vector Size = 2<sup>24</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time |  |  |
| Average Time |  |  |

#### Vector Size = 2<sup>28</sup>
| Time in ms | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time |  |  |
| Average Time |  |  |

#### Average Time Summary for Release Mode
| Average Time in ms | 2<sup>20</sup> | 2<sup>24</sup> | 2<sup>28</sup> |
|----------|----------|----------|----------|
| C |  |  |  |
| x86-64 Assembly |  |  |  |

---

## Comparative Analysis
###### The results above indicate that the x86-64 Assembly code runs faster in debug mode, whereas the C code performs better in release mode. This difference may stem from the optimizations applied to the C code and kernel in release mode. In debug mode, all optimizations for C are disabled, whereas certain optimizations are enabled for release mode. It should be noted that this project was tested using the default settings. These optimizations can be observed in the project properties tab, specifically under the optimization section for both debug and release configurations.
