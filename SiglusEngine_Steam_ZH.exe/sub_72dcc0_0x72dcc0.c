// 函数: sub_72dcc0
// 地址: 0x72dcc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* ecx = arg1
void* ebx = *(ecx + 0x1b0)
void* var_2c = ecx
void* var_28 = ebx
char var_48 = (*(ecx + 0x184)).b
int32_t eax_3

if (*(ecx + 0xfc) != 0 && *(ebx + 0x28) == 0)
    eax_3 = sub_72dc30(ecx)
    
    if (eax_3.b == 0)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_3
    
    ecx = var_2c

if (*(ebx + 0x24) == 0)
    int32_t* eax_4 = *(ecx + 0x18)
    int128_t xmm0_1 = *(ebx + 0x10)
    int32_t edx_1 = *(ebx + 8)
    int32_t edi_1 = *(ebx + 0xc)
    int32_t esi_1 = *eax_4
    int32_t eax_5 = eax_4[1]
    int32_t var_20_1 = eax_5
    int32_t eax_6 = *(ebx + 0x20)
    int32_t var_24_1 = eax_6
    int32_t i = 0
    void* var_34_1 = ecx
    int32_t var_44 = esi_1
    int128_t var_1c = xmm0_1
    int32_t i_1 = 0
    
    if (*(ecx + 0x14c) s> 0)
        void* esi_2 = ecx + 0x150
        void* var_20_2 = esi_2
        
        do
            int16_t* eax_7 = *(arg2 + (i << 2))
            ebx = var_28
            int32_t eax_8 = *esi_2
            int32_t eax_10 = *(*(ecx + (eax_8 << 2) + 0x134) + 0x14)
            int32_t esi_3 = *(ebx + (eax_10 << 2) + 0x2c)
            int32_t var_3c
            int32_t var_38
            uint32_t eax_11
            int32_t eax_12
            
            if (edi_1 s< 8)
                if (sub_72da40(eax_10, edx_1, &var_44, edi_1, 0).b == 0)
                label_72dec9:
                    eax_11.b = 0
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_11
                
                edi_1 = var_38
                edx_1 = var_3c
                
                if (edi_1 s>= 8)
                    goto label_72ddc3
                
                eax_12 = 1
                goto label_72ddea
            
        label_72ddc3:
            eax_11 = zx.d((edx_1 s>> (edi_1.b - 8)).b)
            int32_t ecx_5 = *(esi_3 + (eax_11 << 2) + 0x90)
            uint32_t esi_4
            
            if (ecx_5 == 0)
                eax_12 = 9
            label_72ddea:
                eax_11 = sub_72db60(eax_12, edx_1, &var_44, edi_1, esi_3, eax_12)
                esi_4 = eax_11
                
                if (esi_4 s< 0)
                    goto label_72dec9
                
                edx_1 = var_3c
                edi_1 = var_38
            else
                esi_4 = zx.d(*(eax_11 + esi_3 + 0x490))
                edi_1 -= ecx_5
            
            if (esi_4 != 0)
                if (edi_1 s< esi_4)
                    if (sub_72da40(eax_11, edx_1, &var_44, edi_1, esi_4).b == 0)
                        goto label_72dec9
                    
                    edx_1 = var_3c
                    edi_1 = var_38
                
                int32_t ebx_2 = *((esi_4 << 2) + &data_ade5f0)
                void* eax_15 = (esi_4 << 2) + &data_ade5f0
                edi_1 -= esi_4
                esi_4 = edx_1 s>> edi_1.b & ebx_2
                
                if (esi_4 s<= *(eax_15 - 4))
                    esi_4 -= ebx_2
                
                ebx = var_28
            
            *(&var_1c:4 + (eax_8 << 2)) += esi_4
            esi_2 = var_20_2 + 4
            var_20_2 = esi_2
            *eax_7 = (*(&var_1c:4 + (eax_8 << 2))).w << var_48
            ecx = var_2c
            i = i_1 + 1
            i_1 = i
        while (i s< *(ecx + 0x14c))
        
        esi_1 = var_44
        xmm0_1 = var_1c
        var_20_1 = eax_5
        var_24_1 = eax_6
    
    **(ecx + 0x18) = esi_1
    *(*(ecx + 0x18) + 4) = var_20_1
    *(ebx + 0x10) = xmm0_1
    *(ebx + 8) = edx_1
    *(ebx + 0xc) = edi_1
    *(ebx + 0x20) = var_24_1

*(ebx + 0x28) -= 1
eax_3.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_3
