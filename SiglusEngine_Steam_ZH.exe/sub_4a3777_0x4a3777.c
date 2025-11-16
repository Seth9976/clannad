// 函数: sub_4a3777
// 地址: 0x4a3777
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg4
int32_t ecx = arg3
int32_t edi
int32_t var_2c = edi

if (arg5 != 0)
    int32_t eax_1 = 0
    
    if (edx u> 0)
        do
            *(ecx + (eax_1 << 2)) = eax_1
            eax_1 += 1
        while (eax_1 u< edx)
    
    int32_t eax_2 = 0
    
    if (edx u> 0)
        do
            int32_t ebx_1 = *(arg1 + 0x14)
            int32_t* edx_1 = ecx + (eax_2 << 2)
            int32_t esi_1 = *edx_1
            int32_t var_8_1 = eax_2
            eax_2 += 1
            arg3 = *(*(ebx_1 + (*(arg2 + (esi_1 << 2)) << 2)) + 0x10)
            arg5 = eax_2
            
            if (eax_2 u< arg4)
                do
                    int32_t eax_7 =
                        *(*(ebx_1 + (*(arg2 + (*(ecx + (arg5 << 2)) << 2)) << 2)) + 0x10)
                    
                    if (eax_7 u< arg3)
                        var_8_1 = arg5
                        arg3 = eax_7
                    else if (eax_7 == arg3 && arg5 u< var_8_1)
                        var_8_1 = arg5
                        arg3 = eax_7
                    
                    arg5 += 1
                while (arg5 u< arg4)
            
            int32_t* ebx_2 = ecx + (var_8_1 << 2)
            *edx_1 = *ebx_2
            edx = arg4
            *ebx_2 = esi_1
        while (eax_2 u< edx)

int32_t eax_10 = 0

if (edx u> 0)
    int32_t var_24[0x4]
    
    do
        var_24[eax_10] = *(arg2 + (*(&var_24 + ecx - &var_24 + (eax_10 << 2)) << 2))
        eax_10 += 1
    while (eax_10 u< edx)
    
    if (edx u> 0)
        __builtin_memcpy(arg2, &var_24, edx << 2)

return 0
