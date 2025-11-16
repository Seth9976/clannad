// 函数: sub_481980
// 地址: 0x481980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg3
int32_t edx = *(esi + 0x34)
int32_t var_8 = *(esi + 0x38)
void* eax_1 = *(esi + 0x3c)
arg3 = eax_1

if (arg2 u> 0xff)
    *esi = 1
    return eax_1

if (edx s>= 0)
    eax_1 = *(arg2 * 0x58 + 0x1b164c0)
    
    if (edx s< *(eax_1 + 0x94))
        int32_t* ebx = *(arg2 * 0x58 + 0x1b164cc) + edx * 0x78
        void var_c
        
        if (sub_481670(&var_8, arg2 * 0x58 + &data_1b16490, esi, ebx, &var_8, &arg3, &var_c) == 0)
            int32_t i
            
            do
                arg3 += 1
                i = sub_481670(&var_8, arg2 * 0x58 + &data_1b16490, esi, ebx, &var_8, &arg3, &var_c)
            while (i == 0)
        
        int32_t ecx_8 = 0x64
        int32_t eax_12 = *(
            *(*(arg2 * 0x58 + 0x1b164c8) + ((ebx[var_8 + 2] * 0x1a + arg3) << 2) + 8) * 0x60
            + *(arg2 * 0x58 + 0x1b164c4) + 0x38)
        
        if (eax_12 != 0)
            ecx_8 = eax_12
        
        *(esi + 0x20) = ecx_8
        return eax_12

*esi = 1
return eax_1
