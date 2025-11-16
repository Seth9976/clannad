// 函数: sub_465440
// 地址: 0x465440
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
void** entry_ebx
int32_t* eax = entry_ebx[6]
char* esi = *eax
int32_t edi
int32_t var_140 = edi
int32_t edi_1 = eax[1]
int32_t* var_128 = eax

if (edi_1 != 0)
    goto label_465490

if (eax[3](entry_ebx) != 0)
    eax = var_128
    char* ecx_1 = *eax
    int32_t edx_1 = eax[1]
    char* var_124_1 = ecx_1
    int32_t var_120_1 = edx_1
    esi = ecx_1
    edi_1 = edx_1
label_465490:
    int32_t ecx_2
    ecx_2:1.b = *esi
    int32_t edi_2 = edi_1 - 1
    void* esi_1 = &esi[1]
    
    if (edi_2 != 0)
        goto label_4654d0
    
    if (eax[3](entry_ebx) != 0)
        eax = var_128
        void* ecx_3 = *eax
        int32_t edx_2 = eax[1]
        void* var_124_2 = ecx_3
        esi_1 = ecx_3
        int32_t var_120_2 = edx_2
        edi_2 = edx_2
    label_4654d0:
        int32_t edi_3 = edi_2 - 1
        int32_t i_1 = ecx_2 + zx.d(*esi_1) - 2
        void* esi_2 = esi_1 + 1
        int32_t i = i_1
        
        if (i_1 s> 0x10)
            do
                if (edi_3 == 0)
                    if (eax[3](entry_ebx) == 0)
                        goto label_4657ae
                    
                    void* ecx_5 = *var_128
                    int32_t edx_4 = var_128[1]
                    void* var_124_3 = ecx_5
                    int32_t var_120_3 = edx_4
                    esi_2 = ecx_5
                    edi_3 = edx_4
                
                uint32_t ecx_6 = zx.d(*esi_2)
                void* eax_5 = *entry_ebx
                int32_t var_144_4 = 1
                int32_t edi_4 = edi_3 - 1
                *(eax_5 + 0x14) = 0x50
                void* esi_3 = esi_2 + 1
                *(eax_5 + 0x18) = ecx_6
                (*(eax_5 + 4))(entry_ebx, var_144_4)
                int32_t j = 1
                char var_1c = 0
                int32_t var_130_1 = 0
                int32_t j_1 = 1
                void* var_124_5
                int32_t var_120_5
                
                do
                    int32_t edx_5
                    
                    if (edi_4 == 0)
                        int32_t eax_6
                        eax_6, edx_5 = var_128[3](entry_ebx)
                        
                        if (eax_6 == 0)
                            goto label_4657ae
                        
                        void* eax_7 = *var_128
                        int32_t ecx_7 = var_128[1]
                        void* var_124_4 = eax_7
                        esi_3 = eax_7
                        j = j_1
                        int32_t var_120_4 = ecx_7
                        edi_4 = ecx_7
                    
                    edx_5.b = *esi_3
                    (&var_1c)[j] = edx_5.b
                    edi_4 -= 1
                    esi_3 += 1
                    j += 1
                    var_120_5 = edi_4
                    var_124_5 = esi_3
                    var_130_1 += zx.d(edx_5.b)
                    j_1 = j
                while (j s<= 0x10)
                
                void* eax_10 = *entry_ebx
                char var_1b
                *(eax_10 + 0x18) = zx.d(var_1b)
                char var_1a
                *(eax_10 + 0x1c) = zx.d(var_1a)
                char var_19
                *(eax_10 + 0x20) = zx.d(var_19)
                char var_18
                *(eax_10 + 0x24) = zx.d(var_18)
                char var_17
                *(eax_10 + 0x28) = zx.d(var_17)
                char var_16
                *(eax_10 + 0x2c) = zx.d(var_16)
                int32_t var_144_6 = 2
                char var_15
                *(eax_10 + 0x30) = zx.d(var_15)
                char var_14
                *(eax_10 + 0x34) = zx.d(var_14)
                *(eax_10 + 0x14) = 0x56
                (*(eax_10 + 4))(entry_ebx, var_144_6)
                void* eax_11 = *entry_ebx
                char var_13
                *(eax_11 + 0x18) = zx.d(var_13)
                char var_12
                *(eax_11 + 0x1c) = zx.d(var_12)
                char var_11
                *(eax_11 + 0x20) = zx.d(var_11)
                char var_10
                *(eax_11 + 0x24) = zx.d(var_10)
                char var_f
                *(eax_11 + 0x28) = zx.d(var_f)
                char var_e
                *(eax_11 + 0x2c) = zx.d(var_e)
                int32_t var_144_7 = 2
                char var_d
                *(eax_11 + 0x30) = zx.d(var_d)
                char var_c
                *(eax_11 + 0x34) = zx.d(var_c)
                *(eax_11 + 0x14) = 0x56
                (*(eax_11 + 4))(entry_ebx, var_144_7)
                int32_t ecx_17 = var_130_1
                
                if (ecx_17 s> 0x100 || ecx_17 s> i - 0x11)
                    void* eax_12 = *entry_ebx
                    *(eax_12 + 0x14) = 8
                    (*eax_12)(entry_ebx)
                    ecx_17 = var_130_1
                
                int32_t eax_13 = 0
                int32_t var_134_1 = 0
                char var_11c[0x100]
                
                if (ecx_17 s> 0)
                    do
                        void* edx_15
                        
                        if (edi_4 == 0)
                            if (var_128[3](entry_ebx) == 0)
                                goto label_4657ae
                            
                            int32_t eax_15 = var_128[1]
                            edx_15 = *var_128
                            ecx_17 = var_130_1
                            int32_t var_120_6 = eax_15
                            edi_4 = eax_15
                            eax_13 = var_134_1
                            void* var_124_6 = edx_15
                            esi_3 = edx_15
                        
                        edx_15.b = *esi_3
                        edi_4 -= 1
                        esi_3 += 1
                        var_11c[eax_13] = edx_15.b
                        eax_13 += 1
                        var_120_5 = edi_4
                        var_124_5 = esi_3
                        var_134_1 = eax_13
                    while (eax_13 s< ecx_17)
                
                uint32_t eax_16 = ecx_6
                i = i - 0x11 - ecx_17
                void** esi_6
                
                if ((eax_16.b & 0x10) == 0)
                    esi_6 = &entry_ebx[eax_16 + 0x2e]
                else
                    eax_16 -= 0x10
                    esi_6 = &entry_ebx[eax_16 + 0x32]
                
                if (eax_16 s< 0 || eax_16 s>= 4)
                    void* ecx_18 = *entry_ebx
                    *(ecx_18 + 0x14) = 0x1e
                    *(ecx_18 + 0x18) = eax_16
                    (*ecx_18)(entry_ebx)
                
                if (*esi_6 == 0)
                    *esi_6 = sub_498500(entry_ebx)
                
                int32_t* eax_18 = *esi_6
                *eax_18 = var_1c.d
                eax_18[1] = var_18.d
                eax_18[2] = var_14.d
                eax_18[3] = var_10.d
                int32_t edx_21
                edx_21.b = var_c
                eax_18[4].b = edx_21.b
                __builtin_memcpy(eax_18 + 0x11, &var_11c, 0x100)
                edi_3 = var_120_5
                esi_2 = var_124_5
                eax = var_128
            while (i s> 0x10)
            
            i_1 = i
        
        if (i_1 != 0)
            void* eax_20 = *entry_ebx
            *(eax_20 + 0x14) = 0xb
            (*eax_20)(entry_ebx)
            eax = var_128
        
        eax[1] = edi_3
        *eax = esi_2
        sub_745f2b(__security_cookie_1)
        return 1

label_4657ae:
sub_745f2b(__security_cookie_1)
return 0
