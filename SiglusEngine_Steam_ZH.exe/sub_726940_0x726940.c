// 函数: sub_726940
// 地址: 0x726940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t edi = 0
void var_28
void* result

for (int32_t i = 1; i s<= 0xf; i += 1)
    void var_26
    result.w = *(&var_28 + arg4 - &var_26 + (i << 1))
    result.w += edi
    result.w *= 2
    edi = result.w
    *(&var_28 + (i << 1)) = edi

int32_t edi_1 = 0

if (arg2 s>= 0)
    result = arg2
    
    do
        uint32_t i_1 = zx.d(*(arg3 + (edi_1 << 2) + 2))
        
        if (i_1 != 0)
            uint32_t eax = zx.d(*(&var_28 + (i_1 << 1)))
            uint32_t esi = eax
            *(&var_28 + (i_1 << 1)) = eax.w + 1
            int32_t eax_2 = 0
            
            do
                i_1 -= 1
                int32_t ecx_4 = esi & 1
                esi u>>= 1
                eax_2 = (eax_2 | ecx_4) * 2
            while (i_1 s> 0)
            
            *(arg3 + (edi_1 << 2)) = (eax_2 u>> 1).w
            result = arg2
        
        edi_1 += 1
    while (edi_1 s<= result)

return result
