// 函数: sub_42f5f6
// 地址: 0x42f5f6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* i = arg1

if (i != 0)
    int32_t edi
    int32_t var_10_1 = edi
    
    do
        if (arg3 != 0)
            i[6] = *arg3
            *arg3 += *i << 2
        
        if (arg2 != 0)
            int32_t edx_1 = i[5]
            int32_t ecx_4 = *i << 2
            int32_t esi_1
            
            if (edx_1 != 0)
                esi_1 = edx_1 + 0x18
            else
                esi_1 = i[1]
            
            int32_t esi_2
            int32_t edi_3
            edi_3, esi_2 = __builtin_memcpy(i[6] + arg2, esi_1, ecx_4 u>> 2 << 2)
            __builtin_memcpy(edi_3, esi_2, ecx_4 & 3)
        
        i = i[2]
    while (i != 0)

return 0
