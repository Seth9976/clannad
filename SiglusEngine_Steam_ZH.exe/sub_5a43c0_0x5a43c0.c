// 函数: sub_5a43c0
// 地址: 0x5a43c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b98e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    int32_t* var_40 = nullptr
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0
    void* var_60_1 = arg1
    int32_t var_c_1 = 0
    sub_5a4f20(&var_40)
    int32_t* ebx_1 = var_40
    int32_t var_44_1
    int32_t edx_3
    
    if (*(arg1 + 0xb8) == 0)
        edx_3 = (var_3c_1 - ebx_1) s>> 3
        var_44_1 = edx_3
    
    if (*(arg1 + 0xb8) != 0 || edx_3 != (*(arg1 + 0x418) - *(arg1 + 0x414)) s>> 3)
        int32_t edx_6 = (var_3c_1 - ebx_1) s>> 3
        var_44_1 = edx_6
        int32_t eax_9 = *(data_bac4e0 + 0x30)
        
        if (eax_9 != 0)
            eax_9(*(arg1 + 0xe4), edx_6, eax_4)
    
    int16_t var_34
    int32_t var_20
    
    if (*(arg1 + 0xb8) != 0)
        int32_t var_20_1 = 7
        int32_t var_24_1 = 0
        var_34 = 0
        sub_52e720(&var_34, 0xaf15f8, 6)
        var_c_1.b = 1
        int32_t eax_11 = *(data_bac4e0 + 0x34)
        
        if (eax_11 != 0)
            eax_11(*(arg1 + 0xe4), 0, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20_1 u>= 8)
            j__free(var_34.d)
        
        int32_t var_20_2 = 7
        int32_t var_24_2 = 0
        var_34 = 0
        sub_52e720(&var_34, 0xaf1608, 6)
        var_c_1.b = 2
        int32_t eax_13 = *(data_bac4e0 + 0x34)
        
        if (eax_13 != 0)
            eax_13(*(arg1 + 0xe4), 1, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20_2 u>= 8)
            j__free(var_34.d)
        
        int32_t var_20_3 = 7
        int32_t var_24_3 = 0
        var_34 = 0
        sub_52e720(&var_34, 0xaf1618, 6)
        var_c_1.b = 3
        int32_t eax_15 = *(data_bac4e0 + 0x34)
        
        if (eax_15 != 0)
            eax_15(*(arg1 + 0xe4), 2, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20_3 u>= 8)
            j__free(var_34.d)
        
        int32_t var_20_4 = 7
        int32_t var_24_4 = 0
        var_34 = 0
        sub_52e720(&var_34, 0xaf1628, 6)
        var_c_1.b = 4
        int32_t eax_17 = *(data_bac4e0 + 0x34)
        
        if (eax_17 != 0)
            eax_17(*(arg1 + 0xe4), 3, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20_4 u>= 8)
            j__free(var_34.d)
        
        int32_t var_20_5 = 7
        int32_t var_24_5 = 0
        var_34 = 0
        sub_52e720(&var_34, 0xaf1638, 5)
        var_c_1.b = 5
        int32_t eax_19 = *(data_bac4e0 + 0x34)
        
        if (eax_19 != 0)
            eax_19(*(arg1 + 0xe4), 4, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20_5 u>= 8)
            j__free(var_34.d)
        
        int32_t var_20_6 = 7
        int32_t var_24_6 = 0
        var_34 = 0
        sub_52e720(&var_34, 0xaf1644, 6)
        var_c_1.b = 6
        int32_t eax_21 = *(data_bac4e0 + 0x34)
        
        if (eax_21 != 0)
            eax_21(*(arg1 + 0xe4), 5, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20_6 u>= 8)
            j__free(var_34.d)
        
        int32_t var_20_7 = 7
        int32_t var_24_7 = 0
        var_34 = 0
        sub_52e720(&var_34, 0xaf1654, 6)
        var_c_1.b = 7
        int32_t eax_23 = *(data_bac4e0 + 0x34)
        
        if (eax_23 != 0)
            eax_23(*(arg1 + 0xe4), 6, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20_7 u>= 8)
            j__free(var_34.d)
        
        int32_t var_20_8 = 7
        int32_t var_24_8 = 0
        var_34 = 0
        sub_52e720(&var_34, 0xaf1664, 6)
        var_c_1.b = 8
        int32_t eax_25 = *(data_bac4e0 + 0x34)
        
        if (eax_25 != 0)
            eax_25(*(arg1 + 0xe4), 7, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20_8 u>= 8)
            j__free(var_34.d)
        
        int32_t var_20_9 = 7
        int32_t var_24_9 = 0
        var_34 = 0
        sub_52e720(&var_34, 0xaf1674, 6)
        var_c_1.b = 9
        int32_t eax_27 = *(data_bac4e0 + 0x34)
        
        if (eax_27 != 0)
            eax_27(*(arg1 + 0xe4), 8, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20_9 u>= 8)
            j__free(var_34.d)
        
        int32_t var_20_10 = 7
        int32_t var_24_10 = 0
        var_34 = 0
        sub_52e720(&var_34, 0xaf1684, 6)
        var_c_1.b = 0xa
        int32_t eax_29 = *(data_bac4e0 + 0x34)
        
        if (eax_29 != 0)
            eax_29(*(arg1 + 0xe4), 9, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20_10 u>= 8)
            j__free(var_34.d)
        
        int32_t var_20_11 = 7
        int32_t var_24_11 = 0
        var_34 = 0
        sub_52e720(&var_34, 0xaf1694, 6)
        var_c_1.b = 0xb
        int32_t eax_31 = *(data_bac4e0 + 0x34)
        
        if (eax_31 != 0)
            eax_31(*(arg1 + 0xe4), 0xa, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20_11 u>= 8)
            j__free(var_34.d)
        
        int32_t var_20_12 = 7
        int32_t var_24_12 = 0
        var_34 = 0
        sub_52e720(&var_34, 0xaf16a4, 6)
        var_c_1.b = 0xc
        int32_t eax_33 = *(data_bac4e0 + 0x34)
        
        if (eax_33 != 0)
            eax_33(*(arg1 + 0xe4), 0xb, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20_12 u>= 8)
            j__free(var_34.d)
        
        int32_t var_20_13 = 7
        int32_t var_24_13 = 0
        var_34 = 0
        sub_52e720(&var_34, 0xaf16b4, 6)
        var_c_1.b = 0xd
        int32_t eax_35 = *(data_bac4e0 + 0x34)
        
        if (eax_35 != 0)
            eax_35(*(arg1 + 0xe4), 0xc, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20_13 u>= 8)
            j__free(var_34.d)
        
        var_20 = 7
        int32_t var_24_14 = 0
        var_34 = 0
        sub_52e720(&var_34, 0xaf16c4, 6)
        var_c_1.b = 0xe
        int32_t eax_37 = *(data_bac4e0 + 0x34)
        
        if (eax_37 != 0)
            eax_37(*(arg1 + 0xe4), 0xd, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20 u>= 8)
            j__free(var_34.d)
        
        sub_52e820(&var_34, 0xaf16d4)
        var_c_1.b = 0xf
        int32_t eax_39 = *(data_bac4e0 + 0x34)
        
        if (eax_39 != 0)
            eax_39(*(arg1 + 0xe4), 0xe, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20 u>= 8)
            j__free(var_34.d)
        
        sub_52e820(&var_34, 0xaf16e4)
        var_c_1.b = 0x10
        int32_t eax_41 = *(data_bac4e0 + 0x34)
        
        if (eax_41 != 0)
            eax_41(*(arg1 + 0xe4), 0xf, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20 u>= 8)
            j__free(var_34.d)
        
        sub_52e820(&var_34, 0xaf16f4)
        var_c_1.b = 0x11
        int32_t eax_43 = *(data_bac4e0 + 0x34)
        
        if (eax_43 != 0)
            eax_43(*(arg1 + 0xe4), 0x10, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20 u>= 8)
            j__free(var_34.d)
        
        sub_52e820(&var_34, 0xaf1704)
        var_c_1.b = 0x12
        int32_t eax_45 = *(data_bac4e0 + 0x34)
        
        if (eax_45 != 0)
            eax_45(*(arg1 + 0xe4), 0x11, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        
        if (var_20 u>= 8)
            j__free(var_34.d)
        
        sub_52e820(&var_34, 0xaf1714)
        var_c_1.b = 0x13
        int32_t eax_47 = *(data_bac4e0 + 0x34)
        
        if (eax_47 != 0)
            eax_47(*(arg1 + 0xe4), 0x12, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        sub_52e8a0(&var_34)
        sub_52e820(&var_34, 0xaf1724)
        var_c_1.b = 0x14
        int32_t eax_49 = *(data_bac4e0 + 0x34)
        
        if (eax_49 != 0)
            eax_49(*(arg1 + 0xe4), 0x13, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        sub_52e8a0(&var_34)
        sub_52e820(&var_34, 0xaf1734)
        var_c_1.b = 0x15
        int32_t eax_51 = *(data_bac4e0 + 0x34)
        
        if (eax_51 != 0)
            eax_51(*(arg1 + 0xe4), 0x14, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        sub_52e8a0(&var_34)
        sub_52e820(&var_34, 0xaf1744)
        var_c_1.b = 0x16
        int32_t eax_53 = *(data_bac4e0 + 0x34)
        
        if (eax_53 != 0)
            eax_53(*(arg1 + 0xe4), 0x15, 0, &var_34, eax_4)
        
        var_c_1.b = 0
        sub_52e8a0(&var_34)
    
    void* edx_7 = data_bac4e4
    int32_t i
    
    for (i = 0; i s< 0x16; i += 1)
        if (i == 0)
            *ebx_1 = *(edx_7 + 0x68)
            int32_t eax_54
            eax_54.b = *(edx_7 + 0xec)
            ebx_1[1].b = eax_54.b
        else
            int32_t eax_56
            
            if (i - 1 u<= 4)
                ebx_1[i * 2] = *(edx_7 + (i << 2) + 0x68)
                eax_56.b = *(edx_7 + i + 0xec)
                ebx_1[i * 2 + 1].b = eax_56.b
            else if (i - 6 u<= 0xf)
                ebx_1[i * 2] = *(edx_7 + (i << 2) + 0x94)
                eax_56.b = *(edx_7 + i + 0xf7)
                ebx_1[i * 2 + 1].b = eax_56.b
    
    int32_t edi_1 = 0
    
    if (var_44_1 s> 0)
        do
            char var_45_1
            int16_t* eax_61
            int32_t edx_8
            
            if (*(arg1 + 0xb8) != 0 || edi_1 s>= (*(arg1 + 0x418) - *(arg1 + 0x414)) s>> 3)
                var_45_1 = 1
            label_5a4cdd:
                ebx_1[edi_1 * 2]
                int32_t i_1 = i
                eax_61 = sub_6ad9b0(&var_34)
                var_c_1.b = 0x17
                int32_t ecx_30 = *(data_bac4e0 + 0x34)
                
                if (ecx_30 != 0)
                    ecx_30(*(arg1 + 0xe4), edi_1, 1, eax_61, eax_4)
                
                var_c_1.b = 0
                
                if (var_20 u>= 8)
                    j__free(var_34.d)
                
                edx_8 = edi_1 << 3
                
                if (var_45_1 != 0)
                    goto label_5a4d4e
                
                goto label_5a4d34
            
            i = *(arg1 + 0x414)
            edx_8 = edi_1 << 3
            var_45_1 = 0
            
            if (*(ebx_1 + edx_8) != *(edx_8 + i))
                goto label_5a4cdd
            
        label_5a4d34:
            i = *(arg1 + 0x414)
            eax_61.b = *(ebx_1 + edx_8 + 4)
            
            if (eax_61.b != *(i + edx_8 + 4))
            label_5a4d4e:
                void* const eax_62 = &data_af0f84
                
                if (*(ebx_1 + edx_8 + 4) == 0)
                    eax_62 = &data_af1754
                
                i = sub_52e820(&var_34, eax_62)
                var_c_1.b = 0x18
                int32_t eax_64 = *(data_bac4e0 + 0x34)
                
                if (eax_64 != 0)
                    i = eax_64(*(arg1 + 0xe4), edi_1, 2, &var_34, eax_4)
                
                var_c_1.b = 0
                
                if (var_20 u>= 8)
                    i = j__free(var_34.d)
            
            edi_1 += 1
        while (edi_1 s< var_44_1)
    
    result = sub_5a4df0(arg1 + 0x414, &var_40)
    *(arg1 + 0xb8) = 0
    
    if (ebx_1 != 0)
        result = j__free(ebx_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_4c)
return result
