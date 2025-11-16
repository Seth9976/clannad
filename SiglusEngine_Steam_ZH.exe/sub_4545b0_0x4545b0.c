// 函数: sub_4545b0
// 地址: 0x4545b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t esi_1

if (arg2 s>= 0)
    esi_1 = sub_4538a9(arg1, arg2, 1, 0)
    
    if (esi_1 == 0)
        return 0x8876086c
else
    esi_1 = not.d(arg2)

if (arg4 != 0xffffffff && *(esi_1 + 0xc) u> arg4)
    return 0x8876086c

if (*(arg1 + 0x3c) == 3)
    return sub_44e8f1(arg1, not.d(esi_1), arg3, arg4)

int32_t* var_10_2 = arg3
int32_t* result = sub_449c0a(arg1, esi_1)

if (result s< 0)
    return result

return sub_448129(arg1, esi_1)
