// 函数: sub_40f900
// 地址: 0x40f900
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

float ecx
float var_4 = ecx
int32_t edi = arg1
void* esi = *(arg2 + 0x14)
int32_t eax_1 = sub_410bd0(edi + 4, *(esi + 0xc))

if (eax_1 s> 0)
    var_4 =
        fconvert.s(float.t(eax_1) / float.t((1 << (*(esi + 0xc)).b) - 1) * float.t(*(esi + 0x10)))
    int32_t eax_4 = sub_410bd0(edi + 4, sub_40c650(*(esi + 0x14)))
    
    if (eax_4 != 0xffffffff && eax_4 s< *(esi + 0x14))
        arg1 = 0
        int32_t edx_3 = *(esi + (eax_4 << 2) + 0x18) * 0xb
        int32_t ecx_4 = *(*(*(*(edi + 0x40) + 4) + 0x1c) + 0xb20)
        int32_t* esi_1 = ecx_4 + (edx_3 << 2)
        int32_t result = sub_4038a0(edi, ((*(arg2 + 4) + *(ecx_4 + (edx_3 << 2))) << 2) + 4)
        int32_t i = 0
        
        if (*(arg2 + 4) s> 0)
            do
                if (sub_408690(esi_1, result + (i << 2), edi + 4, *esi_1) == 0xffffffff)
                    return 0
                
                i += *esi_1
            while (i s< *(arg2 + 4))
        
        int32_t i_1 = 0
        
        if (*(arg2 + 4) s> 0)
            do
                int32_t j = 0
                
                if (*esi_1 s> 0)
                    float* eax_15 = result + (i_1 << 2)
                    
                    do
                        long double x87_r7_5 = fconvert.t(arg1) + fconvert.t(*eax_15)
                        j += 1
                        i_1 += 1
                        eax_15 = &eax_15[1]
                        eax_15[-1] = fconvert.s(x87_r7_5)
                    while (j s< *esi_1)
                
                arg1 = fconvert.s(fconvert.t(*(result + (i_1 << 2) - 4)))
            while (i_1 s< *(arg2 + 4))
        
        *(result + (*(arg2 + 4) << 2)) = fconvert.s(fconvert.t(var_4))
        return result

return 0
