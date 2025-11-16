// 函数: sub_49ec6e
// 地址: 0x49ec6e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg3
int32_t edi
int32_t var_10 = edi
int32_t edi_1 = arg4
int32_t eax_1 = arg2 & 0xfffff
*arg1 = arg2
arg1[1] = ecx
arg1[3] = edi_1

if (arg5 == 0)
    switch (arg2 & 0xf0000000)
        case 0
            ecx = 0
            edi_1 = 0
        case 0x10000000
            ecx = eax_1
            edi_1 = eax_1
        case 0x20000000
            ecx = eax_1 * 2
            edi_1 = eax_1
        case 0x30000000
            ecx = eax_1 * 3
            edi_1 = eax_1
        case 0x40000000
            ecx = eax_1 << 2
            edi_1 = eax_1
        case 0x50000000
            int32_t edx_2 = arg2 & 0xfff00000
            
            if (edx_2 == 0x50000000)
                ecx = eax_1 * 2
                
                if (edi_1 == 0xffffffff)
                    edi_1 = 1
            else if (edx_2 == 0x50100000)
                ecx = eax_1
                edi_1 = eax_1
            else if (edx_2 == 0x50200000)
                ecx = eax_1
                edi_1 = 1
            else if (edx_2 == 0x50300000)
                ecx = eax_1
                edi_1 = eax_1
        case 0x60000000
            int32_t edx_1 = arg2 & 0xfff00000
            bool cond:7_1
            
            if (edx_1 u> 0x60a00000)
                if (edx_1 u<= 0x60f00000)
                    if (edx_1 == 0x60f00000)
                        goto label_49ed64
                    
                    if (edx_1 == 0x60b00000)
                        goto label_49edb6
                    
                    if (edx_1 == 0x60c00000 || edx_1 == 0x60d00000)
                        goto label_49ed36
                    
                    cond:7_1 = edx_1 != 0x60e00000
                    goto label_49ed30
                
                if (edx_1 == 0x61000000)
                label_49edb6:
                    ecx = 0xc
                    edi_1 = 4
                else if (edx_1 == 0x61100000 || edx_1 == 0x61200000)
                label_49ed36:
                    ecx = 8
                    edi_1 = 4
                else
                    cond:7_1 = edx_1 != 0x61300000
                label_49ed30:
                    
                    if (not(cond:7_1))
                        goto label_49ed36
            else if (edx_1 == 0x60a00000)
            label_49ed64:
                ecx = 6
                edi_1 = 4
            else
                if (edx_1 u> 0x60500000)
                    if (edx_1 == 0x60600000 || edx_1 == 0x60700000 || edx_1 == 0x60800000)
                        goto label_49ed36
                    
                    cond:7_1 = edx_1 != 0x60900000
                    goto label_49ed30
                
                if (edx_1 != 0x60500000 && edx_1 != 0x60000000)
                    if (edx_1 == 0x60100000 || edx_1 == 0x60200000 || edx_1 == 0x60300000)
                        goto label_49ed36
                    
                    cond:7_1 = edx_1 != 0x60400000
                    goto label_49ed30
                
                edi_1 = 4
                ecx = 4
    
    if (arg1[1] == 0xffffffff)
        arg1[1] = ecx
    
    if (arg1[3] == 0xffffffff)
        arg1[3] = edi_1
    
    int32_t edx_3 = arg1[1]
    int32_t eax_2
    
    if (edx_3 == ecx)
        eax_2 = arg1[3]
    
    if (edx_3 != ecx || eax_2 != edi_1 || edx_3 == 0xffffffff || eax_2 == 0xffffffff)
        return 0x80004005

int32_t eax_3 = arg1[1]

if (eax_3 u> 8)
    int32_t eax_5 = sub_49ec06(eax_3)
    arg1[2] = eax_5
    
    if (eax_5 != 0)
        goto label_49ee5f
else
    arg1[2] = &arg1[0x10]
label_49ee5f:
    int32_t eax_6 = arg1[3]
    
    if (eax_6 u<= 4)
        arg1[4] = &arg1[0x18]
    label_49ee70:
        int32_t ecx_3 = arg1[1] << 2
        __builtin_memset(__builtin_memset(arg1[2], 0xffffffff, ecx_3 u>> 2 << 2), 0xff, ecx_3 & 3)
        int32_t ecx_8 = arg1[3] << 2
        __builtin_memset(__builtin_memset(arg1[4], 0xffffffff, ecx_8 u>> 2 << 2), 0xff, ecx_8 & 3)
        arg1[9] = 0
        arg1[0xa] = 0
        arg1[0xb] = 0
        arg1[0xe] = 0
        arg1[0xf] = 0
        return 0
    
    int32_t eax_9 = sub_49ec06(eax_6)
    arg1[4] = eax_9
    
    if (eax_9 != 0)
        goto label_49ee70

return 0x8007000e
