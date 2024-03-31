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

#### Average Time Summary for Debug Mode
| Average Time in ms | 2<sup>20</sup> | 2<sup>24</sup> | 2<sup>28</sup> |
|----------|----------|----------|----------|
| C |  |  |  |
| x86-64 Assembly |  |  |  |

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
