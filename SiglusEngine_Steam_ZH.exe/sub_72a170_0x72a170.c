// 函数: sub_72a170
// 地址: 0x72a170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* eax_2 = arg1
int32_t* var_120 = eax_2
int32_t* edi = eax_2[6]
int32_t* var_134 = edi
int32_t ebx = edi[1]
char* esi = *edi

if (ebx != 0)
    goto label_72a1ce

uint32_t eax_4

if (edi[3](eax_2).b != 0)
    esi = *edi
    ebx = edi[1]
    eax_2 = var_120
label_72a1ce:
    void* esi_1 = &esi[1]
    uint32_t ecx_3 = zx.d(*esi) << 8
    int32_t ebx_1 = ebx - 1
    
    if (ebx != 1)
        goto label_72a1f9
    
    if (edi[3](eax_2).b != 0)
        esi_1 = *edi
        ebx_1 = edi[1]
    label_72a1f9:
        int32_t ebx_2 = ebx_1 - 1
        void* esi_2 = esi_1 + 1
        int32_t ecx_5 = ecx_3 - 2 + zx.d(*esi_1)
        int32_t var_124_2 = ecx_5
        
        while (true)
            uint32_t eax_6
            
            if (ecx_5 s<= 0x10)
                if (ecx_5 != 0)
                    *(*var_120 + 0x14) = 0xc
                    (**var_120)(var_120)
                
                eax_6.b = 1
                *edi = esi_2
                edi[1] = ebx_2
                sub_745f2b(eax_1 ^ &__saved_ebp)
                return eax_6
            
            if (ebx_2 == 0)
                if (edi[3](var_120).b == 0)
                    break
                
                esi_2 = *edi
                ebx_2 = edi[1]
            
            uint32_t edx_1 = zx.d(*esi_2)
            void* esi_3 = esi_2 + 1
            int32_t var_148_4 = 1
            *(*var_120 + 0x14) = 0x52
            *(*var_120 + 0x18) = edx_1
            (*(*var_120 + 4))(var_120, var_148_4)
            char var_1c = 0
            uint32_t edx_2 = 0
            int32_t ecx_7 = 1
            uint32_t var_12c_1 = 0
            int32_t var_128_1 = 1
            ebx_2 -= 1
            
            while (true)
                if (ebx_2 == 0)
                    if (edi[3](var_120).b == 0)
                        goto label_72a1af
                    
                    esi_3 = *edi
                    ebx_2 = edi[1]
                    ecx_7 = var_128_1
                    edx_2 = var_12c_1
                
                eax_4.b = *esi_3
                ebx_2 -= 1
                (&var_1c)[ecx_7] = eax_4.b
                esi_3 += 1
                ecx_7 += 1
                edx_2 += zx.d(eax_4.b)
                void* var_130_1 = esi_3
                var_12c_1 = edx_2
                var_128_1 = ecx_7
                
                if (ecx_7 s> 0x10)
                    int32_t var_124_3 = var_124_2 - 0x11
                    int32_t var_148_6 = 2
                    void* ecx_8 = *var_120
                    char var_1b
                    *(ecx_8 + 0x18) = zx.d(var_1b)
                    char var_1a
                    *(ecx_8 + 0x1c) = zx.d(var_1a)
                    char var_19
                    *(ecx_8 + 0x20) = zx.d(var_19)
                    char var_18
                    *(ecx_8 + 0x24) = zx.d(var_18)
                    char var_17
                    *(ecx_8 + 0x28) = zx.d(var_17)
                    char var_16
                    *(ecx_8 + 0x2c) = zx.d(var_16)
                    char var_15
                    *(ecx_8 + 0x30) = zx.d(var_15)
                    char var_14
                    *(ecx_8 + 0x34) = zx.d(var_14)
                    *(*var_120 + 0x14) = 0x58
                    (*(*var_120 + 4))(var_120, var_148_6)
                    int32_t var_150_1 = 2
                    void* ecx_9 = *var_120
                    char var_13
                    *(ecx_9 + 0x18) = zx.d(var_13)
                    char var_12
                    *(ecx_9 + 0x1c) = zx.d(var_12)
                    char var_11
                    *(ecx_9 + 0x20) = zx.d(var_11)
                    char var_10
                    *(ecx_9 + 0x24) = zx.d(var_10)
                    char var_f
                    *(ecx_9 + 0x28) = zx.d(var_f)
                    char var_e
                    *(ecx_9 + 0x2c) = zx.d(var_e)
                    char var_d
                    *(ecx_9 + 0x30) = zx.d(var_d)
                    char var_c
                    *(ecx_9 + 0x34) = zx.d(var_c)
                    *(*var_120 + 0x14) = 0x58
                    (*(*var_120 + 4))(var_120, var_150_1)
                    eax_4 = var_12c_1
                    
                    if (eax_4 s> 0x100 || eax_4 s> var_124_3)
                        *(*var_120 + 0x14) = 9
                        (**var_120)(var_120)
                        eax_4 = var_12c_1
                    
                    int32_t ecx_11 = 0
                    int32_t var_128_2 = 0
                    char var_11c[0x100]
                    
                    if (eax_4 s> 0)
                        do
                            if (ebx_2 == 0)
                                if (edi[3](var_120).b == 0)
                                    goto label_72a1af
                                
                                esi_3 = *edi
                                ebx_2 = edi[1]
                                ecx_11 = var_128_2
                            
                            eax_4.b = *esi_3
                            ebx_2 -= 1
                            var_11c[ecx_11] = eax_4.b
                            esi_3 += 1
                            eax_4 = var_12c_1
                            ecx_11 += 1
                            var_130_1 = esi_3
                            var_128_2 = ecx_11
                        while (ecx_11 s< eax_4)
                    
                    var_124_2 = var_124_3 - eax_4
                    uint32_t ecx_12 = edx_1
                    void** esi_4 = var_120
                    uint32_t* edi_2
                    
                    if ((ecx_12.b & 0x10) == 0)
                        edi_2 = &esi_4[ecx_12 + 0x28]
                    else
                        ecx_12 -= 0x10
                        edi_2 = &esi_4[0x2c + ecx_12]
                    
                    if (ecx_12 s< 0 || ecx_12 s>= 4)
                        *(*esi_4 + 0x14) = 0x1f
                        *(*esi_4 + 0x18) = ecx_12
                        (**esi_4)(esi_4)
                    
                    if (*edi_2 == 0)
                        uint32_t eax_45
                        eax_45, ecx_12 = (*esi_4[1])(esi_4, 0, 0x112)
                        *(eax_45 + 0x111) = 0
                        *edi_2 = eax_45
                    
                    eax_6 = *edi_2
                    ecx_12.b = var_c
                    *eax_6 = var_1c.o
                    *(eax_6 + 0x10) = ecx_12.b
                    __builtin_memcpy(*edi_2 + 0x11, &var_11c, 0x100)
                    ecx_5 = var_124_2
                    esi_2 = var_130_1
                    edi = var_134
                    break

label_72a1af:
eax_4.b = 0
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_4
