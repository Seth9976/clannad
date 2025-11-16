// 函数: sub_49d8ad
// 地址: 0x49d8ad
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1[6]
int32_t edi
int32_t var_34 = edi

if (*(eax + 0xa) != 0)
    int32_t eax_3 = sub_745f3f(zx.d(*(eax + 0xa)) << 2)
    arg1[0xe] = eax_3
    
    if (eax_3 == 0)
        return 0x8007000e
    
    uint32_t ecx_2 = zx.d(*(arg1[6] + 0xa)) << 2
    __builtin_memset(__builtin_memset(eax_3, 0, ecx_2 u>> 2 << 2), 0, ecx_2 & 3)
    int32_t var_c_1 = arg1[8]
    void* eax_6 = arg1[6]
    int32_t var_28
    __builtin_memcpy(&var_28, &arg1[1], 0x14)
    uint32_t edx_2 = zx.d(*(eax_6 + 0xa))
    int32_t eax_7 = *(eax_6 + 0xc)
    void* ecx_6 = *arg1
    
    if (eax_7 + (edx_2 << 3) u> *(ecx_6 + 0xc))
        return 0x80004005
    
    int32_t var_8_1 = 0
    void* edi_4 = *(ecx_6 + 8) + eax_7
    
    if (edx_2 u> 0)
        while (true)
            int32_t ecx_7 = *(edi_4 + 4)
            void* eax_8 = *arg1
            
            if (ecx_7 + 0x10 u> *(eax_8 + 0xc))
                return 0x80004005
            
            void* esi_3 = *(eax_8 + 8)
            int32_t var_10 = 0
            int32_t var_14 = 0
            int16_t* esi_4 = esi_3 + ecx_7
            sub_49aa5d(eax_8, &var_28, esi_4, 1, &var_10, &var_14)
            uint32_t edx_4 = zx.d(*(arg1 + 0xa))
            uint32_t ecx_8 = zx.d(arg1[3].w)
            var_28 = *edi_4
            int32_t var_1c_1 = *(edi_4 + 4)
            int32_t eax_10
            eax_10.w = esi_4[4]
            eax_10.w *= var_10.w
            int16_t var_20_1 = eax_10.w
            uint32_t ecx_9 = ecx_8 + edx_4
            int16_t var_22
            uint32_t edx_5 = zx.d(var_22)
            
            if (zx.d(eax_10.w) + edx_5 s> ecx_9)
                if (ecx_9 - edx_5 s>= 0)
                    var_20_1 = ecx_9.w - edx_5.w
                else
                    var_20_1 = 0
            
            *(arg1[0xe] + (var_8_1 << 2)) = sub_49d615(*arg1, &var_28, esi_4, var_c_1)
            int32_t* eax_15 = arg1[0xe] + (var_8_1 << 2)
            
            if (*eax_15 == 0)
                return 0x8007000e
            
            int32_t ecx_12
            ecx_12.w = var_20_1
            var_22 += ecx_12.w
            int16_t var_24
            ecx_12.w = var_24
            int16_t temp1_1 = ecx_12.w
            ecx_12.w = neg.w(ecx_12.w)
            var_c_1 += (((sbb.d(ecx_12, ecx_12, temp1_1 != 0) & 3) + 1) * *(*eax_15 + 0x2c)
                * zx.d(esi_4[4])) << 2
            edi_4 += 8
            var_8_1 += 1
            
            if (var_8_1 u>= zx.d(*(arg1[6] + 0xa)))
                return 0

return 0
