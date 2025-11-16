// 函数: sub_6d4aa0
// 地址: 0x6d4aa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result

if (arg3 != 0)
    uint8_t var_10 = (arg4 u>> 0x18).b
    uint8_t var_f_1 = (arg4 u>> 0x10).b
    uint8_t var_e_1 = (arg4 u>> 8).b
    uint8_t var_c = (arg2 u>> 0x18).b
    uint8_t var_b_1 = (arg2 u>> 0x10).b
    uint8_t var_a_1 = (arg2 u>> 8).b
    int32_t eax_13 = *(arg3 + 0x58)
    *(arg3 + 0x2a4) = 0x22
    char var_d_1 = arg4.b
    char var_9_1 = arg2.b
    
    if (eax_13 == 0)
        sub_6d42e0(arg3, "Call to NULL write function")
        noreturn
    
    int32_t eax_14 = eax_13(arg3, &var_10, 8)
    *(arg3 + 0x11c) = arg2
    *(arg3 + 0x138) = 0
    result = sub_6caa70(eax_14, &var_c, arg3, 4)
    *(arg3 + 0x2a4) = 0x42

sub_745f2b(result_1 ^ &__saved_ebp)
return result
