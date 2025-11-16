// 函数: sub_4353f3
// 地址: 0x4353f3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t result = 0
int32_t eax = sub_433f9c(arg1, arg2, 1)

if (eax != 0)
    void* ecx_4 = *(*(eax + 4) + 0x40) + *(arg1 + 0x344) + *(eax + 0x18)
    
    if (*(ecx_4 + 0x10) == 0 || *(eax + 0x10) != 0xffffffff)
        int32_t edx_1
        edx_1.b = arg3 != 0
        int32_t edx_2 = *(ecx_4 + 4)
        
        if (edx_2 s>= 0 && edx_2 s<= 3 && *(ecx_4 + 0x14) == 1 && *(ecx_4 + 0x18) == 1)
            void* eax_2 = *(*(eax + 0x1c) + 8)
            int32_t ecx_5 = *(eax_2 + 0x10)
            
            if (ecx_5 == 0 || ecx_5 == 1 || ecx_5 == 2)
                *(eax_2 + 0x18) = edx_1
                return result
            
            if (ecx_5 == 3)
                *(eax_2 + 0x18) = fconvert.d(float.t(edx_1))
                return result

return 0x8876086c
