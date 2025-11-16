// 函数: sub_410f5b
// 地址: 0x410f5b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t var_8 = 0
int32_t edi
int32_t var_2c = edi
int32_t ebx = *(arg1 + 4)
int16_t var_14 = 3
int16_t var_c = -1
int16_t* var_10 = ebx + zx.d(arg2) * 6
uint32_t result

do
    result = zx.d(*var_10)
    arg2.d = result
    
    if (result.w != 0xffff)
        uint32_t esi_1 = zx.d(result.w)
        
        if (*(*(arg1 + 0x10) + (esi_1 - zx.d(*(arg1 + 0x14))) * 6) == 0)
            uint32_t eax_6 = sub_40d96a(arg1, arg2)
            int32_t ecx_2 = 0xffff
            arg2.d = 0xffff
            int32_t i_1 = 3
            int16_t* esi_2 = ebx + esi_1 * 6
            int32_t i
            
            do
                uint32_t eax_7
                eax_7.w = *esi_2
                
                if (eax_7.w != 0xffff
                        && *(*(arg1 + 0x10) + (zx.d(eax_7.w) - zx.d(*(arg1 + 0x14))) * 6) == 0)
                    eax_7 = sub_40d96a(arg1, *esi_2)
                    
                    if (eax_7.w u< arg2)
                        arg2.d = eax_7
                    
                    ecx_2 = arg2.d
                
                esi_2 = &esi_2[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
            
            if (ecx_2.w == 0xffff)
                arg2.d = 0
                ecx_2 = 0
            
            int16_t var_1c
            
            if (eax_6.w u< var_c)
                var_14 = var_8.w
                var_c = eax_6.w
                var_1c.d = ecx_2
            else if (eax_6.w == var_c && ecx_2.w u< var_1c)
                var_14 = var_8.w
                var_1c.d = ecx_2
    
    var_8 += 1
    var_10 = &var_10[1]
while (var_8.w u< 3)

result.w = var_14
return result
