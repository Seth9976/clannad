// 函数: sub_428c70
// 地址: 0x428c70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg3 + 0x48)
int32_t eax = *(arg3 + 0x44)

if (arg1 u<= 0x1ff)
    int32_t esi_1 = *(arg1 * 0x6c + 0x1382fc4)
    
    if (esi_1 != 0 && eax s>= 0 && eax s< *(arg1 * 0x6c + 0x1382fc8))
        eax *= 2
        int32_t edx_3 = *(esi_1 + (eax << 3) + 8)
        
        if (edx_3 != 0 && ecx s>= 0 && ecx s< *(esi_1 + (eax << 3) + 0xc))
            int32_t eax_1 = ecx * 5
            int32_t ecx_1 = *(edx_3 + (eax_1 << 3) + 0x10)
            void* esi_2 = edx_3 + (eax_1 << 3)
            
            if (ecx_1 == 0xffffffff)
                *arg4 = 0xffffffff
            else
                *arg4 = arg2 + ecx_1
            
            int32_t ecx_2 = *(arg3 + 0x4c)
            int32_t eax_4 = *(esi_2 + 0x14)
            
            if (ecx_2 == 0xffffffff)
                arg4[0x36] = eax_4
                arg4[0x37] = *(esi_2 + 0x18)
                int32_t eax_5
                eax_5.b = *(esi_2 + 0x20)
                arg4[0x38].b = eax_5.b
                arg4[0x39] = *(esi_2 + 0x24)
                int32_t eax_7 = *(esi_2 + 0x1c)
                *(arg3 + 0x20) = eax_7
                return eax_7
            
            arg4[ecx_2 + 0x24] = eax_4
            arg4[*(arg3 + 0x4c) + 0x2c] = *(esi_2 + 0x18)
            int32_t eax_8
            eax_8.b = *(esi_2 + 0x20)
            *(*(arg3 + 0x4c) + arg4 + 0xd0) = eax_8.b
            arg4[0x39] = *(esi_2 + 0x24)
            eax = *(esi_2 + 0x1c)
            *(arg3 + 0x20) = eax

return eax
