// 函数: sub_417760
// 地址: 0x417760
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_131d300 = 0

if (data_13130c0:0xc == 0xffffffff)
    data_107eff4 = 0
    data_131d300 = 1

void* result = &data_131d574
int32_t i_3 = 0x10
int32_t i

do
    *(result - 0x118) = 0
    result += 0x3b4
    *(result - 0x3b4) = 0
    i = i_3
    i_3 -= 1
while (i != 1)
int32_t ecx = data_131d2d0

if (ecx != 0xffffffff && data_131256c == 0 && data_13125b4 == 0 && data_1311174 == 0
        && (data_1311178 == 0 || data_641adf == 0))
    result = data_71929c
    char var_5_1 = 0
    
    if (result != 0x22 && result != 0x23 && result != 0x24)
        goto label_417832
    
    if (data_1311170 == 0)
        var_5_1 = 1
    label_417832:
        int32_t esi_1 = data_131d2ec
        int32_t var_18_1 = esi_1
        int32_t edx_1
        
        if (esi_1 == 0xffffffff)
            esi_1 = data_13130dc
            edx_1 = data_13130e0
            var_18_1 = esi_1
        else
            edx_1 = 0xffffffff
        
        int32_t var_1c_1 = edx_1
        
        if (result == 0x13)
            if (data_108f2d4 != 2)
                goto label_41786a
        else if (result != 0x26 || data_108f2d4 != 2)
        label_41786a:
            esi_1 = 0xffffffff
            var_18_1 = 0xffffffff
            var_1c_1 = 0xffffffff
        
        void* edi_2 = ecx * 0x10c + 0x1097fe4
        void* var_c_1 = edi_2
        result = sub_416080(esi_1)
        void* result_1 = result
        int32_t* esi_2 = &data_131d318
        int32_t var_28 = 0
        char* var_20 = nullptr
        int32_t i_2 = 0
        int32_t i_1
        
        do
            int32_t ecx_2 = *esi_2
            
            if (ecx_2 != 0xffffffff)
                int32_t var_10_1
                int32_t eax
                
                if (esi_2[1] != 0)
                    eax = 3
                    var_10_1 = eax
                else
                    eax = 0
                    var_10_1 = 0
                    
                    if ((data_71929c == 0x13 || data_131d2ec != 0xffffffff) && ecx_2 == var_18_1)
                        if (var_1c_1 == 0xffffffff)
                            eax = var_1c_1 + 2
                            var_10_1 = eax
                        else if (ecx_2 == var_1c_1)
                            eax = 2
                            var_10_1 = eax
                
                int32_t* edi_4 = edi_2 + eax * 0x14 + 0xa4
                int32_t var_24_1
                
                if (data_131d2fc != 0 && esi_2[0x35] != 0)
                    var_24_1 = 1
                
                if (data_131d2fc == 0 || esi_2[0x35] == 0 || esi_2[0x3d] == 0)
                    var_24_1 = 0
                
                int32_t edx_3 = data_1cd4328
                int32_t eax_4 = *(*(edx_3 + (data_131d2f8 << 2)) + (esi_2[0x36] << 2))
                char var_2c_1 = eax_4.b
                void* result_2 = *(*(edx_3 + (eax_4 << 2)) + (edi_4[3] << 2))
                
                if (data_131d304 != 0xffffffff || data_131d308 != 0xffffffff)
                    esi_2[0x51] = var_24_1
                    esi_2[0x50].b = var_2c_1
                    esi_2[0x3e] = *edi_4
                    esi_2[0x3f] = esi_2[0x37] + edi_4[1] + esi_2[0xc]
                    int32_t eax_14 = esi_2[0x38] + edi_4[2] + esi_2[0xd]
                    esi_2[0x40] = eax_14
                    esi_2[0x4f] = 0
                    
                    if (var_5_1 == 0)
                        eax_14 = edi_4[4]
                        esi_2[0x4f] = eax_14
                        esi_2[0x50].b = result_2.b
                    else
                        esi_2[0x4f] = 0xffffffce
                    
                    if (data_131d308 != 0xffffffff)
                        sub_4d1c30(eax_14, &esi_2[0x3e], &esi_2[0xca], 0x8c)
                        uint32_t eax_15 = zx.d(esi_2[0xdc].b)
                        int32_t edi_5 = data_13132a4
                        int32_t ecx_7 = 0
                        esi_2[0xdb] = 0
                        
                        if (var_5_1 != 0)
                            ecx_7 = 2
                        
                        int32_t var_40
                        int32_t var_3c
                        int32_t var_38
                        int32_t var_34
                        sub_57a4a0(&var_38, edi_5, ecx_7, data_1313294, data_1313298, data_131329c, 
                            data_13132a0, &var_38, &var_3c, &var_40, &var_34, eax_15)
                        esi_2[0xdc].b = var_34.b
                        esi_2[0xd8] = var_38
                        esi_2[0xd9] = var_3c
                        esi_2[0xda] = var_40
                        int32_t eax_21 = 0
                        
                        if (edi_5 == 0)
                            eax_21 = 4
                        
                        esi_2[0xcd] = eax_21
                
                char* eax_22 = esi_2[4]
                
                if (eax_22 != 0 && esi_2[6] == 0)
                    sub_4158f0(sub_4cfe90(eax_22, &var_20, &var_28, eax_22, "BTNSELSTRTMP"), 
                        var_20, i_2, *esi_2, esi_2[1], esi_2[2], esi_2[0xb])
                    sub_4d6c40(&var_28, &var_20)
                
                if (esi_2[4] != 0 && esi_2[6] != 0)
                    esi_2[0x97] = var_24_1
                    esi_2[0x96].b = var_2c_1
                    int32_t eax_26 = esi_2[0x37]
                    int32_t eax_28
                    
                    if (*(var_c_1 + 0x7c) != 2)
                        eax_28 = eax_26 + edi_4[1] + *(var_c_1 + 0x74)
                    else
                        eax_28 = eax_26 - *(var_c_1 + 0x74) + edi_4[1]
                    
                    esi_2[0x85] = eax_28 + esi_2[0xe] + esi_2[0xc]
                    esi_2[0x86] =
                        esi_2[0x38] + edi_4[2] + *(var_c_1 + 0x78) + esi_2[0xf] + esi_2[0xd]
                    esi_2[0x95] = 0
                    *(esi_2 + 0x245) = 0
                    
                    if (var_5_1 == 0)
                        if (var_10_1 == 1 || var_10_1 == 2)
                            int32_t eax_40 = *(var_c_1 + 0x84)
                            
                            if (eax_40 s>= 0 && eax_40 s< 0x100)
                                *(esi_2 + 0x242) = (&data_12a2990)[eax_40 * 2].b
                                int32_t eax_42 = *(var_c_1 + 0x84)
                                *(esi_2 + 0x245) = 0xff
                                *(esi_2 + 0x243) = (&data_12a2990)[eax_42 * 2]:1.b
                                esi_2[0x91].b = (&data_12a2992)[*(var_c_1 + 0x84) << 2]
                        
                        if (var_10_1 == 0 || var_10_1 == 3)
                            esi_2[0x95] = neg.d(*(var_c_1 + 0x88))
                        
                        esi_2[0x95] += edi_4[4]
                        esi_2[0x96].b = result_2.b
                    else
                        *(esi_2 + 0x242) = data_12a2d88
                        *(esi_2 + 0x243) = data_12a2d89
                        esi_2[0x91].b = data_12a2d8a
                        *(esi_2 + 0x245) = 0xff
                
                result = result_1
                
                if (i_2 != result || data_131d300 == 0
                        || (data_71929c != 0x13 && data_131d2ec == 0xffffffff))
                    edi_2 = var_c_1
                else
                    esi_2 = result * 0x3b4 + &data_131d318
                    void* result_3 = esi_2[2]
                    
                    if (result_3 s< 0 && result_3 != 0xffffffff)
                        result = data_131d2dc
                        result_3 = 0xffffffff
                        
                        if (result s>= 0)
                            result_3 = result
                    
                    if (result_3 != data_107efa0)
                        if (result_3 s< 0)
                            sub_57e1c0()
                        else
                            result = sub_57e0c0(0xffffffff, result_3)
                    
                    if (data_107efa0 u> 0x1f)
                        edi_2 = var_c_1
                    else
                        data_107eff4 = 1
                        data_107efac = *(var_c_1 + 0x94) + esi_2[0x37] + edi_4[1] + esi_2[0xc]
                        edi_2 = var_c_1
                        data_107efb0 = *(var_c_1 + 0x98) + esi_2[0x38] + edi_4[2] + esi_2[0xd]
                        result = result_2
                        data_107eff0 = result.b
                        data_131d300 = 2
            
            esi_2 = &esi_2[0xed]
            i_1 = i_2 + 1
            i_2 = i_1
        while (i_1 s< 0x10)

return result
