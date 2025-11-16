// 函数: sub_6ca1a0
// 地址: 0x6ca1a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (arg1 == 0)
    return 

if ((*(arg1 + 0x74) & 4) == 0)
    sub_6d42e0(arg1, "No IDATs written into file")
    noreturn

uint32_t i = zx.d(*(arg1 + 0x140))

if (*(arg1 + 0x144) s> i)
    i = sub_6d4650(arg1)

if (arg2 != 0)
    if ((*(arg2 + 8) & 0x200) != 0 && (*(arg1 + 0x74) & 0x200) == 0)
        i = sub_6d6e60(arg1, arg2 + 0x8c)
    
    uint32_t i_1 = 0
    
    if (*(arg2 + 0x80) s> 0)
        int32_t ecx_1 = *(arg2 + 0x88)
        int32_t* edi_1 = nullptr
        
        do
            int32_t eax_1 = *(edi_1 + ecx_1)
            
            if (eax_1 s> 0)
                sub_6d66a0(eax_1, eax_1, arg1, *(edi_1 + ecx_1 + 4), *(edi_1 + ecx_1 + 0x14), 
                    *(edi_1 + ecx_1 + 0x18), *(edi_1 + ecx_1 + 8))
                ecx_1 = *(arg2 + 0x88)
                int32_t eax_2
                eax_2.b = *(edi_1 + ecx_1) != 0xffffffff
                *(edi_1 + ecx_1) = eax_2 - 3
            else if (eax_1 s>= 0)
                sub_6d6570(eax_1, *(edi_1 + ecx_1 + 4), arg1, *(edi_1 + ecx_1 + 8), eax_1)
                ecx_1 = *(arg2 + 0x88)
                *(edi_1 + ecx_1) = 0xfffffffe
            else if (eax_1 == 0xffffffff)
                int32_t var_18_3 = ecx_1
                sub_6d6480(eax_1, *(edi_1 + ecx_1 + 4), arg1, *(edi_1 + ecx_1 + 8))
                ecx_1 = *(arg2 + 0x88)
                *(edi_1 + ecx_1) = 0xfffffffd
            
            edi_1 = &edi_1[7]
            i = i_1 + 1
            i_1 = i
        while (i s< *(arg2 + 0x80))
    
    i = sub_6c9bc0(i, arg2, arg1, 8)

*(arg1 + 0x74) |= 8
sub_6d4aa0(i, 0x49454e44, arg1, 0)
sub_6d4bb0(arg1)
*(arg1 + 0x74) |= 0x10
