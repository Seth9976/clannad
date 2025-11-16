// 函数: sub_468520
// 地址: 0x468520
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg2
int32_t esi = *arg3

if (esi s> eax)
    *arg3 = eax
    *arg2 = esi

int32_t eax_1 = *arg3

if (eax_1 s>= 0)
    int32_t ecx = *arg2
    
    if (ecx s< data_7031bc)
        *arg4 = ecx - eax_1 + 1
        return 1

return 0
