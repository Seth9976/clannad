// 函数: sub_72b1d0
// 地址: 0x72b1d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* eax_2 = arg1
int32_t* ebx = eax_2[6]
int32_t* var_20 = eax_2
int32_t esi = ebx[1]
char* edi = *ebx

if (esi != 0)
    goto label_72b220

uint32_t eax_4

if (ebx[3](eax_2).b != 0)
    edi = *ebx
    esi = ebx[1]
    eax_2 = var_20
label_72b220:
    void* edi_1 = &edi[1]
    uint32_t edx_2 = zx.d(*edi) << 8
    int32_t esi_1 = esi - 1
    
    if (esi != 1)
        goto label_72b245
    
    if (ebx[3](eax_2).b != 0)
        edi_1 = *ebx
        esi_1 = ebx[1]
    label_72b245:
        uint32_t edx_4 = edx_2 - 2 + zx.d(*edi_1)
        int32_t esi_2 = esi_1 - 1
        void* edi_2 = edi_1 + 1
        char var_18[0x10]
        uint32_t var_28_1
        int32_t var_24_1
        int32_t ecx_3
        
        if (edx_4 s< 0xe)
            eax_4 = 0
            
            if (edx_4 s> 0)
                eax_4 = edx_4
            
            ecx_3 = 0
            var_28_1 = eax_4
            var_24_1 = 0
            
            if (eax_4 != 0)
                goto label_72b2a2
        else
            ecx_3 = 0
            var_28_1 = 0xe
            var_24_1 = 0
        label_72b2a2:
            
            do
                if (esi_2 == 0)
                    if (ebx[3](var_20).b == 0)
                        goto label_72b204
                    
                    edi_2 = *ebx
                    esi_2 = ebx[1]
                    ecx_3 = var_24_1
                
                eax_4.b = *edi_2
                esi_2 -= 1
                var_18[ecx_3] = eax_4.b
                edi_2 += 1
                eax_4 = var_28_1
                ecx_3 += 1
                var_24_1 = ecx_3
            while (ecx_3 u< eax_4)
        uint32_t edx_5 = edx_4 - eax_4
        int32_t ecx_4 = var_20[0x65]
        
        if (ecx_4 == 0xe0)
            sub_72ae80(eax_4, &var_18, var_20, eax_4, edx_5)
        else if (ecx_4 == 0xee)
            sub_72b0f0(eax_4, &var_18, var_20, eax_4, edx_5)
        else
            *(*var_20 + 0x14) = 0x46
            *(*var_20 + 0x18) = var_20[0x65]
            (**var_20)(var_20)
        
        *ebx = edi_2
        ebx[1] = esi_2
        
        if (edx_5 s> 0)
            (*(var_20[6] + 0x10))(var_20, edx_5)
        
        int32_t eax_11
        eax_11.b = 1
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_11

label_72b204:
eax_4.b = 0
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_4
