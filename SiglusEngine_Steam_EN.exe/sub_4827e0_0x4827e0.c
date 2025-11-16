// 函数: sub_4827e0
// 地址: 0x4827e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result
int32_t edx_2
edx_2:result = muls.dp.d(0x7af4f3ff, arg1 - 0x9331f8)
int32_t esi = arg1[7]
int32_t ecx_2 = (arg1 - 0x9331f8) s/ 0x42a0
int32_t edi = 0
int32_t var_8 = 0

if (esi s> 0)
    result = arg1[2]
    
    if (result == 0)
    label_4828d0:
        void* ebx_1 = &arg1[edi * 0x85]
        int32_t edx_9 = *(ebx_1 + 0x22c)
        int32_t edi_3 = edx_9
        int32_t eax_7 = *(ebx_1 + 0x230)
        
        if (eax_7 s< edx_9)
            edi_3 = eax_7
        
        int32_t eax_9
        int32_t edx_10
        edx_10:eax_9 = sx.q(eax_7 - edx_9)
        int32_t edx_13 = modu.dp.d(0:(sub_4d18c0(2)), (eax_9 ^ edx_10) - edx_10 + 1) + edi_3
        arg1[4] = var_8
        int32_t eax_12 = data_1392710
        arg1[6] = edx_13
        arg1[5] = eax_12
        return sub_4a1640(eax_12, ebx_1 + 0x20, *arg1, 1, 0, 0)
    
    if (result == 1)
        int32_t eax_2
        int32_t edx_4
        edx_4:eax_2 = sx.q(arg1[4] + 1)
        result = divs.dp.d(edx_4:eax_2, esi)
        edi = mods.dp.d(edx_4:eax_2, esi)
    label_48292d:
        var_8 = edi
        
        if (edi s>= 0)
            goto label_4828d0
        
        goto label_482934
    
    if (result != 3)
        if (result == 2)
            int32_t eax_3 = arg1[4]
            int32_t esi_3
            
            if (eax_3 s< 0 || eax_3 s>= esi)
                esi_3 = arg1[3] * 2
            else
                esi_3 = arg1[3] * 2 - arg1[eax_3 * 0x85 + 0x8a]
            
            if (esi_3 s> 0)
                uint32_t temp1_2 = modu.dp.d(0:(sub_4d18c0(2)), esi_3)
                result = 0
                int32_t esi_5 = 0
                int32_t edx_8 = arg1[7]
                
                if (edx_8 s> 0)
                    uint32_t ecx_3 = temp1_2
                    void* edi_2 = &arg1[0x8a]
                    
                    do
                        if (esi_5 != arg1[4])
                            result += *edi_2 << 1
                            ecx_3 = temp1_2
                        else
                            result += *edi_2
                        
                        if (ecx_3 s< result)
                            edi = esi_5
                            goto label_48292d
                        
                        esi_5 += 1
                        edi_2 += 0x214
                    while (esi_5 s< edx_8)
                    
                    edi = 0
        
        goto label_4828d0
    
    edi = arg1[4] + 1
    var_8 = edi
    
    if (edi s< esi && edi s>= 0)
        goto label_4828d0
    
label_482934:
    
    if (ecx_2 u<= 0xf)
        return sub_4825e0(ecx_2 * 0x42a0 + 0x9331f8)

return result
