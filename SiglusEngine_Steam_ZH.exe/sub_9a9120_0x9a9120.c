// 函数: sub_9a9120
// 地址: 0x9a9120
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg6
int32_t result = 0
int32_t var_34_1
__builtin_memset(&var_34_1, 0, 0x2c)
_memset(esi, 0, 0x38)
int32_t ecx = arg5
int32_t edx = arg4
*esi = edx
*(esi + 4) = ecx

if (ecx s>= arg7)
    ecx = arg7 - 1
    arg5 = ecx

int32_t var_30_1
int32_t var_2c_1
int32_t var_28_1
int32_t var_24_1
int32_t var_20_1
int32_t var_1c_1
int32_t var_18_1
int32_t var_14_1
int32_t var_10_1
int32_t var_c_1

if (edx s<= ecx)
    int32_t* edi = arg3 + (edx << 2)
    int32_t* eax_2 = arg2 - arg3
    int32_t result_1 = 0
    int32_t* var_8_1 = eax_2
    
    do
        float xmm1_1 = *edi
        int32_t ecx_1 = int.d(xmm1_1 * 7.31428576f + 1023.5f)
        
        if (ecx_1 s> 0x3ff)
            ecx_1 = 0x3ff
        label_9a91ee:
            int32_t eax_5 = edx * edx
            
            if (*(eax_2 + edi) f+ *(arg8 + 0x458) < xmm1_1)
                var_28_1 += eax_5
                var_24_1 += ecx_1
                var_20_1 += edx
                var_2c_1 += ecx_1 * ecx_1
                var_30_1 += ecx_1 * edx
                var_34_1 += 1
            else
                var_14_1 += eax_5
                var_10_1 += ecx_1
                var_c_1 += edx
                var_18_1 += ecx_1 * ecx_1
                var_1c_1 += ecx_1 * edx
                result_1 += 1
            
            eax_2 = var_8_1
        else if (ecx_1 s>= 0 && ecx_1 != 0)
            goto label_9a91ee
        
        edx += 1
        edi = &edi[1]
    while (edx s<= arg5)
    
    esi = arg6
    result = result_1

*(esi + 8) = var_c_1
*(esi + 0xc) = var_10_1
*(esi + 0x10) = var_14_1
*(esi + 0x14) = var_18_1
*(esi + 0x18) = var_1c_1
*(esi + 0x20) = var_20_1
*(esi + 0x24) = var_24_1
*(esi + 0x28) = var_28_1
*(esi + 0x2c) = var_2c_1
*(esi + 0x30) = var_30_1
*(esi + 0x34) = var_34_1
*(esi + 0x1c) = result
return result
