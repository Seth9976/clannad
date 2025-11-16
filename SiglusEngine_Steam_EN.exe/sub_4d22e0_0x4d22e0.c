// 函数: sub_4d22e0
// 地址: 0x4d22e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
int32_t esi = *arg3
int32_t ecx = *arg4

if (esi s> ecx)
    *arg3 = ecx
    *arg4 = esi

int32_t* ecx_1 = arg5
int32_t esi_1 = *arg2
int32_t eax_1 = *ecx_1

if (esi_1 s> eax_1)
    *arg2 = eax_1
    *ecx_1 = esi_1

int32_t esi_2 = arg8
int32_t eax_2 = arg6

if (eax_2 s> esi_2)
    arg6 = esi_2
    esi_2 = eax_2

int32_t ebx = arg9
int32_t eax_3 = arg7

if (eax_3 s> ebx)
    arg7 = ebx
    ebx = eax_3

int32_t eax_5 = *arg3

if (eax_5 == 0xffffffff && *arg2 == eax_5 && *arg4 == eax_5 && *ecx_1 == eax_5)
    *ecx_1 = ebx
    *arg3 = arg6
    *arg2 = arg7
    *arg4 = esi_2
    return arg7

if (eax_5 s> arg6)
    *arg3 = arg6
    ecx_1 = arg5

if (*arg4 s< esi_2)
    *arg4 = esi_2

if (*arg2 s> arg7)
    *arg2 = arg7

if (*ecx_1 s< ebx)
    *ecx_1 = ebx

return arg7
