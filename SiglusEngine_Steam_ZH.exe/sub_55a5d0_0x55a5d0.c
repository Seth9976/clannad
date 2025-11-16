// 函数: sub_55a5d0
// 地址: 0x55a5d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b28e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_148 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg4 != arg5)
    result = *arg4
    struct C_elm_list<class C_tnm_prop>::C_tnm_prop_list::VTable* var_130
    void var_12c
    void* var_8c
    void var_78
    void var_60
    void* var_48
    int16_t var_30
    
    if (result == 1)
        void* ecx_1 = data_bac45c
        int32_t eax_4 = *(*(arg6 + 4) + 8)
        sub_698170(ecx_1, &var_48, *(ecx_1 + 0x64))
        int32_t var_8_1 = 0
        void** eax_6 = *(arg6 + 4) + 0x170
        var_30 = 0
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        sub_52e3c0(&var_30, eax_6, 0, 0xffffffff)
        sub_54ade0(&var_130)
        var_8_1.b = 2
        int32_t eax_7 = *(arg6 + 8)
        int32_t var_14c_2 = eax_4
        void* esi_1 = var_8c
        int32_t* ebx_2 = *(arg6 + 4) + 0x2c8
        struct C_elm_list<class C_tnm_prop>::C_tnm_prop_list::VTable** var_150_2 = &var_130
        int32_t var_88
        sub_54d5d0(esi_1, var_88)
        void* var_88_1 = esi_1
        
        if (ebx_2 != eax_7)
            sub_55d010(&var_8c, ebx_2, eax_7)
        
        if (sub_697f50(*(data_bac45c + 0x64), &var_30) s>= 0)
            sub_5bfc30(arg3, eax_4, 0, &var_48, &var_30, &var_130)
        else
            int16_t* eax_12 = sub_548cb0(&var_30, 0xad8ddc, &var_78, &var_30)
            var_8_1.b = 3
            int16_t* eax_13 = sub_532b80(eax_12, eax_12, &var_60, 0xad8d98)
            var_8_1.b = 4
            sub_684160(data_bac424, 9, eax_13)
            sub_52e8a0(&var_60)
            sub_52e8a0(&var_78)
        
        sub_54ae40(&var_12c)
        
        if (var_1c_1 u>= 8)
            j__free(var_30.d)
        
        int32_t var_1c_2 = 7
        int32_t var_20_2 = 0
        var_30 = 0
        int32_t var_34
        
        if (var_34 u>= 8)
            j__free(var_48)
    else if (result == 3)
        void* ecx_13 = data_bac45c
        int32_t ebx_3 = *(*(arg6 + 4) + 8)
        sub_698170(ecx_13, &var_48, *(ecx_13 + 0x64))
        int32_t var_8_2 = 5
        sub_536170(&var_30, *(arg6 + 4) + 0x170)
        sub_54ade0(&var_130)
        var_8_2.b = 7
        sub_55c6b0(&var_8c, *(arg6 + 4) + 0x2c8, *(arg6 + 8))
        
        if (sub_697f50(*(data_bac45c + 0x64), &var_30) s>= 0)
            sub_5bfc30(arg3, ebx_3, 1, &var_48, &var_30, &var_130)
        else
            int16_t* eax_22 = sub_548cb0(&var_30, 0xad8ddc, &var_60, &var_30)
            var_8_2.b = 8
            int16_t* eax_23 = sub_532b80(eax_22, eax_22, &var_78, 0xad8d98)
            var_8_2.b = 9
            sub_684160(data_bac424, 9, eax_23)
            sub_52e8a0(&var_78)
            sub_52e8a0(&var_60)
        
        sub_54ae40(&var_12c)
        sub_52e8a0(&var_30)
        sub_52e8a0(&var_48)
    else if (result == 2)
        sub_5bf760(arg3, 1)
    else if (result != 0)
        if (result != 4)
            int16_t* eax_24 = sub_5483b0(arg3, &var_60)
            int32_t var_8_3 = 0xa
            int16_t* eax_25 = sub_548cb0(eax_24, 0xad88a4, &var_78, eax_24)
            var_8_3.b = 0xb
            sub_684160(data_bac424, 2, eax_25)
            sub_52e8a0(&var_78)
            sub_52e8a0(&var_60)
        else
            int32_t ecx_28
            ecx_28.b = *(arg3 + 0x2c8) != 0
            sub_677bb0(ecx_28)
    else if (&arg4[1] != arg5)
        sub_55a170(result, &arg4[1], arg3 + 0x214, arg6)
    else
        *(arg6 + 0x14) = arg3 + 0x214
else
    *(arg6 + 0x14) = arg3

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
