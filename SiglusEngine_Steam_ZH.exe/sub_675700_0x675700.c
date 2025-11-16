// 函数: sub_675700
// 地址: 0x675700
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6cfe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_bac460
void* eax_5 = sub_548970(ecx + 4, *(ecx + 0xb8) - 1, 1)
int32_t result
int16_t var_2c
int32_t var_18

if (*(eax_5 + 0x2cd) != 1)
label_6759a4:
    int32_t ecx_22 = *(eax_5 + 0x148) - *(eax_5 + 0x144)
    int32_t edx_13
    edx_13:result = muls.dp.d(0xb40b40b5, ecx_22)
    int32_t edx_15 = (edx_13 + ecx_22) s>> 8
    int32_t i_2 = (edx_15 u>> 0x1f) - 1 + edx_15
    int32_t i_1 = i_2
    
    if ((edx_15 u>> 0x1f) - 1 + edx_15 s>= 0)
        int32_t* ebx_1 = data_bac49c
        int32_t esi_1 = i_2 * 0x16c
        int32_t i
        
        do
            void* ecx_27 = *(eax_5 + 0x144) + esi_1
            int32_t eax_23 = *(ecx_27 + 4)
            
            if (eax_23 == 0xa)
                ebx_1[1] -= 1
                *(esi_1 + *(eax_5 + 0x144) + 8) = *(*ebx_1 + (ebx_1[1] << 2))
            else if (eax_23 != 0x14)
                sub_677d60(ecx_27 + 0x24)
            else
                int16_t* eax_25 = sub_677c10(&var_2c)
                int32_t var_8_3 = 0xa
                int32_t* ecx_32 = *(eax_5 + 0x144) + 0xc + esi_1
                
                if (ecx_32 != eax_25)
                    sub_52e3c0(ecx_32, eax_25, 0, 0xffffffff)
                
                int32_t var_8_4 = 0xffffffff
                
                if (var_18 u>= 8)
                    j__free(var_2c.d)
                
                ebx_1 = data_bac49c
                var_18 = 7
                int32_t var_1c_2 = 0
                var_2c = 0
            
            esi_1 -= 0x16c
            i = i_1 - 1
            i_1 = i
        while (i s>= 0)
    
    result.b = 1
else
    int32_t ecx_3 = *(eax_5 + 0x148) - *(eax_5 + 0x144)
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = muls.dp.d(0xb40b40b5, ecx_3)
    int32_t edx_3 = (edx_1 + ecx_3) s>> 8
    void* eax_10
    
    if (edx_3 u>> 0x1f != neg.d(edx_3))
        eax_10 = *(eax_5 + 0x144)
    
    int32_t var_8c
    void* var_74
    int16_t var_5c
    int16_t var_44
    
    if (edx_3 u>> 0x1f == neg.d(edx_3) || *(eax_10 + 4) != 0x4ba)
        int32_t var_30_2 = 7
        int32_t var_34_2 = 0
        var_44 = 0
        sub_52e720(&var_44, 0xaf9570, 0x32)
        int32_t var_8_2 = 0
        var_8_2.b = 1
        void** eax_20 = sub_532b80(sub_698030(&var_74, *(eax_5 + 0x2d8), *(eax_5 + 0x2dc)), 
            &var_44, &var_8c, 0xaf95d8)
        var_8_2.b = 2
        int16_t* eax_21 = sub_5327a0(eax_20, eax_20, &var_2c, &var_74)
        var_8_2.b = 3
        int16_t* eax_22 = sub_532b80(eax_21, eax_21, &var_5c, &data_ad90a0)
        var_8_2.b = 4
        sub_684160(data_bac424, 2, eax_22)
        int32_t var_48
        
        if (var_48 u>= 8)
            j__free(var_5c.d)
        
        int32_t var_48_1 = 7
        int32_t var_4c_1 = 0
        var_5c = 0
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        var_2c = 0
        int32_t var_78
        
        if (var_78 u>= 8)
            j__free(var_8c)
        
        int32_t var_60
        
        if (var_60 u>= 8)
            j__free(var_74)
        
        if (var_30_2 u>= 8)
            j__free(var_44.d)
        
        result.b = 0
    else
        if (*(eax_5 + 0x2d4) == (*(eax_5 + 0x148) - eax_10) s/ 0x16c)
            goto label_6759a4
        
        int32_t var_30_1 = 7
        int32_t var_34_1 = 0
        var_44 = 0
        sub_52e720(&var_44, 0xaf95e0, 0x15)
        int32_t var_8_1 = 5
        var_8_1.b = 6
        int16_t* eax_16 = sub_532b80(sub_698030(&var_74, *(eax_5 + 0x2d8), *(eax_5 + 0x2dc)), 
            &var_44, &var_5c, 0xaf95d8)
        var_8_1.b = 7
        int16_t* eax_17 = sub_5327a0(eax_16, eax_16, &var_2c, &var_74)
        var_8_1.b = 8
        int16_t* eax_18 = sub_532b80(eax_17, eax_17, &var_8c, &data_ad90a0)
        var_8_1.b = 9
        sub_684160(data_bac424, 2, eax_18)
        sub_52e8a0(&var_8c)
        sub_52e8a0(&var_2c)
        sub_52e8a0(&var_5c)
        sub_52e8a0(&var_74)
        sub_52e8a0(&var_44)
        result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
