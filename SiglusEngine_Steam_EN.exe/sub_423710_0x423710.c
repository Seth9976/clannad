// 函数: sub_423710
// 地址: 0x423710
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* ebx = arg1[1]

if (ebx == 0 || arg1[5] != 2)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

int32_t ecx_1 = *arg1
int32_t var_234 = 0
BOOL var_214 = 0
char var_210[0x208]
sub_4d67a0(ecx_1, &var_210)
int32_t i_5 = *ebx
void* ecx_2 = &ebx[1]
void* var_228 = ecx_2
void* result_2 = (i_5 << 3) + 4
void* result_3 = result_2
void* result_1 = result_2
void* result = result_1

if (i_5 s> 0)
    int32_t i_4 = i_5
    int32_t i
    
    do
        int32_t edx_1 = *ecx_2
        ecx_2 += 8
        
        if (edx_1 != 0 && *(ecx_2 - 4) s> 0)
            result_1 = result_1 + ((*(edx_1 + ebx + 0x10) * *(edx_1 + ebx + 0xc)) << 2) + 0xd0
        
        i = i_4
        i_4 -= 1
    while (i != 1)
    result_2 = result_3
    result = result_1

sub_4d6960(&var_210, &var_214, &var_234, result_1, &var_210)
BOOL eax_7 = var_214
int32_t var_220 = 0
*eax_7 = i_5
void** esi_1 = eax_7 + 4
void* eax_8 = var_228
void** var_218 = esi_1

if (i_5 s> 0)
    int32_t edi_1 = 0
    
    do
        int32_t i_1 = *eax_8
        int32_t ecx_5 = *(eax_8 + 4)
        eax_8 += 8
        bool cond:0_1
        
        if (i_1 == 0)
            cond:0_1 = ecx_5 != 0
        label_423981:
            
            if (cond:0_1)
                int32_t eax_25 = 0
                
                if (edi_1 s> 0)
                    void* ecx_15 = var_228
                    
                    while (*ecx_15 != i_1)
                        eax_25 += 1
                        ecx_15 += 8
                        
                        if (eax_25 s>= edi_1)
                            goto label_4239ac
                
                if (edi_1 s<= 0 || eax_25 == 0xffffffff)
                label_4239ac:
                    *esi_1 = result_2
                    esi_1[1] = 0
                else
                    BOOL edx_7 = var_214
                    int32_t ecx_21 = neg.d(*(edx_7 + (eax_25 << 3) + 8))
                    *esi_1 = *(edx_7 + (eax_25 << 3) + 4)
                    esi_1[1] = ecx_21
                
                esi_1 = &esi_1[2]
            else
                *esi_1 = result_2
                esi_1[1] = 0
                esi_1 = &esi_1[2]
        else
            cond:0_1 = ecx_5 != 0
            
            if (ecx_5 s<= 0)
                goto label_423981
            
            void* ecx_7 = var_214 + result_2
            void* eax_10 = ebx + i_1
            void* eax_11 = eax_10 + 0x74
            sub_4d1c30(eax_11, eax_10, ecx_7, 0x74)
            *(ecx_7 + 2) = 1
            uint32_t i_6 = zx.d(*(eax_10 + 2))
            int32_t edi_2 = *(eax_10 + 4)
            int32_t edx_4 = *(eax_10 + 8)
            edi_1 = var_220
            uint32_t i_3 = i_6
            int32_t var_250_1 = edx_4
            
            if (i_6 s> 0)
                uint32_t i_2
                
                do
                    int32_t var_26c_1 = 0xff
                    int32_t var_270_1 = 0xffffffff
                    int32_t var_274_1 = 0xffffffff
                    int32_t var_278_1 = 0xffffffff
                    uint32_t edi_4 = zx.d(*(eax_11 + 8))
                    uint32_t ebx_3 = zx.d(*(eax_11 + 6))
                    int32_t eax_16 = zx.d(*eax_11) - edi_2
                    sub_584e80(eax_16, *(ecx_7 + 0xc), ecx_7 + 0xd0, *(ecx_7 + 0x10), 
                        eax_11 + 0x5c, ebx_3, edi_4, 0, 0, 0, eax_16, zx.d(*(eax_11 + 2)) - edx_4, 
                        0xff)
                    edx_4 = var_250_1
                    i_2 = i_3
                    i_3 -= 1
                    eax_11 = eax_11 + 0x5c + ((edi_4 * ebx_3) << 2)
                while (i_2 != 1)
                esi_1 = var_218
                edi_1 = var_220
            
            *(ecx_7 + 0x74) = *(ecx_7 + 4)
            *(ecx_7 + 0x76) = *(ecx_7 + 8)
            *(ecx_7 + 0x7a) = *(ecx_7 + 0xc)
            *(ecx_7 + 0x7c) = *(ecx_7 + 0x10)
            int16_t eax_21
            eax_21.b = *ecx_7
            *(ecx_7 + 0x78) = eax_21.b
            int32_t eax_23 = *(ecx_7 + 0x10) * *(ecx_7 + 0xc)
            *esi_1 = result_3
            esi_1[1] = (eax_23 << 2) + 0xd0
            esi_1 = &esi_1[2]
            result_2 = result_3 + (eax_23 << 2) + 0xd0
            result_3 = result_2
        edi_1 += 1
        var_218 = esi_1
        var_220 = edi_1
    while (edi_1 s< i_5)

sub_4d6c40(arg1, &arg1[1])
int32_t ecx_17 = var_234
arg1[1] = var_214
*arg1 = ecx_17
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
