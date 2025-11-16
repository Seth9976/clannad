// 函数: sub_4359a8
// 地址: 0x4359a8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_10 = edi
int32_t result = 0

if (arg4 != 0 && arg3 == 0)
    return 0x8876086c

int32_t eax_1 = sub_433f9c(arg1, arg2, 1)

if (eax_1 != 0)
    void* ecx_5 = *(*(eax_1 + 4) + 0x40) + *(arg1 + 0x344) + *(eax_1 + 0x18)
    int32_t edx_1 = *(ecx_5 + 4)
    
    if (edx_1 s>= 0 && edx_1 s<= 3)
        int32_t esi_2 = *(ecx_5 + 0x10)
        
        if (esi_2 == 0 || *(eax_1 + 0x10) != 0xffffffff)
            esi_2 = 1
        
        int32_t edx_4 = *(ecx_5 + 0x18) * *(ecx_5 + 0x14) * esi_2
        
        if (arg4 u>= edx_4)
            arg4 = edx_4
        
        void* esi_3 = *(eax_1 + 0x1c)
        int32_t ecx_6 = 0
        
        if (arg4 u<= 0)
            return result
        
        while (true)
            if (esi_3 == 0)
                return result
            
            void* eax_2 = *(esi_3 + 8)
            int32_t edx_5 = *(eax_2 + 0x10)
            
            if (edx_5 == 0 || edx_5 == 1 || edx_5 == 2)
                int32_t edx_11
                edx_11.b = *(arg3 + (ecx_6 << 2)) != 0
                *(eax_2 + 0x18) = edx_11
            else
                if (edx_5 != 3)
                    return 0x8876086c
                
                int32_t edx_10
                edx_10.b = *(arg3 + (ecx_6 << 2)) != 0
                *(eax_2 + 0x18) = fconvert.d(float.t(edx_10))
            
            esi_3 = *(esi_3 + 0xc)
            ecx_6 += 1
            
            if (ecx_6 u>= arg4)
                return result

return 0x8876086c
