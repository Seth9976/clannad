// 函数: sub_54df30
// 地址: 0x54df30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1540
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 == 0x100 || arg3 == 0x101)
    int32_t eax_6 = *arg4
    
    if (eax_6 == 1)
        int32_t ecx_14
        ecx_14.b = sub_696fb0(arg3) != 0
        sub_677bb0(ecx_14)
    else if (eax_6 == 4)
        int32_t ecx_15
        ecx_15.b = sub_697020(arg3) != 0
        sub_677bb0(ecx_15)
    else if (eax_6 == 5)
        int32_t ecx_16
        ecx_16.b = sub_697090(arg3) != 0
        sub_677bb0(ecx_16)
    else if (eax_6 == 6)
        sub_677bb0(zx.d(sub_696ed0(arg3)))
    else if (eax_6 != 7)
        int32_t var_34_1 = 7
        int32_t var_38_1 = 0
        int16_t var_48 = 0
        sub_52e720(&var_48, 0xad8878, 0x15)
        int32_t var_8_2 = 0
        sub_684160(data_bac424, 2, &var_48)
        sub_52e8a0(&var_48)
    else
        sub_677bb0(zx.d(sub_696f40(arg3)))
else
    void* edx = data_bac490
    int32_t* edx_1
    
    if (arg3 == 1)
        edx_1 = edx + 8
    else if (arg3 != 2)
        edx_1 = edx + 0x100 + arg3 * 0x50
    else
        edx_1 = edx + 0x58
    
    int32_t eax_4 = *arg4
    
    if (eax_4 == 1)
        eax_4.b = edx_1[1] == eax_4
        int32_t ecx_2
        ecx_2.b = eax_4.b != 0
        sub_677bb0(ecx_2)
    else if (eax_4 == 4)
        eax_4.b = edx_1[2] == 1
        int32_t ecx_3
        ecx_3.b = eax_4.b != 0
        sub_677bb0(ecx_3)
    else if (eax_4 == 5)
        eax_4.b = edx_1[3] == 2
        int32_t ecx_4
        ecx_4.b = eax_4.b != 0
        sub_677bb0(ecx_4)
    else if (eax_4 == 6)
        int32_t ecx_5
        ecx_5.b = *edx_1 == 1
        sub_677bb0(ecx_5)
    else if (eax_4 == 7)
        int32_t ecx_6
        ecx_6.b = *edx_1 == 0
        sub_677bb0(ecx_6)
    else if (eax_4 == 0xa)
        eax_4.b = edx_1[0xc] == 1
        int32_t ecx_7
        ecx_7.b = eax_4.b != 0
        sub_677bb0(ecx_7)
    else if (eax_4 == 0)
        double xmm1_1 = 180.0
        sub_677bb0(int.d((xmm1_1 - *(edx_1 + 0x38) / 3.1415927410125732 * xmm1_1) * 10.0))
    else if (eax_4 == 0xe)
        sub_677bb0(int.d(fconvert.t(*(edx_1 + 0x40))))
    else if (eax_4 != 0xf)
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        int16_t var_30 = 0
        sub_52e720(&var_30, 0xad8878, 0x15)
        int32_t var_8_1 = 1
        sub_684160(data_bac424, 2, &var_30)
        sub_52e8a0(&var_30)
    else
        sub_677bb0(int.d(fconvert.t(*(edx_1 + 0x48))))

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
