# LBYARCH-MCO2 
###### Alyanna Cabrera, S15 
###### Samuel Cheng, S15

#### Project Description
###### This project involves implementing kernels (in C and in x86-64 assembly) capable of performing the SAXPY (A*X + Y) function. The kernel must utilize functional scalar SIMD registers and floating-point instructions. The output of the kernel should display the result of the first ten elements of vector Z for both versions of the kernel (C and x86-64 assembly).

#### Debug Mode for vector size 2^20
|  | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 0.1490 | 0.0640 |
| Average Time | 0.0050 | 0.0021 |

#### Debug Mode for vector size 2^24
|  | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 1.7350 | 0.9060 |
| Average Time | 0.0578 | 0.0302 |

#### Debug Mode for vector size 2^28
|  | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 412.4470 | 318.9970 |
| Average Time | 13.7482 | 10.6332 |

--------------------------------------------------------------

#### Release Mode for vector size 2^20
|  | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 0.0740 | 39622046.0720 |
| Average Time | 0.0025 | 1320734.8691 |

#### Release Mode for vector size 2^24
|  | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 1.2020 | 39701354.3320 |
| Average Time | 0.0401 | 1323378.4777 |

#### Release Mode for vector size 2^28
|  | C | x86-64 Assembly |
|----------|----------|----------|
| Total Time | 195.8450 | 9678359.4020 |
| Average Time | 6.5282 | 322611.9801 |

#### Comparative Analysis
###### to add
