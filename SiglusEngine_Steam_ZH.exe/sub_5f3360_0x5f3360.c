// 函数: sub_5f3360
// 地址: 0x5f3360
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1

if (arg1 + 0xe64 != arg2)
    sub_52e3c0(arg1 + 0xe64, arg2, 0, 0xffffffff)

if (arg1 + 0xe7c != arg3)
    sub_52e3c0(arg1 + 0xe7c, arg3, 0, 0xffffffff)

void* ecx_2 = data_bac45c
*(arg1 + 0x350) = 0xffffffff
int32_t eax_2 = sub_6980b0(ecx_2, arg1 + 0xe64)
*(arg1 + 0x348) = eax_2
*(arg1 + 0x34c) = sub_697f50(eax_2, arg1 + 0xe7c)
int32_t result
result.b = 1
return result
