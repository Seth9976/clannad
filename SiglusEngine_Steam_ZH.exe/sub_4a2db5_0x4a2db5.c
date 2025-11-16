// 函数: sub_4a2db5
// 地址: 0x4a2db5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *(*(arg1 + 0x14) + (arg2 << 2))
int32_t eax_1 = *(esi + 0x48)

if (eax_1 != 0xffffffff)
    int32_t i
    int32_t edx_2
    
    if (eax_1 u>= arg4 && eax_1 u< arg5)
        void* eax_5 = *(*(arg1 + 0x14) + (**(arg3 + 0x10) << 2))
        edx_2 = *(eax_5 + 0x18)
        i = *(eax_5 + 0x14)
        
        if (i != 0xffffffff)
            int32_t edi
            int32_t var_c_1 = edi
            
            while (i != *(esi + 0x14))
                void* eax_6 = *(*(arg1 + 0x14) + (i << 2))
                edx_2 = *(eax_6 + 0x18)
                i = *(eax_6 + 0x14)
                
                if (i == 0xffffffff)
                    break
    
    if (eax_1 u< arg4 || eax_1 u>= arg5 || i != *(esi + 0x14) || edx_2 != *(esi + 0x18))
        return 0

return 1
