// 函数: sub_4c0c40
// 地址: 0x4c0c40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t esi = arg2[2]
int32_t ebx_1 = esi - *arg2

if (arg4 s> ebx_1)
    ebx_1 = arg4

int32_t edi = arg2[3]

if (arg6 s< ebx_1)
    ebx_1 = arg6

int32_t eax_1 = edi - arg2[1]
int32_t ecx = eax_1

if (arg5 s> ecx)
    ecx = arg5

if (arg7 s< ecx)
    ecx = arg7

if (arg3 - 1 u<= 7)
    switch (arg3)
        case 1
            *arg2 = esi - ebx_1
        case 2
            eax_1 = *arg2 + ebx_1
            arg2[2] = eax_1
        case 3
            arg2[1] = edi - ecx
        case 4
            arg2[1] = edi - ecx
            *arg2 = esi - ebx_1
        case 5
            arg2[1] = edi - ecx
            eax_1 = *arg2 + ebx_1
            arg2[2] = eax_1
        case 6
            int32_t eax_3 = ecx + arg2[1]
            arg2[3] = eax_3
            return eax_3
        case 7
            int32_t eax_5 = ecx + arg2[1]
            *arg2 = esi - ebx_1
            arg2[3] = eax_5
            return eax_5
        case 8
            arg2[2] = *arg2 + ebx_1
            int32_t eax_9 = ecx + arg2[1]
            arg2[3] = eax_9
            return eax_9

return eax_1
