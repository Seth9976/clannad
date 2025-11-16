// 函数: sub_45e12c
// 地址: 0x45e12c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg3

if (eax u> 0xffff)
    eax = 0xffff

if (arg2 u> eax)
    return 0

int32_t edi
int32_t var_8_1 = edi
int32_t eax_4 = sub_745f3f((eax - arg2 + 1) * 2)
int32_t result

if (eax_4 != 0)
    int32_t i = 0
    
    if (eax - arg2 + 1 u> 0)
        do
            if (sub_45acfb(arg1, arg2 + i) == 0)
                int32_t eax_7
                eax_7.w = *(arg1 + 0x7a)
                *(eax_4 + (i << 1)) = eax_7.w
            
            i += 1
        while (i u< eax - arg2 + 1)
    
    int32_t result_2 = sub_45c417(arg1, eax_4, eax - arg2 + 1, 0)
    int32_t result_1
    
    result_1 = result_2 s>= 0 ? 0 : result_2
    
    j__free(eax_4)
    result = result_1
else
    result = 0x8007000e

return result
