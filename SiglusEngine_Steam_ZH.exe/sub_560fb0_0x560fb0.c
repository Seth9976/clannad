// 函数: sub_560fb0
// 地址: 0x560fb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MAEHH@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = *arg7

if (arg5 != arg6)
    switch (*arg5)
        case 0
            sub_6b2440(data_bac4c8)
            sub_5c12a0(arg3)
            *(arg3 + 0x142) = 1
            *(arg3 + 0x140) = 1
            *(arg3 + 0x134) = 0xfffffffe
            sub_676610(0x10)
            int32_t edi_3 = (arg6 - arg4 - 4) s>> 2
            int32_t var_48_1 = edi_3
            void var_c4
            sub_748840(&var_c4, arg4, edi_3 << 2, eax_2)
            __builtin_memcpy(data_bac458 + 4, &var_c4, 0x80)
        case 1
            int32_t edx_2
            
            if (result s<= 0)
                edx_2 = 0xffffffff
            else
                edx_2 = *(arg7[1] + 8)
            
            sub_6b2440(data_bac4c8)
            sub_5c12a0(arg3)
            *(arg3 + 0x142) = 0x101
            *(arg3 + 0x130) = edx_2
            *(arg3 + 0x140) = 1
            *(arg3 + 0x134) = 0xfffffffe
            sub_676610(0x10)
            __builtin_memcpy(data_bac458 + 4, arg3, 0x80)
        case 2
            sub_6b2440(data_bac4c8)
            sub_5c12a0(arg3)
            *(arg3 + 0x140) = 1
            *(arg3 + 0x134) = 0xfffffffe
        case 3
            sub_677bb0(*(arg3 + 0x134))
        case 4
            sub_5c1200(arg3)
        case 5
            *(arg3 + 0x140) = 0
            *(arg3 + 0x134) = 0xfffffffe
        case 6
            sub_677bb0(*(arg3 + 0x1cc))
        case 7
            sub_677bb0(*(arg3 + 0x1d0))
        case 8
            if (result == 0)
                sub_677bb0(*(arg3 + 0x124))
            else if (result == 1)
                *(arg3 + 0x124) = *(arg7[1] + 8)
        case 0xa
            int32_t edx_3
            
            if (result s<= 0)
                edx_3 = 0xffffffff
            else
                edx_3 = *(arg7[1] + 8)
            
            sub_6b2440(data_bac4c8)
            sub_5c12a0(arg3)
            *(arg3 + 0x143) = 1
            *(arg3 + 0x130) = edx_3
            *(arg3 + 0x140) = 1
            *(arg3 + 0x134) = 0xfffffffe
        case 0xd
            if (result == 0)
                sub_677bb0(*(arg3 + 0x128))
            else if (result == 1)
                *(arg3 + 0x128) = *(arg7[1] + 8)
        case 0xe
            if (result == 0)
                sub_677bb0(*(arg3 + 0x12c))
            else if (result == 1)
                *(arg3 + 0x12c) = *(arg7[1] + 8)
        case 0xf
            sub_677bb0(*(arg3 + 0x138))
        case 0x10
            sub_677bb0(*(arg3 + 0x13c))
        default
            int32_t var_44
            int16_t* eax_9 = sub_5483b0(arg3, &var_44)
            int32_t var_8_1 = 0
            int16_t var_2c
            int16_t* eax_10 = sub_548cb0(eax_9, 0xad88a4, &var_2c, eax_9)
            var_8_1.b = 1
            sub_684160(data_bac424, 2, eax_10)
            int32_t var_18
            
            if (var_18 u>= 8)
                j__free(var_2c.d)
            
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            var_2c = 0
            int32_t var_30
            
            if (var_30 u>= 8)
                j__free(var_44)
else
    arg7[5] = arg3

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
