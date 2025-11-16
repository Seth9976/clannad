// 函数: sub_4ac940
// 地址: 0x4ac940
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg2
int32_t* edi = arg1[0xc]
int32_t ebx
int32_t var_28

if (arg2 u> 7)
    ebx = var_28
else
    switch (arg2)
        case 0, 2, 5, 7
            ebx = *arg1
            arg1[1] -= 1
        case 1, 3, 4, 6
            ebx = arg1[1]
            *arg1 -= 1
int32_t esi = 0

if (ebx s> 0)
    do
        int32_t eax_2 = arg1[4]
        arg1[0xd] += 1
        *edi = eax_2
        edi[1] = arg1[5]
        edi[2] = arg1[6]
        edi[3] = arg1[7]
        edi[4] = arg1[8]
        edi[5] = arg1[9]
        edi[6] = arg1[0xa]
        edi[7] = arg1[0xb]
        edi = &edi[0xa]
        
        if (arg1[0xd] s>= data_1bfe300:0xc)
            return 1
        
        if (esi s< ebx - 1 && arg2 u<= 7)
            switch (arg2)
                case 0, 5
                    int32_t edx = arg1[2]
                    arg1[4] += edx
                    arg1[6] += edx
                    arg1[8] += edx
                    arg1[0xa] += edx
                case 1, 4
                    int32_t edx_1 = arg1[3]
                    arg1[5] += edx_1
                    arg1[7] += edx_1
                    arg1[9] += edx_1
                    arg1[0xb] += edx_1
                case 2, 7
                    int32_t eax_12 = arg1[2]
                    arg1[4] -= eax_12
                    arg1[6] -= eax_12
                    arg1[8] -= eax_12
                    arg1[0xa] -= eax_12
                case 3, 6
                    int32_t eax_13 = arg1[3]
                    arg1[5] -= eax_13
                    arg1[7] -= eax_13
                    arg1[9] -= eax_13
                    arg1[0xb] -= eax_13
            
            arg2 = var_8
        
        esi += 1
    while (esi s< ebx)

switch (arg2)
    case 0, 7
        int32_t eax_15 = arg1[3]
        arg1[5] += eax_15
        arg1[7] += eax_15
        arg1[9] += eax_15
        arg1[0xb] += eax_15
        arg1[0xc] = edi
        return 0
    case 1, 6
        int32_t eax_17 = arg1[2]
        arg1[4] -= eax_17
        arg1[6] -= eax_17
        arg1[8] -= eax_17
        arg1[0xa] -= eax_17
        arg1[0xc] = edi
        return 0
    case 2, 5
        int32_t eax_19 = arg1[3]
        arg1[5] -= eax_19
        arg1[7] -= eax_19
        arg1[9] -= eax_19
        arg1[0xb] -= eax_19
        arg1[0xc] = edi
        return 0
    case 3, 4
        int32_t eax_21 = arg1[2]
        arg1[4] += eax_21
        arg1[6] += eax_21
        arg1[8] += eax_21
        arg1[0xa] += eax_21

arg1[0xc] = edi
return 0
