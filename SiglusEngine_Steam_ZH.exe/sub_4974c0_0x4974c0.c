// 函数: sub_4974c0
// 地址: 0x4974c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg1[0x53]
int32_t edi
int32_t var_14 = edi

if (ecx == 1)
    void* ecx_1 = arg1[0x54]
    int32_t edx = *(ecx_1 + 0x24)
    uint32_t edi_1 = *(ecx_1 + 0xc)
    arg1[0x58] = *(ecx_1 + 0x1c)
    int32_t eax_2 = *(ecx_1 + 0x20)
    *(ecx_1 + 0x40) = edx
    int32_t edx_1 = 0
    arg1[0x59] = eax_2
    uint32_t edx_2 = modu.dp.d(edx_1:eax_2, edi_1)
    *(ecx_1 + 0x34) = 1
    *(ecx_1 + 0x38) = 1
    *(ecx_1 + 0x3c) = 1
    *(ecx_1 + 0x44) = 1
    
    if (edx_2 == 0)
        edx_2 = edi_1
    
    arg1[0x5a] = 1
    *(ecx_1 + 0x48) = edx_2
    arg1[0x5b] = 0
    return divu.dp.d(edx_1:eax_2, edi_1)

if (ecx s<= 0 || ecx s> 4)
    void* eax_4 = *arg1
    *(eax_4 + 0x14) = 0x1a
    *(eax_4 + 0x18) = ecx
    *(eax_4 + 0x1c) = 4
    (*eax_4)(arg1)

int32_t eax_7 = sub_498530(arg1[7], arg1[0x4e] << 3)
int32_t edx_4 = arg1[0x4f] << 3
arg1[0x58] = eax_7
int32_t i = sub_498530(arg1[8], edx_4)
arg1[0x59] = i
bool cond:1 = arg1[0x53] s<= 0
arg1[0x5a] = 0
int32_t i_1 = 0

if (not(cond:1))
    void* var_c_1 = &arg1[0x54]
    
    do
        void* ecx_4 = *var_c_1
        uint32_t edi_3 = *(ecx_4 + 8)
        int32_t ebx_2 = *(ecx_4 + 0xc)
        *(ecx_4 + 0x40) = *(ecx_4 + 0x24) * edi_3
        uint32_t edx_7 = modu.dp.d(0:(*(ecx_4 + 0x1c)), edi_3)
        *(ecx_4 + 0x38) = ebx_2
        int32_t j_1 = ebx_2 * edi_3
        *(ecx_4 + 0x34) = edi_3
        *(ecx_4 + 0x3c) = j_1
        
        if (edx_7 == 0)
            edx_7 = edi_3
        
        int32_t eax_13 = *(ecx_4 + 0x20)
        uint32_t edi_4 = *(ecx_4 + 0xc)
        *(ecx_4 + 0x44) = edx_7
        uint32_t edx_9 = modu.dp.d(0:eax_13, edi_4)
        
        if (edx_9 == 0)
            edx_9 = edi_4
        
        *(ecx_4 + 0x48) = edx_9
        
        if (arg1[0x5a] + j_1 s> 0xa)
            void* eax_15 = *arg1
            *(eax_15 + 0x14) = 0xd
            (*eax_15)(arg1)
        
        if (j_1 s> 0)
            int32_t j
            
            do
                arg1[arg1[0x5a] + 0x5b] = i_1
                j = j_1
                j_1 -= 1
                arg1[0x5a] += 1
            while (j != 1)
        
        i = i_1 + 1
        i_1 = i
        var_c_1 += 4
    while (i s< arg1[0x53])

return i
