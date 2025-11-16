// 函数: sub_40f2d0
// 地址: 0x40f2d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg2
int32_t* edi = ebx[0x144]
void* esi = arg1 + 4
int32_t eax_1 = *(*(*(*(arg1 + 0x40) + 4) + 0x1c) + 0xb20)

if (sub_410bd0(esi, 1) != 1)
    return 0

int32_t* result = sub_4038a0(arg1, ebx[0x141] << 2)
*result = sub_410bd0(esi, sub_40c650(ebx[0x143] - 1))
result[1] = sub_410bd0(esi, sub_40c650(ebx[0x143] - 1))
arg1 = nullptr
int32_t var_24_1 = 2

if (*edi s> 0)
    void* var_20_1 = &edi[1]
    bool cond:3_1
    
    do
        int32_t ebx_1 = 0
        int32_t esi_1 = *var_20_1
        int32_t ecx_5 = edi[esi_1 + 0x30]
        int32_t edx_4 = edi[esi_1 + 0x20]
        int32_t ebp_1 = 1 << ecx_5.b
        int32_t var_14_1 = edx_4
        int32_t var_10_1 = ecx_5
        
        if (ecx_5 != 0)
            ebx_1 = sub_407fd0(eax_1 + edi[esi_1 + 0x40] * 0x2c, esi)
            
            if (ebx_1 == 0xffffffff)
                return 0
            
            edx_4 = var_14_1
            ecx_5 = var_10_1
        
        int32_t var_c_1 = 0
        
        if (edx_4 s> 0)
            int32_t* esi_3 = &result[var_24_1]
            bool cond:7_1
            
            do
                void* eax_17 = ((ebp_1 - 1) & ebx_1) + (esi_1 << 3) + 0x50
                ebx_1 s>>= ecx_5.b
                int32_t eax_18 = edi[eax_17]
                
                if (eax_18 s< 0)
                    *esi_3 = 0
                else
                    int32_t eax_20 = sub_407fd0(eax_1 + eax_18 * 0x2c, esi)
                    *esi_3 = eax_20
                    
                    if (eax_20 == 0xffffffff)
                        return 0
                    
                    edx_4 = var_14_1
                    ecx_5 = var_10_1
                
                esi_3 = &esi_3[1]
                cond:7_1 = var_c_1 + 1 s< edx_4
                var_c_1 += 1
            while (cond:7_1)
        
        cond:3_1 = arg1 + 1 s< *edi
        var_24_1 += edx_4
        arg1 += 1
        var_20_1 += 4
    while (cond:3_1)
    ebx = arg2

arg1 = 2

if (ebx[0x141] s> 2)
    arg2 = &result[2]
    void* esi_4 = &ebx[0xc3]
    void* var_20_2 = &edi[0xd3]
    bool cond:8_1
    
    do
        int32_t eax_26 = *esi_4
        int32_t ecx_13 = *(esi_4 + 0xfc)
        int32_t eax_28 = sub_40e4e0(edi[ecx_13 + 0xd1], edi[eax_26 + 0xd1], result[ecx_13], 
            result[eax_26], *var_20_2)
        int32_t ecx_16 = ebx[0x143] - eax_28
        int32_t var_8_2 = ecx_16
        
        if (ecx_16 s>= eax_28)
            var_8_2 = eax_28
        
        int32_t edx_15 = *arg2
        
        if (edx_15 == 0)
            eax_28:1.b |= 0x80
            *arg2 = eax_28
        else
            int32_t ecx_18
            
            if (edx_15 s< var_8_2 * 2)
                if ((edx_15.b & 1) == 0)
                    ecx_18 = edx_15 s>> 1
                else
                    ecx_18 = neg.d((edx_15 + 1) s>> 1)
            else if (ecx_16 s<= eax_28)
                ecx_18 = ecx_16 - edx_15 - 1
            else
                ecx_18 = edx_15 - eax_28
            
            *arg2 = ecx_18 + eax_28
            int32_t ecx_24 = *(esi_4 + 0xfc)
            result[ecx_24] &= 0x7fff
            int32_t edx_20 = *esi_4
            result[edx_20] &= 0x7fff
        
        esi_4 += 4
        var_20_2 += 4
        cond:8_1 = arg1 + 1 s< ebx[0x141]
        arg1 += 1
        arg2 = &arg2[1]
    while (cond:8_1)

return result
