// 函数: sub_6d6da0
// 地址: 0x6d6da0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg5 s>= 2)
    sub_6d4470(arg3, "Unrecognized unit type for pHYs chunk")

uint8_t var_14 = (arg2 u>> 0x18).b
uint8_t var_13 = (arg2 u>> 0x10).b
uint8_t var_12 = (arg2 u>> 8).b
uint8_t var_10 = (arg4 u>> 0x18).b
uint8_t var_f = (arg4 u>> 0x10).b
uint8_t var_e = (arg4 u>> 8).b
int32_t result = arg5
char var_11 = arg2.b
char var_d = arg4.b
char var_c = result.b

if (arg3 != 0)
    sub_6d4aa0(result, 0x70485973, arg3, 9)
    int32_t eax_14 = *(arg3 + 0x58)
    
    if (eax_14 == 0)
        sub_6d42e0(arg3, "Call to NULL write function")
        noreturn
    
    sub_6caa70(eax_14(arg3, &var_14, 9), &var_14, arg3, 9)
    result = sub_6d4bb0(arg3)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
