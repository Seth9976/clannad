// 函数: sub_4d2170
// 地址: 0x4d2170
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg4
int32_t eax = *ecx
int32_t* result = arg5

if (eax == 0xffffffff && *result == 0xffffffff && *arg6 == 0xffffffff && *arg7 == 0xffffffff)
    *ecx = 0
    *result = 0
    *arg6 = arg3 - 1
    *arg7 = arg2 - 1
    return arg2 - 1

int32_t** esi_2 = arg7

if (eax s> *arg6)
    *ecx = *arg6
    result = arg5
    *arg6 = eax
    ecx = arg4

int32_t* edi_1 = *result
int32_t* edi_3 = arg6

if (edi_1 s> *esi_2)
    *result = *esi_2
    *esi_2 = edi_1
    edi_3 = arg6

if (*ecx s< 0)
    *ecx = 0

if (*result s< 0)
    *result = 0

if (*edi_3 s>= arg3)
    result = arg3 - 1
    *edi_3 = result

if (*esi_2 s>= arg2)
    result = arg2 - 1
    *esi_2 = result

return result
