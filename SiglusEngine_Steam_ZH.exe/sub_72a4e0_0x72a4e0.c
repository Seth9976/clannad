// 函数: sub_72a4e0
// 地址: 0x72a4e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg1
int32_t* ebx = eax[6]
int32_t* var_8 = eax
int32_t* var_2c = ebx
int32_t esi = ebx[1]
char* edi = *ebx

if (esi != 0)
    goto label_72a51e

if (ebx[3](eax) != 0)
    edi = *ebx
    esi = ebx[1]
    eax = var_8
label_72a51e:
    void* edi_1 = &edi[1]
    uint32_t ecx_1 = zx.d(*edi) << 8
    int32_t esi_1 = esi - 1
    
    if (esi != 1)
        goto label_72a543
    
    if (ebx[3](eax) != 0)
        edi_1 = *ebx
        esi_1 = ebx[1]
    label_72a543:
        uint32_t i = ecx_1 - 2 + zx.d(*edi_1)
        int32_t esi_2 = esi_1 - 1
        void* edi_2 = edi_1 + 1
        bool cond:0_1 = i == 0
        
        while (i s> 0)
            if (esi_2 == 0)
                if (ebx[3](var_8) == 0)
                    return 0
                
                edi_2 = *ebx
                esi_2 = ebx[1]
            
            uint32_t edx_1 = zx.d(*edi_2)
            esi_2 -= 1
            int32_t eax_6 = edx_1 s>> 4
            int32_t edx_2 = edx_1 & 0xf
            edi_2 += 1
            int32_t var_20_1 = esi_2
            *(*var_8 + 0x14) = 0x53
            void* var_24_1 = edi_2
            *(*var_8 + 0x18) = edx_2
            *(*var_8 + 0x1c) = eax_6
            (*(*var_8 + 4))(var_8, 1)
            int32_t edx_4 = edx_2
            
            if (edx_4 s>= 4)
                *(*var_8 + 0x14) = 0x20
                *(*var_8 + 0x18) = edx_4
                (**var_8)(var_8)
                edx_4 = edx_2
            
            int32_t* ecx_7 = var_8
            void* eax_17 = &ecx_7[0x24 + edx_4]
            
            if (ecx_7[0x24 + edx_4] == 0)
                void* eax_20 = (*ecx_7[1])(ecx_7, 0, 0x82)
                *(eax_20 + 0x80) = 0
                *eax_17 = eax_20
                ecx_7 = var_8
            
            void* edx_5 = *eax_17
            uint32_t eax_21 = i - 1
            void* var_28_1 = edx_5
            
            if (eax_6 == 0)
                if (eax_21 s>= 0x40)
                    eax_21 = 0x40
                else
                    __builtin_memcpy(edx_5, 
                        "\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x"
                    "00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01"
                    "00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01"
                    "00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01"
                    "00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01"
                    "00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01"
                    "00\x01\x00\x01\x00\x01\x00\x01\x00", 
                        0x80)
            else if (eax_21 s>= 0x80)
                eax_21 = 0x40
            else
                __builtin_memcpy(edx_5, 
                    "\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x"
                "01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01"
                "00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00"
                "01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01"
                "00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00"
                "01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01"
                "00\x01\x00", 
                    0x80)
                eax_21 s>>= 1
            
            void* const var_c_1
            
            if (eax_21 - 4 u> 0x2d)
                var_c_1 = &data_ade9e0
            else
                switch (eax_21 + &jump_table_72a850[6])
                    case &lookup_table_72a86c
                        var_c_1 = &data_adeb20
                    case &lookup_table_72a86c[1], &lookup_table_72a86c[2], &lookup_table_72a86c[3], 
                            &lookup_table_72a86c[4], &lookup_table_72a86c[6], 
                            &lookup_table_72a86c[7], &lookup_table_72a86c[8], 
                            &lookup_table_72a86c[9], &lookup_table_72a86c[0xa], 
                            &lookup_table_72a86c[0xb], &lookup_table_72a86c[0xd], 
                            &lookup_table_72a86c[0xe], &lookup_table_72a86c[0xf], 
                            &lookup_table_72a86c[0x10], &lookup_table_72a86c[0x11], 
                            &lookup_table_72a86c[0x12], &lookup_table_72a86c[0x13], 
                            &lookup_table_72a86c[0x14], &lookup_table_72a86c[0x16], 
                            &lookup_table_72a86c[0x17], &lookup_table_72a86c[0x18], 
                            &lookup_table_72a86c[0x19], &lookup_table_72a86c[0x1a], 
                            &lookup_table_72a86c[0x1b], &lookup_table_72a86c[0x1c], 
                            &lookup_table_72a86c[0x1d], &lookup_table_72a86c[0x1e], 
                            &lookup_table_72a86c[0x1f], &lookup_table_72a86c[0x21], 
                            &lookup_table_72a86c[0x22], &lookup_table_72a86c[0x23], 
                            &lookup_table_72a86c[0x24], &lookup_table_72a86c[0x25], 
                            &lookup_table_72a86c[0x26], &lookup_table_72a86c[0x27], 
                            &lookup_table_72a86c[0x28], &lookup_table_72a86c[0x29], 
                            &lookup_table_72a86c[0x2a], &lookup_table_72a86c[0x2b], 
                            &lookup_table_72a86c[0x2c]
                        var_c_1 = &data_ade9e0
                    case &lookup_table_72a86c[5]
                        var_c_1 = &data_ade960
                    case &lookup_table_72a86c[0xc]
                        var_c_1 = &data_ade740
                    case &lookup_table_72a86c[0x15]
                        var_c_1 = &data_adec40
                    case &lookup_table_72a86c[0x20]
                        var_c_1 = &data_adeb70
                    case &lookup_table_72a86c[0x2d]
                        var_c_1 = &data_ade7c0
            
            int32_t var_1c_3 = 0
            
            if (eax_21 s> 0)
                while (true)
                    uint16_t ecx_10
                    
                    if (eax_6 == 0)
                        if (esi_2 == 0)
                            if (ebx[3](ecx_7) == 0)
                                return 0
                            
                            edi_2 = *ebx
                            esi_2 = ebx[1]
                            edx_5 = var_28_1
                        
                        ecx_10 = zx.w(*edi_2)
                    else
                        if (esi_2 == 0)
                            if (ebx[3](ecx_7) == 0)
                                return 0
                            
                            edi_2 = *ebx
                            esi_2 = ebx[1]
                        
                        uint32_t ecx_8 = zx.d(*edi_2)
                        edi_2 += 1
                        int32_t temp4_1 = esi_2
                        esi_2 -= 1
                        
                        if (temp4_1 == 1)
                            if (ebx[3](var_8) == 0)
                                return 0
                            
                            edi_2 = *ebx
                            esi_2 = ebx[1]
                        
                        edx_5 = var_28_1
                        ecx_10 = (ecx_8 << 8).w + zx.w(*edi_2)
                    
                    esi_2 -= 1
                    edi_2 += 1
                    var_24_1 = edi_2
                    var_20_1 = esi_2
                    ebx = var_2c
                    *(edx_5 + (*(var_c_1 + (var_1c_3 << 2)) << 1)) = ecx_10
                    int32_t eax_31 = var_1c_3 + 1
                    var_1c_3 = eax_31
                    
                    if (eax_31 s>= eax_21)
                        break
                    
                    ecx_7 = var_8
            
            if (*(*var_8 + 0x68) s>= 2)
                void* edi_3 = edx_5 + 4
                int32_t j_1 = 8
                int32_t j
                
                do
                    void* ecx_11 = *var_8
                    *(ecx_11 + 0x18) = zx.d(*(edi_3 - 4))
                    *(ecx_11 + 0x1c) = zx.d(*(edi_3 - 2))
                    *(ecx_11 + 0x20) = zx.d(*edi_3)
                    *(ecx_11 + 0x24) = zx.d(*(edi_3 + 2))
                    *(ecx_11 + 0x28) = zx.d(*(edi_3 + 4))
                    *(ecx_11 + 0x2c) = zx.d(*(edi_3 + 6))
                    *(ecx_11 + 0x30) = zx.d(*(edi_3 + 8))
                    *(ecx_11 + 0x34) = zx.d(*(edi_3 + 0xa))
                    *(*var_8 + 0x14) = 0x5f
                    (*(*var_8 + 4))(var_8, 2)
                    edi_3 += 0x10
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                esi_2 = var_20_1
                edi_2 = var_24_1
                ebx = var_2c
            
            i = i - 1 - eax_21
            
            if (eax_6 != 0)
                i -= eax_21
            
            cond:0_1 = i == 0
        
        if (not(cond:0_1))
            *(*var_8 + 0x14) = 0xc
            (**var_8)(var_8)
        
        *ebx = edi_2
        uint32_t result
        result.b = 1
        ebx[1] = esi_2
        return result

return 0
