// 函数: sub_6744e0
// 地址: 0x6744e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6af0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 != 0xa)
    if (arg3 == 0x14)
        if (arg2 == 0xa)
            arg3.b = arg4
            result = sub_674800(arg3.b)
        else if (arg2 == 0x14)
            arg3.b = arg4
            result = sub_6748b0(arg3.b)
else if (arg2 == arg3)
    int32_t* edx = data_bac49c
    edx[1] -= 1
    int32_t eax_3 = edx[1]
    int32_t ecx = *edx
    int32_t esi_1 = *(ecx + (eax_3 << 2))
    edx[1] = eax_3 - 1
    int32_t edx_1 = *(ecx + ((eax_3 - 1) << 2))
    result = zx.d(arg4) - 1
    
    if (result u<= 0x35)
        result = zx.d(*(result + &lookup_table_6747bc))
        
        switch (result)
            case nullptr
                result = sub_677bb0(edx_1 + esi_1)
            case 1
                result = sub_677bb0(edx_1 - esi_1)
            case 2
                result = sub_677bb0(edx_1 * esi_1)
            case 3
                if (esi_1 != 0)
                    result = sub_677bb0(divs.dp.d(sx.q(edx_1), esi_1))
                else
                    int32_t var_1c_1 = 7
                    int32_t var_20_1 = esi_1
                    int16_t var_30 = 0
                    sub_52e720(&var_30, 0xaf9530, 0xe)
                    int32_t var_8_1 = esi_1
                    sub_684160(data_bac424, 6, &var_30)
                    sub_52e8a0(&var_30)
                    result = sub_677bb0(0)
            case 4
                if (esi_1 != 0)
                    result = sub_677bb0(mods.dp.d(sx.q(edx_1), esi_1))
                else
                    int32_t var_34_1 = 7
                    int32_t var_38_1 = esi_1
                    int16_t var_48 = 0
                    sub_52e720(&var_48, 0xaf9550, 0xe)
                    int32_t var_8_2 = 1
                    sub_684160(data_bac424, 6, &var_48)
                    sub_52e8a0(&var_48)
                    result = sub_677bb0(0)
            case 5
                int32_t ecx_4
                ecx_4.b = edx_1 == esi_1
                result = sub_677bb0(ecx_4)
            case 6
                int32_t ecx_5
                ecx_5.b = edx_1 != esi_1
                result = sub_677bb0(ecx_5)
            case 7
                int32_t ecx_6
                ecx_6.b = edx_1 s> esi_1
                result = sub_677bb0(ecx_6)
            case 8
                int32_t ecx_7
                ecx_7.b = edx_1 s>= esi_1
                result = sub_677bb0(ecx_7)
            case 9
                int32_t ecx_8
                ecx_8.b = edx_1 s< esi_1
                result = sub_677bb0(ecx_8)
            case 0xa
                int32_t ecx_9
                ecx_9.b = edx_1 s<= esi_1
                result = sub_677bb0(ecx_9)
            case 0xb
                if (edx_1 == 0 || esi_1 == 0)
                    result = sub_677bb0(0)
                else
                    result = sub_677bb0(1)
            case 0xc
                if (edx_1 != 0 || esi_1 != 0)
                    result = sub_677bb0(1)
                else
                    result = sub_677bb0(0)
            case 0xd
                result = sub_677bb0(edx_1 & esi_1)
            case 0xe
                result = sub_677bb0(edx_1 | esi_1)
            case 0xf
                result = sub_677bb0(edx_1 ^ esi_1)
            case 0x10
                result = sub_677bb0(edx_1 << esi_1.b)
            case 0x11
                result = sub_677bb0(edx_1 s>> esi_1.b)
            case 0x12
                result = sub_677bb0(edx_1 u>> esi_1.b)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
