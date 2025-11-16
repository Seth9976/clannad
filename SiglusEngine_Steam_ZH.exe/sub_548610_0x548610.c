// 函数: sub_548610
// 地址: 0x548610
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0ff8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg4 != arg5)
    void* ecx = *arg4
    int16_t var_30
    
    if (ecx == 0xffffffff)
        int32_t eax_3 = arg4[1]
        
        if (eax_3 == 0)
            result = sub_548610(&arg4[2], arg5, arg6, eax_2)
        else if (eax_3 != 1)
            int32_t var_1c_1 = 7
            int32_t var_20_1 = 0
            var_30 = 0
            sub_52e720(&var_30, u"excall[]", 0x17)
            int32_t var_8_1 = 0
            sub_684160(data_bac424, 7, &var_30)
            sub_52e8a0(&var_30)
            result.b = 1
        else
            data_bac41c
            result = sub_548610(&arg4[2], arg5, arg6, eax_2)
    else if (ecx == 4)
        sub_5ba580(arg3)
        result.b = 1
    else if (ecx == 5)
        sub_5ba5e0(arg3)
        result.b = 1
    else if (ecx == 0xc)
        int32_t ecx_8
        ecx_8.b = *(data_bac4a0 + 0xcc) != 0
        sub_677bb0(ecx_8)
        result.b = 1
    else if (ecx != 8)
        if (arg3 != 0)
            result.b = *(arg3 + 0x864)
        
        if (arg3 == 0 || result.b != 0)
            if (ecx == 7)
                int32_t ecx_12
                
                if (arg3 == 0)
                    ecx_12 = data_bac418 + 0x398
                else
                    ecx_12 = arg3 + 0xa0
                
                sub_557680(&arg4[1], 0x20, ecx_12, arg2, &arg4[1], arg5, arg6)
                result.b = 1
            else if (ecx == 6)
                void* ecx_14 = arg3 + 0x158
                
                if (arg3 == 0)
                    ecx_14 = data_bac414
                
                sub_55a030(&arg4[1], arg3, ecx_14, &arg4[1], arg5, arg6)
                result.b = 1
            else if (ecx == 9)
                void* ecx_15 = arg3 + 0x210
                
                if (arg3 == 0)
                    ecx_15 = data_bac410
                
                sub_55a5d0(&arg4[1], arg3, ecx_15, &arg4[1], arg5, arg6)
                result.b = 1
            else if (ecx == 0xa)
                int32_t* ecx_16 = arg3 + 0x4dc
                
                if (arg3 == 0)
                    ecx_16 = data_bac40c
                
                sub_55a440(&arg4[1], arg3, ecx_16, &arg4[1], arg5, arg6)
                result.b = 1
            else if (ecx == 0)
                void* ecx_17 = arg3 + 0x614
                
                if (arg3 == 0)
                    ecx_17 = data_bac408
                
                sub_560ba0(&arg4[1], arg2, ecx_17, &arg4[1], arg5, arg6)
                result.b = 1
            else
                void* ecx_18
                
                if (ecx == 2)
                    if (arg3 == 0)
                        ecx_18 = *(data_bac408 + 0xa4)
                    else
                        ecx_18 = *(arg3 + 0x6b8)
                    
                    sub_560cb0(&arg4[1], arg2, ecx_18, &arg4[1], arg5, arg6)
                    result.b = 1
                else if (ecx == 1)
                    if (arg3 == 0)
                        ecx_18 = *(data_bac408 + 0xa4) + 0x8ec
                    else
                        ecx_18 = *(arg3 + 0x6b8) + 0x8ec
                    
                    sub_560cb0(&arg4[1], arg2, ecx_18, &arg4[1], arg5, arg6)
                    result.b = 1
                else if (ecx == 3)
                    void* ecx_21
                    
                    if (arg3 == 0)
                        ecx_21 = *(data_bac408 + 0xa4)
                    else
                        ecx_21 = *(arg3 + 0x6b8)
                    
                    sub_560cb0(&arg4[1], arg2, ecx_21 + 0x11d8, &arg4[1], arg5, arg6)
                    result.b = 1
                else if (ecx != 0xd)
                    int32_t var_34_1 = 7
                    int32_t var_38_1 = 0
                    int16_t var_48 = 0
                    sub_52e720(&var_48, 0xad859c, 0x18)
                    int32_t var_8_3 = 2
                    sub_684160(data_bac424, 2, &var_48)
                    sub_52e8a0(&var_48)
                    result.b = 1
                else
                    int32_t* var_64_11 = arg6
                    void* var_68_9 = ecx
                    sub_55e000(result, &arg4[1], ecx)
                    result.b = 1
        else if (arg6[6].b == result.b)
            result.b = 1
        else
            int32_t var_1c_2 = 7
            int32_t var_20_2 = 0
            var_30 = 0
            sub_52e720(&var_30, 0xad8574, 0x12)
            int32_t var_8_2 = 1
            sub_684160(data_bac424, 7, &var_30)
            sub_52e8a0(&var_30)
            result.b = 1
    else
        int32_t ecx_9
        ecx_9.b = *(arg3 + 0x864) != 0
        sub_677bb0(ecx_9)
        result.b = 1
else
    arg6[5] = arg3
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
