// 函数: sub_60f150
// 地址: 0x60f150
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9beac8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7c = 0
int32_t var_64 = 0
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
int32_t var_8_1 = 0
int16_t var_5c
int32_t var_48
int16_t var_2c

if (arg7 == 0)
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    sub_52e720(&var_2c, &data_ad7c90, nullptr)
    var_8_1.b = 3
    int16_t* eax_32 = sub_60ed40(&var_2c, arg2, &var_5c, &var_2c, arg4, arg5, &var_64)
    var_8_1.b = 4
    
    if (&var_44 != eax_32)
        sub_52e3c0(&var_44, eax_32, 0, 0xffffffff)
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    var_8_1.b = 0
    int32_t var_4c_2 = 0
    var_5c = 0
    
    if (var_18_2 u>= 8)
        j__free(var_2c.d)
    
    if (var_34 == 0)
        goto label_60f239
    
label_60f430:
    
    if (arg6 != 0)
        *arg6 = var_64
    
    *(arg3 + 0x14) = 7
    *(arg3 + 0x10) = 0
    *arg3 = 0
    sub_52e3c0(arg3, &var_44, 0, 0xffffffff)
else
    int32_t* esi_1 = data_bac50c
    int32_t edi_1 = 0
    int32_t eax_5
    int32_t edx
    edx:eax_5 = muls.dp.d(0x2aaaaaab, esi_1[1] - *esi_1)
    int32_t edx_1 = edx s>> 3
    
    if ((edx_1 u>> 0x1f) + edx_1 s> 0)
        void** eax_10 = data_bac4d8 + 0x78
        int32_t edx_2 = 0
        void** var_74_1 = eax_10
        int32_t var_60_1 = 0
        
        while (true)
            void* ecx_3 = *esi_1 + edx_2
            int32_t edx_3 = eax_10[4]
            
            if (eax_10[5] u>= 8)
                eax_10 = *eax_10
            
            int32_t var_90_1 = edx_3
            
            if (sub_536340(ecx_3, ecx_3, *(ecx_3 + 0x10), eax_10) == 0)
                break
            
            edi_1 += 1
            var_60_1 += 0x30
            int32_t eax_12
            int32_t edx_4
            edx_4:eax_12 = muls.dp.d(0x2aaaaaab, esi_1[1] - *esi_1)
            int32_t edx_5 = edx_4 s>> 3
            edx_2 = var_60_1
            eax_10 = var_74_1
            
            if (edi_1 s>= (edx_5 u>> 0x1f) + edx_5)
                goto label_60f239
        
        if (edi_1 s< 0)
            goto label_60f239
        
        int32_t eax_17
        int32_t edx_6
        edx_6:eax_17 = muls.dp.d(0x2aaaaaab, esi_1[1] - *esi_1)
        int32_t edx_7 = edx_6 s>> 3
        
        if (edi_1 s>= (edx_7 u>> 0x1f) + edx_7)
            goto label_60f239
        
        int32_t var_60_2 = edi_1 * 0x30
        
        while (true)
            void** eax_24 = *esi_1 + var_60_2
            var_2c = 0
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            sub_52e3c0(&var_2c, eax_24, 0, 0xffffffff)
            var_8_1.b = 1
            int16_t* eax_26 = sub_60ed40(&var_2c, arg2, &var_5c, &var_2c, arg4, arg5, &var_64)
            var_8_1.b = 2
            
            if (&var_44 != eax_26)
                sub_52e3c0(&var_44, eax_26, 0, 0xffffffff)
            
            if (var_48 u>= 8)
                j__free(var_5c.d)
            
            var_48 = 7
            var_8_1.b = 0
            int32_t var_4c_1 = 0
            var_5c = 0
            
            if (var_34 != 0)
                if (var_18_1 u>= 8)
                    j__free(var_2c.d)
                
                break
            
            if (var_18_1 u>= 8)
                j__free(var_2c.d)
            
            var_60_2 += 0x30
            edi_1 += 1
            esi_1 = data_bac50c
            int32_t eax_27
            int32_t edx_9
            edx_9:eax_27 = muls.dp.d(0x2aaaaaab, esi_1[1] - *esi_1)
            int32_t edx_10 = edx_9 s>> 3
            
            if (edi_1 s>= (edx_10 u>> 0x1f) + edx_10)
                goto label_60f239
        
        goto label_60f430
    
label_60f239:
    *(arg3 + 0x14) = 7
    *(arg3 + 0x10) = 0
    *arg3 = 0
    sub_52e720(arg3, &data_ad7c90, nullptr)

if (var_30 u>= 8)
    j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
