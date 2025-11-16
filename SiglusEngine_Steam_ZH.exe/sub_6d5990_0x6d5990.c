// 函数: sub_6d5990
// 地址: 0x6d5990
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
var_8:3.b = arg2.b
var_8.b = (arg2 u>> 0x18).b
var_8:1.b = (arg2 u>> 0x10).b
uint32_t result = arg2 u>> 8
var_8:2.b = result.b

if (arg1 == 0)
    return result

sub_6d4aa0(result, 0x67414d41, arg1, 4)
int32_t eax_5 = *(arg1 + 0x58)

if (eax_5 == 0)
    sub_6d42e0(arg1, "Call to NULL write function")
    noreturn

sub_6caa70(eax_5(arg1, &var_8, 4), &var_8, arg1, 4)
return sub_6d4bb0(arg1)
