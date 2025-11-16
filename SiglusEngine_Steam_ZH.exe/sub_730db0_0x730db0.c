// 函数: sub_730db0
// 地址: 0x730db0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1[0x6c]

if ((*(arg1[0x6b] + 8))(arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t i = 0
int32_t i_1 = 0

if (arg1[0x4c] s> 0)
    void* ecx = &arg1[0x4d]
    void* edi_1 = ebx + 0x24
    void* var_c_1 = ecx
    
    do
        void* edx_1 = *ecx
        
        if (*(arg1 + 0xc9) == 0)
        label_730e2f:
            _memset(*(ebx + (*(edx_1 + 0x14) << 2) + 0x38), 0, 0x40)
            i = i_1
            ecx = var_c_1
            *(edi_1 - 0x10) = 0
            *edi_1 = 0
        else if (arg1[0x5e] == 0 && arg1[0x60] == 0)
            goto label_730e2f
        
        if (*(arg1 + 0xc9) != 0)
            if (arg1[0x5e] != 0)
            label_730e78:
                _memset(*(ebx + (*(edx_1 + 0x18) << 2) + 0x78), 0, 0x100)
                i = i_1
                ecx = var_c_1
        else if (arg1[0x64] != 0)
            goto label_730e78
        
        i += 1
        ecx += 4
        edi_1 += 4
        i_1 = i
        var_c_1 = ecx
    while (i s< arg1[0x4c])

*(ebx + 8) = 0
*(ebx + 0xc) = 0
*(ebx + 0x10) = 0xfffffff0
int32_t result = arg1[0x3f]
*(ebx + 0x34) = result
return result
