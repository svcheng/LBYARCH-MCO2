section .text
bits 64
default rel

global SAXPYasm
SAXPYasm:
    PUSH RBP
    MOV RBP, RSP
    ADD RBP, 16
    
    ; ECX - n
    ; XMM1 - A
    ; R8 - X
    ; R9 - Y  
    MOV RAX, [RBP+32] ; Z
    
    L1:       
        VMULSS XMM4, XMM1, dword [R8]   ; XMM4 = A * X[i]
        ADDSS XMM4, dword [R9]          ; XMM4 += Y[i]
        MOVSS [RAX], XMM4               ; Z[i] = XMM4
        
        ADD R8, 4
        ADD R9, 4
        ADD RAX, 4
        
        DEC ECX
        JZ FIN
        JMP L1
        
    FIN:
        POP RBP
        
    ret