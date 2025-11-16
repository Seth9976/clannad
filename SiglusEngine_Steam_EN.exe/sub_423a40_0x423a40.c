// 函数: sub_423a40
// 地址: 0x423a40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* ebx = &arg1[1]

if (arg1[1] != 0 && arg1[3] != 0 && arg1[4] != 0)
    int32_t eax_2 = arg1[5]
    
    if (eax_2 != 0 && eax_2 != 1)
        char var_210[0x208]
        sub_4d67a0(*arg1, &var_210)
        int32_t edi_1 = arg1[4] * arg1[3]
        int32_t var_220 = 0
        BOOL var_214 = 0
        int32_t result = edi_1 << 2
        sub_4d6960(&var_210, &var_214, &var_220, result, &var_210)
        int32_t* edx_2 = arg1
        int32_t eax_4 = edx_2[5]
        
        if (eax_4 == 2)
            int32_t* edi_2 = *ebx
            int32_t* var_230_1 = edi_2
            int32_t i_3 = *edi_2
            void* eax_5 = &edi_2[1]
            int32_t i_4 = i_3
            
            if (i_3 s> 0)
                int32_t i
                
                do
                    void* ecx_2 = *eax_5
                    int32_t esi_1 = *(eax_5 + 4)
                    eax_5 += 8
                    
                    if (ecx_2 != 0 && esi_1 s> 0)
                        uint32_t j_2 = zx.d(*(ecx_2 + edi_2 + 2))
                        void* esi_3 = ecx_2 + edi_2 + 0x74
                        uint32_t j_1 = j_2
                        
                        if (j_2 s> 0)
                            uint32_t j
                            
                            do
                                int32_t var_240_1 = 0xff
                                int32_t var_244_1 = 0xffffffff
                                int32_t var_248_1 = 0xffffffff
                                int32_t var_24c_1 = 0xffffffff
                                int16_t* ecx_3 = esi_3
                                int32_t edi_3 = zx.d(ecx_3[4])
                                uint32_t ebx_1 = zx.d(ecx_3[3])
                                uint32_t eax_7 = zx.d(*ecx_3)
                                sub_584e80(eax_7, edx_2[3], var_214, edx_2[4], esi_3 + 0x5c, ebx_1, 
                                    edi_3, 0, 0, 0, eax_7, zx.d(ecx_3[1]), 0xff)
                                edx_2 = arg1
                                j = j_1
                                j_1 -= 1
                                esi_3 = esi_3 + 0x5c + ((edi_3 * ebx_1) << 2)
                            while (j != 1)
                            i_3 = i_4
                            edi_2 = var_230_1
                    
                    i = i_3
                    i_3 -= 1
                    i_4 = i_3
                while (i != 1)
            
            ebx = &edx_2[1]
            edx_2[5] = 1
        else if (eax_4 != 3)
            edx_2[5] = 1
        else
            int16_t* ecx_9 = *ebx
            void* esi_6 = &ecx_9[1 + zx.d(*ecx_9) * 2]
            
            if (esi_6 != 0)
                int32_t eax_11 = edx_2[4]
                void* edx_5 = edx_2[3]
                int32_t var_240_2 = 0xffffffff
                int32_t var_244_2 = 0xffffffff
                int32_t var_248_2 = 0xffffffff
                int32_t var_24c_2 = 0xffffffff
                sub_58d2d0(eax_11, edx_5, var_214, eax_11, esi_6, edx_5, eax_11, 0, 0, &ecx_9[1], 
                    0, 0, 0xff)
                edx_2 = arg1
            
            int32_t i_2 = edx_2[4] * edx_2[3]
            char* eax_13 = var_214 + 3
            
            if (i_2 s> 0)
                int32_t i_1
                
                do
                    *eax_13 = 0xff
                    eax_13 = &eax_13[4]
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            
            edx_2[5] = 0
        
        sub_4d6c40(arg1, ebx)
        int32_t ecx_6 = var_220
        *ebx = var_214
        *arg1 = ecx_6
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return result

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
