// 函数: sub_557e50
// 地址: 0x557e50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b256e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (arg4 != arg5)
    result = *arg4
    
    if (result == 0)
        for (int32_t* i = *(arg6 + 8); i u< *(arg6 + 0xc); i = &i[0x59])
            if (*i == 0)
                *(arg3 + 4) = i[2]
        
        void* ecx = *(arg6 + 4)
        int32_t esi_1 = *(ecx + 0x434)
        int32_t edx = *(ecx + 0x2d0)
        int32_t ecx_1 = *(ecx + 8)
        *(arg3 + 0xc) = *(ecx + 0x16c)
        result = *(arg3 + 4)
        *(arg3 + 8) = 0
        *(arg3 + 0x10) = edx
        *(arg3 + 0x14) = result
        *(arg3 + 0x18) = result
        *(arg3 + 0x1c) = ecx_1
        *(arg3 + 0x20) = 0
        *(arg3 + 0x24) = esi_1
        *(arg3 + 0x28) = 0
        *(arg3 + 4) = ecx_1
    else if (result == 7)
        int32_t* i_2 = *(arg6 + 8)
        
        if (i_2 u< *(arg6 + 0xc))
            int32_t* i_1 = i_2
            
            do
                if (*i_1 == 0)
                    *(arg3 + 4) = i_1[2]
                
                i_1 = &i_1[0x59]
            while (i_1 u< *(arg6 + 0xc))
        
        void* ecx_2 = *(arg6 + 4)
        int32_t esi_2 = *(ecx_2 + 0x434)
        int32_t edx_1 = *(ecx_2 + 0x2d0)
        int32_t ecx_3 = *(ecx_2 + 8)
        *(arg3 + 0xc) = *(ecx_2 + 0x16c)
        result = *(arg3 + 4)
        *(arg3 + 8) = 0
        *(arg3 + 0x10) = edx_1
        *(arg3 + 0x14) = result
        *(arg3 + 0x18) = result
        *(arg3 + 0x1c) = ecx_3
        *(arg3 + 0x20) = 0
        *(arg3 + 0x24) = esi_2
        *(arg3 + 0x28) = 1
        *(arg3 + 4) = ecx_3
    else
        void* eax_7
        
        if (result == 1)
            eax_7 = *(arg6 + 4)
            sub_5c1ac0(arg3, *(eax_7 + 8), *(eax_7 + 0x16c), *(eax_7 + 0x2d0), *(eax_7 + 0x434), 
                *(eax_7 + 0x598), 0)
        else if (result == 8)
            eax_7 = *(arg6 + 4)
            sub_5c1ac0(arg3, *(eax_7 + 8), *(eax_7 + 0x16c), *(eax_7 + 0x2d0), *(eax_7 + 0x434), 
                *(eax_7 + 0x598), 1)
        else
            void* eax_8
            
            if (result == 2)
                eax_8 = *(arg6 + 4)
                sub_5c1b00(arg3, *(eax_8 + 8), *(eax_8 + 0x16c), *(eax_8 + 0x2d0), 
                    *(eax_8 + 0x434), *(eax_8 + 0x598), 0)
            else if (result == 9)
                eax_8 = *(arg6 + 4)
                sub_5c1b00(arg3, *(eax_8 + 8), *(eax_8 + 0x16c), *(eax_8 + 0x2d0), 
                    *(eax_8 + 0x434), *(eax_8 + 0x598), 1)
            else if (result == 3)
                *(arg3 + 0x20) = 0xffffffff
            else
                int32_t var_208
                void var_204
                void var_b0
                
                if (result != 4)
                    if (result == 0xa)
                        sub_54aed0(&var_208)
                        int32_t var_8_2 = 1
                        int32_t ebx_6 = (arg5 - arg2 - 4) s>> 2
                        var_208 = 0x26
                        int32_t var_34_2 = ebx_6
                        sub_748840(&var_b0, arg2, ebx_6 << 2, eax_2)
                        __builtin_memcpy(&var_204, &var_b0, 0x80)
                        char var_c8_1 = 1
                        char var_c6_1 = 1
                        goto label_5580d8
                    
                    if (result != 5)
                        void* var_224_5 = 0x1a
                        int32_t var_1c_1 = 7
                        void* const var_228_5 = &data_ad8c8c
                        int32_t var_20_1 = 0
                        int16_t var_30 = 0
                        sub_52e720(&var_30, var_228_5, var_224_5)
                        int32_t var_8_3 = 2
                        sub_684160(data_bac424, 2, &var_30)
                        sub_52e8a0(&var_30)
                    else
                        int32_t ecx_10
                        ecx_10.b = *(arg3 + 0x20) != 0xffffffff
                        sub_677bb0(ecx_10)
                else
                    sub_54aed0(&var_208)
                    int32_t var_8_1 = 0
                    int32_t ebx_3 = (arg5 - arg2 - 4) s>> 2
                    var_208 = 0x26
                    int32_t var_34_1 = ebx_3
                    sub_748840(&var_b0, arg2, ebx_3 << 2, eax_2)
                    __builtin_memcpy(&var_204, &var_b0, 0x80)
                label_5580d8:
                    void var_378
                    sub_54cf80(&var_378, &var_208)
                    sub_6766e0()
                    void var_17c
                    sub_54ae40(&var_17c)
else
    *(arg6 + 0x14) = arg3

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
