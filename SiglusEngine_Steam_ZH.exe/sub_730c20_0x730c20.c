// 函数: sub_730c20
// 地址: 0x730c20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1[0x6c]

while (*(ebx + 0xc) s< 0x8000)
    int32_t temp0_1 = *(ebx + 0x10)
    *(ebx + 0x10) -= 1
    
    if (temp0_1 - 1 s< 0)
        uint32_t ecx
        
        if (arg1[0x65] != 0)
            ecx = 0
        else
            int32_t* edi_1 = arg1[6]
            
            if (edi_1[1] == 0 && edi_1[3](arg1) == 0)
                *(*arg1 + 0x14) = 0x19
                (**arg1)(arg1)
            
            char* eax_6 = *edi_1
            edi_1[1] -= 1
            ecx = zx.d(*eax_6)
            *edi_1 = &eax_6[1]
            
            if (ecx == 0xff)
                uint32_t i
                
                do
                    int32_t* edi_2 = arg1[6]
                    
                    if (edi_2[1] == 0 && edi_2[3](arg1) == 0)
                        *(*arg1 + 0x14) = 0x19
                        (**arg1)(arg1)
                    
                    char* eax_13 = *edi_2
                    edi_2[1] -= 1
                    i = zx.d(*eax_13)
                    *edi_2 = &eax_13[1]
                while (i == 0xff)
                
                if (i != 0)
                    arg1[0x65] = i
                    ecx = 0
                else
                    ecx = 0xff
        
        int32_t eax_17 = *(ebx + 8) << 8 | ecx
        int32_t temp1_1 = *(ebx + 0x10)
        *(ebx + 0x10) += 8
        *(ebx + 8) = eax_17
        
        if (temp1_1 + 8 s< 0)
            int32_t temp2_1 = *(ebx + 0x10)
            *(ebx + 0x10) += 1
            
            if (temp2_1 == 0xffffffff)
                *(ebx + 0xc) = 0x8000
    
    *(ebx + 0xc) <<= 1

uint32_t edx = zx.d(*arg2)
char ecx_1 = (*(ebx + 0x10)).b
int32_t eax_20 = *(((edx & 0x7f) << 2) + &data_addbc8)
int32_t eax_21 = eax_20 s>> 8
char var_6 = eax_21.b
int32_t eax_22 = eax_21 s>> 8
int32_t esi_2 = *(ebx + 0xc) - eax_22
*(ebx + 0xc) = esi_2
int32_t esi_3 = esi_2 << ecx_1
int32_t ecx_2 = *(ebx + 8)

if (ecx_2 s< esi_3)
    int32_t ecx_4 = *(ebx + 0xc)
    
    if (ecx_4 s>= 0x8000)
        return edx s>> 7
    
    if (ecx_4 s>= eax_22)
        ecx_4.b = edx.b
        ecx_4.b &= 0x80
        ecx_4.b ^= var_6
        *arg2 = ecx_4.b
        return edx s>> 7
    
    eax_22.b = edx.b
else
    bool cond:0_1 = *(ebx + 0xc) s>= eax_22
    *(ebx + 0xc) = eax_22
    eax_22.b = edx.b
    *(ebx + 8) = ecx_2 - esi_3
    
    if (not(cond:0_1))
        eax_22.b &= 0x80
        eax_22.b ^= var_6
        *arg2 = eax_22.b
        return edx s>> 7

eax_22.b &= 0x80
eax_22.b ^= eax_20.b
*arg2 = eax_22.b
return (edx ^ 0x80) s>> 7
