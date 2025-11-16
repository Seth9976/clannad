// 函数: sub_576c70
// 地址: 0x576c70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *((arg2 + (arg3 << 3)) * 0x374 + 0x1b1bf7c)
int32_t ebx
int32_t esi
int32_t edi

if (*((arg2 + (arg3 << 3)) * 0x374 + 0x1b1bef8) != 0)
    edi = *((arg2 + (arg3 << 3)) * 0x374 + 0x1b1befc)
    ebx = *((arg2 + (arg3 << 3)) * 0x374 + 0x1b1bf04)
    esi = *((arg2 + (arg3 << 3)) * 0x374 + 0x1b1bf94)
else
    edi = *((arg2 + (arg3 << 3)) * 0x374 + 0x1b1bf08)
    ebx = *((arg2 + (arg3 << 3)) * 0x374 + 0x1b1bf14)
    esi = *((arg2 + (arg3 << 3)) * 0x374 + 0x1b1bfa0)

int32_t edx_1 = ecx - arg8
int32_t edi_1 = edi - arg6
int32_t ebx_1 = ebx - arg7
int32_t esi_1 = esi - arg9
int32_t esi_2 = *((arg2 + (arg3 << 3)) * 0x374 + 0x1b1bf00)
int32_t edx_6 =
    *((arg2 + (arg3 << 3)) * 0x374 + 0x1b1bf04) + *((arg2 + (arg3 << 3)) * 0x374 + 0x1b1befc)
int32_t eax_3
int32_t esi_5

if (*((arg2 + (arg3 << 3)) * 0x374 + 0x1b1bef8) != 0)
    esi_5 = *((arg2 + (arg3 << 3)) * 0x374 + 0x1b1bf94)
    eax_3 = *((arg2 + (arg3 << 3)) * 0x374 + 0x1b1bf88)
else
    esi_5 = *((arg2 + (arg3 << 3)) * 0x374 + 0x1b1bf90)
        + *((arg2 + (arg3 << 3)) * 0x374 + 0x1b1bf88) + *((arg2 + (arg3 << 3)) * 0x374 + 0x1b1bf84)
    eax_3 = *((arg2 + (arg3 << 3)) * 0x374 + 0x1b1bf8c)

int32_t esi_6 = esi_5 + ecx
int32_t ecx_2 = esi_2 + edx_6
int32_t eax_5 = arg4 + ebx_1 + edi_1

if (eax_5 s< ecx_2)
    eax_5 = ecx_2

arg8 = eax_5
int32_t eax_7
int32_t edx_7
edx_7:eax_7 = sx.q(eax_5 - edx_6)
int32_t temp0 = divs.dp.d(edx_7:eax_7, esi_2)
int32_t temp1 = mods.dp.d(edx_7:eax_7, esi_2)
arg9 = temp0

if (temp1 != 0)
    arg8 += esi_2 - temp1
    arg9 = temp0 + 1

int32_t ecx_6 = eax_3 + esi_6
int32_t eax_11 = arg5 + edx_1 + esi_1

if (eax_11 s< ecx_6)
    eax_11 = ecx_6

int32_t eax_13
int32_t edx_9
edx_9:eax_13 = sx.q(eax_11 - esi_6)
int32_t temp1_1 = mods.dp.d(edx_9:eax_13, eax_3)
int32_t esi_7 = divs.dp.d(edx_9:eax_13, eax_3)
int32_t edx_12

if (temp1_1 == 0)
    edx_12 = eax_11
else
    esi_7 += 1
    edx_12 = eax_11 + eax_3 - temp1_1

*arg10 = edi_1
*arg11 = ebx_1
*arg12 = edx_1
*arg13 = esi_1
*arg14 = arg9
*arg15 = esi_7
*arg16 = arg8
*arg17 = edx_12
return arg17
