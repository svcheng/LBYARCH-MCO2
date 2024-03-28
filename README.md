# LBYARCH-MCO2 
###### Alyanna Cabrera, S15 
###### Samuel Cheng, S15

#### Project Description
###### This project involves implementing kernels (in C and in x86-64 assembly) capable of performing the SAXPY (A*X + Y) function. The kernel must utilize functional scalar SIMD registers and floating-point instructions. The output of the kernel should display the result of the first ten elements of vector Z for both versions of the kernel (C and x86-64 assembly).

#### Debug Mode for vector size 2^20
|  | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 0.1960 | 0.0590 |
| Average Time | 0.0065 | 0.0020 |

#### Debug Mode for vector size 2^30
|  | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 0.0130 | 0.0000 |
| Average Time | 0.0004 | 0.0000 |


##### Comparative Analysis for Debug Mode
###### to add

#### Release Mode for vector size 2^20
|  | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 0.3520 | 53191819.9910 |
| Average Time | 0.0117 | 1773060.6664 |

#### Release Mode for vector size 2^30
|  | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 0.0110 | -5253297.7340 |
| Average Time | 0.0004 | -175109.9245 |

##### Comparative Analysis for Release Mode
###### to add
