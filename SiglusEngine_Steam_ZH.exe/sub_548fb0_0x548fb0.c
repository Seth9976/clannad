// 函数: sub_548fb0
// 地址: 0x548fb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = *arg5

if (arg3 == arg4)
    arg5[5] = data_bac480
else if (*arg3 u> 0x1f)
label_5495fe:
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    int16_t var_30 = 0
    sub_52e720(&var_30, 0xad85f8, 0x18)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 2, &var_30)
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)
else
    int32_t ecx_1 = *arg3
    
    switch (ecx_1)
        case 0
            void* ecx_20 = data_bac480
            
            if (result == 0)
                sub_677bb0(*(*(ecx_20 + 0x144) + 0x128))
            else if (result == 1)
                sub_548d50(*(ecx_20 + 0x144), *(arg5[1] + 8))
        case 1
            goto label_5495fe
        case 2
            void* ecx_24 = data_bac480
            
            if (result == 0)
                sub_677bb0(*(*(ecx_24 + 0x144) + 0x154))
            else if (result == 1)
                sub_548d80(*(ecx_24 + 0x144), *(arg5[1] + 8))
        case 3
            void* ecx_28 = data_bac480
            
            if (result == 0)
                sub_677bb0(*(*(ecx_28 + 0x144) + 0x180))
            else if (result == 1)
                sub_548db0(*(ecx_28 + 0x144), *(arg5[1] + 8))
        case 4
            void* ecx_32 = data_bac480
            
            if (result == 0)
                sub_677bb0(*(*(ecx_32 + 0x144) + 0x1ac))
            else if (result == 1)
                sub_548de0(*(ecx_32 + 0x144), *(arg5[1] + 8))
        case 5
            void* ecx_36 = data_bac480
            
            if (result == 0)
                sub_677bb0(*(*(ecx_36 + 0x144) + 0x1d8))
            else if (result == 1)
                sub_548e10(*(ecx_36 + 0x144), *(arg5[1] + 8))
        case 6
            void* ecx_40 = data_bac480
            
            if (result == 0)
                sub_677bb0(*(*(ecx_40 + 0x144) + 0x204))
            else if (result == 1)
                sub_548e40(*(ecx_40 + 0x144), *(arg5[1] + 8))
        case 7
            void* ecx_44 = data_bac480
            
            if (result == 0)
                sub_677bb0(*(*(ecx_44 + 0x144) + 0x230))
            else if (result == 1)
                sub_548e70(*(ecx_44 + 0x144), *(arg5[1] + 8))
        case 8
            void* ecx_48 = data_bac480
            
            if (result == 0)
                sub_677bb0(*(*(ecx_48 + 0x144) + 0x25c))
            else if (result == 1)
                sub_548ea0(*(ecx_48 + 0x144), *(arg5[1] + 8))
        case 9
            int32_t var_44_2 = ecx_1
            sub_5fb880(data_bac480 + 0x158, *(arg5[1] + 8))
        case 0xa
            void* ecx_8 = data_bac480
            
            if (result == 0)
                sub_677bb0(*(*(ecx_8 + 0x144) + 0xa4))
            else if (result == 1)
                *(*(ecx_8 + 0x144) + 0xa4) = *(arg5[1] + 8)
        case 0xb
            sub_557e50(&arg3[1], arg2, *(data_bac480 + 0x144) + 0x124, &arg3[1], arg4, arg5)
        case 0xc
            sub_557e50(&arg3[1], arg2, *(data_bac480 + 0x144) + 0x150, &arg3[1], arg4, arg5)
        case 0xd
            sub_557e50(&arg3[1], arg2, *(data_bac480 + 0x144) + 0x17c, &arg3[1], arg4, arg5)
        case 0xe
            sub_557e50(&arg3[1], arg2, *(data_bac480 + 0x144) + 0x1a8, &arg3[1], arg4, arg5)
        case 0xf
            sub_557e50(&arg3[1], arg2, *(data_bac480 + 0x144) + 0x1d4, &arg3[1], arg4, arg5)
        case 0x10
            sub_557e50(&arg3[1], arg2, *(data_bac480 + 0x144) + 0x200, &arg3[1], arg4, arg5)
        case 0x11
            sub_557e50(&arg3[1], arg2, *(data_bac480 + 0x144) + 0x22c, &arg3[1], arg4, arg5)
        case 0x12
            sub_557e50(&arg3[1], arg2, *(data_bac480 + 0x144) + 0x258, &arg3[1], arg4, arg5)
        case 0x13
            void* ecx_52 = data_bac480
            
            if (result == 0)
                sub_677bb0(*(*(ecx_52 + 0x144) + 0x288))
            else if (result == 1)
                sub_548ed0(*(ecx_52 + 0x144), *(arg5[1] + 8))
        case 0x14
            void* ecx_56 = data_bac480
            
            if (result == 0)
                sub_677bb0(*(*(ecx_56 + 0x144) + 0x2b4))
            else if (result == 1)
                sub_548f00(*(ecx_56 + 0x144), *(arg5[1] + 8))
        case 0x15
            void* ecx_60 = data_bac480
            
            if (result == 0)
                sub_677bb0(*(*(ecx_60 + 0x144) + 0x2e0))
            else if (result == 1)
                sub_548f30(*(ecx_60 + 0x144), *(arg5[1] + 8))
        case 0x16
            sub_557e50(&arg3[1], arg2, *(data_bac480 + 0x144) + 0x284, &arg3[1], arg4, arg5)
        case 0x17
            sub_557e50(&arg3[1], arg2, *(data_bac480 + 0x144) + 0x2b0, &arg3[1], arg4, arg5)
        case 0x18
            sub_557e50(&arg3[1], arg2, *(data_bac480 + 0x144) + 0x2dc, &arg3[1], arg4, arg5)
        case 0x19
            sub_549ec0(&arg3[1], arg5, data_bac480 + 0x168, &arg3[1], arg4, arg5)
        case 0x1a
            void* ecx_12 = data_bac480
            
            if (result == 0)
                sub_677bb0(*(*(ecx_12 + 0x144) + 0xd0))
            else if (result == 1)
                *(*(ecx_12 + 0x144) + 0xd0) = *(arg5[1] + 8)
        case 0x1b
            void* ecx_16 = data_bac480
            
            if (result == 0)
                sub_677bb0(*(*(ecx_16 + 0x144) + 0xfc))
            else if (result == 1)
                *(*(ecx_16 + 0x144) + 0xfc) = *(arg5[1] + 8)
        case 0x1c
            sub_557e50(&arg3[1], arg2, *(data_bac480 + 0x144) + 0xa0, &arg3[1], arg4, arg5)
        case 0x1d
            sub_557e50(&arg3[1], arg2, *(data_bac480 + 0x144) + 0xcc, &arg3[1], arg4, arg5)
        case 0x1e
            sub_557e50(&arg3[1], arg2, *(data_bac480 + 0x144) + 0xf8, &arg3[1], arg4, arg5)
        case 0x1f
            sub_5496f0(&arg3[1], arg2, data_bac480 + 0xa0, &arg3[1], arg4, arg5)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
