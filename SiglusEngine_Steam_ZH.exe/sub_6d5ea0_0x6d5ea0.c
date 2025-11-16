// 函数: sub_6d5ea0
// 地址: 0x6d5ea0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx = arg2[6]
char var_25 = ecx.b
uint8_t var_28 = (ecx u>> 0x18).b
uint8_t var_27 = (ecx u>> 0x10).b
uint8_t var_26 = (ecx u>> 8).b
int32_t ecx_1 = arg2[7]
uint8_t var_24 = (ecx_1 u>> 0x18).b
uint8_t var_23 = (ecx_1 u>> 0x10).b
uint8_t var_22 = (ecx_1 u>> 8).b
char var_21 = ecx_1.b
int32_t ecx_2 = *arg2
uint8_t var_20 = (ecx_2 u>> 0x18).b
uint8_t var_1f = (ecx_2 u>> 0x10).b
uint8_t var_1e = (ecx_2 u>> 8).b
char var_1d = ecx_2.b
int32_t ecx_3 = arg2[1]
uint8_t var_1c = (ecx_3 u>> 0x18).b
uint8_t var_1b = (ecx_3 u>> 0x10).b
uint8_t var_1a = (ecx_3 u>> 8).b
char var_19 = ecx_3.b
int32_t ecx_4 = arg2[2]
uint8_t var_18 = (ecx_4 u>> 0x18).b
uint8_t var_17 = (ecx_4 u>> 0x10).b
uint8_t var_16 = (ecx_4 u>> 8).b
char var_15 = ecx_4.b
int32_t ecx_5 = arg2[3]
uint8_t var_14 = (ecx_5 u>> 0x18).b
uint8_t var_13 = (ecx_5 u>> 0x10).b
uint8_t var_12 = (ecx_5 u>> 8).b
char var_11 = ecx_5.b
int32_t ecx_6 = arg2[4]
uint8_t var_10 = (ecx_6 u>> 0x18).b
uint8_t var_f = (ecx_6 u>> 0x10).b
char var_d = ecx_6.b
int32_t ecx_7 = arg2[5]
uint8_t var_e = (ecx_6 u>> 8).b
uint8_t var_c = (ecx_7 u>> 0x18).b
uint8_t var_b = (ecx_7 u>> 0x10).b
uint32_t result = ecx_7 u>> 8
char var_a = result.b
char var_9 = ecx_7.b

if (arg1 != 0)
    sub_6d4aa0(result, 0x6348524d, arg1, 0x20)
    int32_t eax_49 = *(arg1 + 0x58)
    
    if (eax_49 == 0)
        sub_6d42e0(arg1, "Call to NULL write function")
        noreturn
    
    sub_6caa70(eax_49(arg1, &var_28, 0x20), &var_28, arg1, 0x20)
    result = sub_6d4bb0(arg1)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
