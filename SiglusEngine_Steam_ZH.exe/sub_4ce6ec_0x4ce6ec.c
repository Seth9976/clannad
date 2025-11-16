// 函数: sub_4ce6ec
// 地址: 0x4ce6ec
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_114 = edi
int32_t* eax = arg1[0x40]
int32_t esi = *eax
int32_t var_c = 0
int32_t var_28 = 0
int32_t var_10 = 0
int32_t edi_1 = 1
int32_t esi_1 = esi & 0xfffff
int32_t var_24 = 1
int32_t var_20 = 2
int32_t var_1c = 3
int32_t* var_108
int32_t var_c8

if (sub_4c73cc(arg1, eax, 0xaccc38, &var_108, &var_c, &var_c8, &var_28, esi_1, 1) != 0)
    int32_t eax_2 =
        sub_4c73cc(arg1, arg1[0x40], 0xaccc98, &var_108, &var_c, &var_c8, &var_28, esi_1, 1)
    
    if (eax_2 != 0)
        return eax_2
    
    var_10 = 1

if (*var_108 == 0x50000002)
    int32_t var_8_1 = 1
    
    if (esi_1 u> 1)
        int32_t* eax_5 = *(arg1[0x40] + 8)
        void* ecx_3 = (esi_1 << 2) + 4
        void* edx_1 = &eax_5[1]
        
        while (true)
            if (*edx_1 != *eax_5)
                return edi_1
            
            int32_t eax_8 = *(arg1[0x40] + 8)
            
            if (*(ecx_3 + eax_8) != *(eax_8 + (esi_1 << 2)))
                return 1
            
            var_8_1 += 1
            edx_1 += 4
            ecx_3 += 4
            
            if (var_8_1 u>= esi_1)
                break
            
            edi_1 = 1
    
    void* eax_9 = sub_49ec23(0x74)
    int32_t* var_8_2
    
    if (eax_9 == 0)
        var_8_2 = nullptr
    else
        var_8_2 = sub_49e789(eax_9)
    
    edi_1 = sub_49ec6e(var_8_2, 0x70800002, 6, esi_1, 0)
    
    if (edi_1 s>= 0)
        edi_1 = sub_49e7bf(var_8_2, arg1[0x40])
        
        if (edi_1 s>= 0)
            __builtin_memcpy(var_8_2[4], *(arg1[0x40] + 0x10), esi_1 << 2)
            int32_t* eax_15 = var_8_2[2]
            *eax_15 = var_c8
            int32_t var_c4
            eax_15[1] = var_c4
            int32_t var_b8
            int32_t var_b4
            void* eax_16
            int32_t ecx_11
            
            if (var_10 != 0)
                int32_t ecx_12 = arg1[5]
                void* esi_3 = *(ecx_12 + (var_b4 << 2))
                int32_t var_18_1 = var_b8
                void* eax_18 = *(ecx_12 + (var_b8 << 2))
                int32_t ecx_13 = *(eax_18 + 0x38)
                int32_t var_10_1 = var_b4
                
                if (ecx_13 != 0xffffffff)
                    eax_18 = *(arg1[5] + (ecx_13 << 2))
                    var_18_1 = ecx_13
                
                int32_t ecx_14 = *(esi_3 + 0x38)
                
                if (ecx_14 != 0xffffffff)
                    esi_3 = *(arg1[5] + (ecx_14 << 2))
                    var_10_1 = ecx_14
                
                int32_t var_118_2 = ecx_14
                int32_t var_11c_3 = ecx_14
                var_11c_3.q = fconvert.d(float.t(0))
                int32_t eax_20
                int32_t ecx_16
                eax_20, ecx_16 =
                    sub_49f544(arg1, *(eax_18 + 4), *(eax_18 + 0xc), *(eax_18 + 0x10), var_11c_3)
                int32_t var_118_3 = ecx_16
                int32_t var_11c_4 = ecx_16
                var_11c_4.q = fconvert.d(float.t(0))
                var_c = sub_49f544(arg1, *(esi_3 + 4), *(esi_3 + 0xc), *(esi_3 + 0x10), var_11c_4)
                
                if (eax_20 != 0xffffffff && var_c != 0xffffffff)
                    int32_t eax_23 = eax_20 << 2
                    *(*(eax_23 + arg1[5]) + 0x3c) = var_18_1 ^ 0x80000
                    int32_t edx_7 = var_c << 2
                    *(*(edx_7 + arg1[5]) + 0x3c) = var_10_1 ^ 0x80000
                    *(*(eax_23 + arg1[5]) + 0x38) = var_18_1
                    *(*(edx_7 + arg1[5]) + 0x38) = var_10_1
                    *(var_8_2[2] + 8) = eax_20
                    eax_16 = var_8_2[2]
                    ecx_11 = var_c
                    goto label_4ce95c
                
                edi_1 = 0x8007000e
            else
                eax_16 = var_8_2[2]
                *(eax_16 + 8) = var_b8
                ecx_11 = var_b4
            label_4ce95c:
                *(eax_16 + 0xc) = ecx_11
                int32_t var_a8
                *(var_8_2[2] + 0x10) = var_a8
                *(var_8_2[2] + 0x14) = var_a8
                
                if ((*(*arg1 + 0x30))(var_8_2) == 0)
                    edi_1 = sub_49eecd(arg1[0x40], var_8_2)
                else
                    edi_1 = 1
    
    if (var_8_2 != 0)
        sub_46cb59(var_8_2, 1)

return edi_1
