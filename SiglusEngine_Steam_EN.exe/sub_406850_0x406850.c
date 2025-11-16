// 函数: sub_406850
// 地址: 0x406850
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg2[1] + 0x1f8) == 0)
    return 0

int32_t ecx_1 = *arg2
int32_t* result = sub_4038a0(arg1, *(arg3 + 0x484) << 2)
int32_t j_2 = *(arg2[1] + 0x200)
int32_t eax_3
eax_3.b = ((j_2 << 2) + 3).b & 0xfc
__chkstk(eax_3)
int32_t __saved_edi
int32_t* ebx = &__saved_edi
int32_t* var_14 = &__saved_edi
int32_t i_1 = 0

if (*(arg3 + 0x484) s> 0)
    int32_t* result_1 = result
    arg4 -= result_1
    int32_t i
    
    do
        *result_1 = sub_4038a0(arg1, ecx_1 << 2)
        int32_t var_18_1 = 0
        
        if (ecx_1 s> 0)
            arg2 = nullptr
            int32_t ecx_8
            
            do
                if (j_2 s> 0)
                    int32_t* eax_10 = arg2
                    int32_t* ecx_5 = ebx
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        ecx_5 = &ecx_5[1]
                        void* ebx_3 = *(arg4 + result_1) + eax_10
                        eax_10 = &eax_10[1]
                        ecx_5[-1] = ebx_3
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    ebx = var_14
                
                sub_5f02f0(ebx, j_2, 4, sub_4069b0)
                
                if (j_2 s> 0)
                    int32_t* ecx_6 = arg2
                    int32_t* eax_11 = ebx
                    int32_t j_3 = j_2
                    bool cond:3_1
                    
                    do
                        int32_t edx_3 = *eax_11
                        eax_11 = &eax_11[1]
                        ecx_6 = &ecx_6[1]
                        *(*result_1 + ecx_6 - 4) = (edx_3 - *(arg4 + result_1)) s>> 2
                        cond:3_1 = j_3 != 1
                        j_3 -= 1
                    while (cond:3_1)
                    ebx = var_14
                
                ecx_8 = var_18_1 + j_2
                var_18_1 = ecx_8
                arg2 = &arg2[j_2]
            while (ecx_8 s< ecx_1)
        
        i = i_1 + 1
        result_1 = &result_1[1]
        i_1 = i
    while (i s< *(arg3 + 0x484))

return result
