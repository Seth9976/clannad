// 函数: sub_4ce870
// 地址: 0x4ce870
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg4 s<= 0)
    return arg4

int32_t ecx = arg8

if (ecx s< 0x64)
    ecx = 0x64
else if (ecx s> 0x190)
    ecx = 0x190

int32_t esi_2 = arg5 s/ 0x50
int32_t eax_4 = arg5 s/ 0x6e
int32_t eax_8 = (ecx - 0x64) * esi_2 s/ 0x64
return sub_4ce5e0(eax_8, arg2, arg3, arg4, arg5, arg6, arg7, esi_2, eax_8, eax_4, eax_4)
