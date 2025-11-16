// 函数: sub_6d4bb0
// 地址: 0x6d4bb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1

if (arg1 == 0)
    return 

int32_t edx_1 = *(arg1 + 0x138)
var_8.b = (edx_1 u>> 0x18).b
var_8:1.b = (edx_1 u>> 0x10).b
var_8:2.b = (edx_1 u>> 8).b
int32_t eax_7 = *(arg1 + 0x58)
*(arg1 + 0x2a4) = 0x82
var_8:3.b = edx_1.b

if (eax_7 == 0)
    sub_6d42e0(arg1, "Call to NULL write function")
    noreturn

eax_7(arg1, &var_8, 4)
