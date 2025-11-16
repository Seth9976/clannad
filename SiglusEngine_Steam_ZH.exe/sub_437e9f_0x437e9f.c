// 函数: sub_437e9f
// 地址: 0x437e9f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* esi = arg1
int32_t edi
int32_t var_14 = edi
int32_t result = 0
int32_t var_8_1 = ecx

if (esi == 0)
    return 0

int32_t eax_1 = *(esi + 4)

if (eax_1 == 1)
    while (*(esi + 4) == 1)
        int32_t eax_18 = sub_437e9f(*(esi + 8), &arg2[result * 4])
        esi = *(esi + 0xc)
        result += eax_18
        
        if (esi == 0)
            break
    
    if (esi != 0)
        return result + sub_437e9f(esi, &arg2[result * 4])
else
    if (eax_1 == 6)
        return sub_437e9f(*(esi + 0x18), arg2)
    
    if (eax_1 == 8)
        int32_t i = 0
        
        if (*(esi + 0x14) u> 0)
            do
                result += sub_437e9f(*(esi + 0x10), &arg2[result * 4])
                i += 1
            while (i u< *(esi + 0x14))
    else if (eax_1 == 9)
        result = *(esi + 0x1c) * *(esi + 0x18)
        int32_t eax_10 = 3
        
        switch (*(esi + 0x14))
            case 0
                eax_10 = 0
            case 1, 2, 3, 4
                eax_10 = 1
            case 5, 6, 7, 8
                eax_10 = 2
            case 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x19, 0x1a, 0x1b, 0x1c
                eax_10 = 5
            case 0x14, 0x15, 0x16, 0x17, 0x18, 0x1d
                eax_10 = 4
        
        if (result u> 0)
            int32_t* ecx_2 = arg2
            int32_t edx_2 = result
            int32_t i_1
            
            do
                *ecx_2 = eax_10
                ecx_2 = &ecx_2[4]
                i_1 = edx_2
                edx_2 -= 1
            while (i_1 != 1)
    else if (eax_1 == 0xb)
        return sub_437e9f(*(esi + 0x20), arg2)

return result
