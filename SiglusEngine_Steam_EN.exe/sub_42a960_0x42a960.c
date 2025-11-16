// 函数: sub_42a960
// 地址: 0x42a960
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg4
int32_t edi = arg3

if (edi s> esi)
    int32_t eax = edi
    edi = esi
    esi = eax

int32_t ecx = arg5

if (arg2 s> ecx)
    int32_t eax_1 = arg2
    arg2 = ecx
    ecx = eax_1

if ((arg8 s<= 0 || arg8 s>= 0xff) && arg6 s<= 0 && arg6 + esi - edi + 1 s>= data_70300c
        && arg7 s<= 0 && arg7 + ecx - arg2 + 1 s>= data_7030dc)
    return 1

return 0
