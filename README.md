# LBYARCH-MCO2 
###### Alyanna Cabrera, S15 
###### Samuel Cheng, S15

#### Project Description
###### This project involves implementing kernels (in C and in x86-64 assembly) capable of performing the SAXPY (A*X + Y) function. The kernel must utilize functional scalar SIMD registers and floating-point instructions. The output of the kernel should display the result of the first ten elements of vector Z for both versions of the kernel (C and x86-64 assembly).

#### Debug Mode for vector size 2^20
|  | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 0.1210 | 0.0600 |
| Average Time | 0.0040 | 0.0020 |

#### Debug Mode for vector size 2^30
|  | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time |  |  |
| Average Time |  |  |


##### Comparative Analysis for Debug Mode
###### to add

#### Release Mode for vector size 2^20
|  | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 0.1000 | -54737990.4050 |
| Average Time | 0.0033 | -1824599.6802 |

#### Release Mode for vector size 2^30
|  | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time |  |  |
| Average Time |  |  |

##### Comparative Analysis for Release Mode
###### to add
