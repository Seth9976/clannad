// 函数: sub_745590
// 地址: 0x745590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1

if (*(esi + 0x58) s>= 2 && *(esi + 4) != 0)
    int32_t eax_1 = *(esi + 0x34)
    
    if (arg2 s< eax_1)
        if (arg2 s>= 0)
            int32_t edx_4 = *(esi + 0x44)
            int32_t ecx_4 = arg2 * 2
            *(edx_4 + (ecx_4 << 3) + 0xc)
            return *(edx_4 + (ecx_4 << 3) + 8)
        
        int64_t var_c = 0
        int32_t i = 0
        int32_t ebx = 0
        
        if (eax_1 s<= 0)
            return 0
        
        arg1 = nullptr
        void* result
        
        do
            int32_t eax_2
            int32_t edx_1
            eax_2, edx_1 = sub_745590(esi, i)
            result = arg1 + eax_2
            bool c_1 = arg1 + eax_2 u< arg1
            arg1 = result
            ebx = adc.d(ebx, edx_1, c_1)
            i += 1
        while (i s< *(esi + 0x34))
        
        return result

return 0xffffff7d
