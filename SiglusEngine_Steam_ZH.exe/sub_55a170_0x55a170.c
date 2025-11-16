// 函数: sub_55a170
// 地址: 0x55a170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2856
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_1b8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = *arg2

if (result == 0)
    sub_5b80f0(arg3, *(*(arg4 + 4) + 8))
else if (result == 1)
    sub_677bb0(sub_5b8040(arg3))
else if (result == 2)
    *(arg3 + 0xa0) = 0
    *(arg3 + 0xa2) = 0
    *(arg3 + 0xb0) = 0
else if (result == 3)
    *(arg3 + 0xa0) = 1
    *(arg3 + 0xa2) = 0
    *(arg3 + 0xb0) = 0
else if (result == 9)
    *(arg3 + 0xa0) = 0x101
    *(arg3 + 0xa2) = 0
    *(arg3 + 0xb0) = 0
else
    int32_t ecx_1
    int32_t edx
    
    if (result != 0xa)
        if (result == 0xb)
            void* eax_6 = *(arg4 + 4)
            edx = *(eax_6 + 0x2d0)
            ecx_1 = *(eax_6 + 0x16c)
            result = *(eax_6 + 8)
            *(arg3 + 0xa0) = 0x10101
            goto label_55a2c5
        
        if (result == 0xc)
            void* eax_7 = *(arg4 + 4)
            edx = *(eax_7 + 0x2d0)
            ecx_1 = *(eax_7 + 0x16c)
            result = *(eax_7 + 8)
            *(arg3 + 0xa0) = 0x1010001
            goto label_55a2c5
        
        if (result == 0xd)
            void* eax_8 = *(arg4 + 4)
            edx = *(eax_8 + 0x2d0)
            ecx_1 = *(eax_8 + 0x16c)
            result = *(eax_8 + 8)
            *(arg3 + 0xa0) = 0x1010101
            goto label_55a2c5
        
        if (result == 4)
            *(arg3 + 0xa0) = 0
        else if (result == 5)
            *(arg3 + 0xa0) = 1
        else
            int32_t var_1a0
            void var_19c
            
            if (result != 6)
                if (result == 8)
                    sub_54aed0(&var_1a0)
                    int32_t var_8_2 = 1
                    var_1a0 = 0x15
                    __builtin_memcpy(&var_19c, arg3, 0x80)
                    char var_60_1 = 1
                    goto label_55a378
                
                if (result == 7)
                    int32_t eax_11 = sub_5b8040(arg3)
                    void* ecx_6 = *(arg4 + 4)
                    *(ecx_6 + 8)
                    int32_t ecx_7
                    ecx_7.b = eax_11 - *(ecx_6 + 8) s>= 0
                    sub_677bb0(ecx_7)
                else if (result != 0xe)
                    void var_48
                    int16_t* eax_13 = sub_5483b0(arg3, &var_48)
                    int32_t var_8_3 = 2
                    void var_30
                    int16_t* eax_14 = sub_548cb0(eax_13, 0xad88a4, &var_30, eax_13)
                    var_8_3.b = 3
                    sub_684160(data_bac424, 2, eax_14)
                    sub_52e8a0(&var_30)
                    sub_52e8a0(&var_48)
                else
                    int32_t ecx_8
                    ecx_8.b = *(arg3 + 0xa0) != 0
                    sub_677bb0(ecx_8)
            else
                sub_54aed0(&var_1a0)
                int32_t var_8_1 = 0
                var_1a0 = 0x15
                __builtin_memcpy(&var_19c, arg3, 0x80)
            label_55a378:
                int32_t var_5c_1 = *(*(arg4 + 4) + 8)
                void var_310
                sub_54cf80(&var_310, &var_1a0)
                sub_6766e0()
                void var_114
                sub_54ae40(&var_114)
    else
        void* eax_5 = *(arg4 + 4)
        edx = *(eax_5 + 0x2d0)
        ecx_1 = *(eax_5 + 0x16c)
        result = *(eax_5 + 8)
        *(arg3 + 0xa0) = 0x10001
    label_55a2c5:
        *(arg3 + 0xa4) = result
        *(arg3 + 0xa8) = ecx_1
        *(arg3 + 0xac) = edx
        *(arg3 + 0xb0) = 0

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
