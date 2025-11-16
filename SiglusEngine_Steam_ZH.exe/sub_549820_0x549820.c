// 函数: sub_549820
// 地址: 0x549820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg4 == arg5)
    arg6[5] = arg3
else if (*arg4 u> 0x22)
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    int16_t var_30 = 0
    sub_52e720(&var_30, 0xad8668, 0x18)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 2, &var_30)
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)
else
    switch (*arg4)
        case nullptr
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0xa4))
            else if (result == 1)
                *(arg3 + 0xa4) = arg6[1][2]
        case 1
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0xd0))
            else if (result == 1)
                *(arg3 + 0xd0) = arg6[1][2]
        case 2
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0xfc))
            else if (result == 1)
                *(arg3 + 0xfc) = arg6[1][2]
        case 3
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x128))
            else if (result == 1)
                sub_548d50(arg3, arg6[1][2])
        case 4
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x154))
            else if (result == 1)
                sub_548d80(arg3, arg6[1][2])
        case 5
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x180))
            else if (result == 1)
                sub_548db0(arg3, arg6[1][2])
        case 6
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x1ac))
            else if (result == 1)
                sub_548de0(arg3, arg6[1][2])
        case 7
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x1d8))
            else if (result == 1)
                sub_548e10(arg3, arg6[1][2])
        case 8
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x204))
            else if (result == 1)
                sub_548e40(arg3, arg6[1][2])
        case 9
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x230))
            else if (result == 1)
                sub_548e70(arg3, arg6[1][2])
        case 0xa
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x25c))
            else if (result == 1)
                sub_548ea0(arg3, arg6[1][2])
        case 0xb
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x288))
            else if (result == 1)
                sub_548ed0(arg3, arg6[1][2])
        case 0xc
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x2b4))
            else if (result == 1)
                sub_548f00(arg3, arg6[1][2])
        case 0xd
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x2e0))
            else if (result == 1)
                sub_548f30(arg3, arg6[1][2])
        case 0xe
            sub_557e50(&arg4[1], arg2, arg3 + 0xa0, &arg4[1], arg5, arg6)
        case 0xf
            sub_557e50(&arg4[1], arg2, arg3 + 0xcc, &arg4[1], arg5, arg6)
        case 0x10
            sub_557e50(&arg4[1], arg2, arg3 + 0xf8, &arg4[1], arg5, arg6)
        case 0x11
            sub_557e50(&arg4[1], arg2, arg3 + 0x124, &arg4[1], arg5, arg6)
        case 0x12
            sub_557e50(&arg4[1], arg2, arg3 + 0x150, &arg4[1], arg5, arg6)
        case 0x13
            sub_557e50(&arg4[1], arg2, arg3 + 0x17c, &arg4[1], arg5, arg6)
        case 0x14
            sub_557e50(&arg4[1], arg2, arg3 + 0x1a8, &arg4[1], arg5, arg6)
        case 0x15
            sub_557e50(&arg4[1], arg2, arg3 + 0x1d4, &arg4[1], arg5, arg6)
        case 0x16
            sub_557e50(&arg4[1], arg2, arg3 + 0x200, &arg4[1], arg5, arg6)
        case 0x17
            sub_557e50(&arg4[1], arg2, arg3 + 0x22c, &arg4[1], arg5, arg6)
        case 0x18
            sub_557e50(&arg4[1], arg2, arg3 + 0x258, &arg4[1], arg5, arg6)
        case 0x19
            sub_557e50(&arg4[1], arg2, arg3 + 0x284, &arg4[1], arg5, arg6)
        case 0x1a
            sub_557e50(&arg4[1], arg2, arg3 + 0x2b0, &arg4[1], arg5, arg6)
        case 0x1b
            sub_557e50(&arg4[1], arg2, arg3 + 0x2dc, &arg4[1], arg5, arg6)
        case 0x1c
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x308))
            else if (result == 1)
                *(arg3 + 0x308) = arg6[1][2]
        case 0x1d
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x310))
            else if (result == 1)
                *(arg3 + 0x310) = arg6[1][2]
        case 0x1e
            sub_5fa960(arg3)
        case 0x1f
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x318))
            else if (result == 1)
                int32_t ecx_3
                ecx_3.b = arg6[1][2] != 0
                *(arg3 + 0x318) = ecx_3
        case 0x20
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x31c))
            else if (result == 1)
                int32_t ecx_5
                ecx_5.b = arg6[1][2] != 0
                *(arg3 + 0x31c) = ecx_5
        case 0x21
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x30c))
            else if (result == 1)
                *(arg3 + 0x30c) = arg6[1][2]
        case 0x22
            result = *arg6
            
            if (result == 0)
                sub_677bb0(*(arg3 + 0x314))
            else if (result == 1)
                *(arg3 + 0x314) = arg6[1][2]

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
