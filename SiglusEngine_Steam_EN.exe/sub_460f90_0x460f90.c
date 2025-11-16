// 函数: sub_460f90
// 地址: 0x460f90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0
char* result = arg2

while (*result == 0)
    esi += 1
    result = &result[0x40]
    
    if (esi s>= 8)
        return sub_4d6c40(arg1 + 0x1c, arg1 + 0x20) __tailcall

if (*(arg1 + 0x20) == 0)
    result = sub_4d6960(result, arg1 + 0x20, arg1 + 0x1c, 0x200, "MSGST_FACE")

sub_4d1c30(result, arg2, *(arg1 + 0x20), 0x200)
return result
