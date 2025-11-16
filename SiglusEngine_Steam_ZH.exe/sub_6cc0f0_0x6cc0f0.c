// 函数: sub_6cc0f0
// 地址: 0x6cc0f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
uint32_t ebx = zx.d(*(arg2 + 0x4a))

if ((ebx & 0x8000) != 0)
    return 0

if (arg6 s< 2 && (ebx.b & 2) != 0)
    if (sub_6cc020(arg1, arg2 + 4, arg4, 0x64) == 0)
        *(arg2 + 0x4a) = ebx.w | 0x8000
        sub_6d4650(arg3)
        return 0
    
    if (arg6 == 0)
        return arg6 + 1

int16_t ebx_2 = ebx.w | 2
int128_t xmm0 = *arg4
*(arg2 + 0x4a) = ebx_2
*(arg2 + 4) = xmm0
*(arg2 + 0x14) = *(arg4 + 0x10)
*(arg2 + 0x24) = *arg5
int32_t eax_5 = arg5[2].d
*(arg2 + 0x34) = arg5[1]
*(arg2 + 0x44) = eax_5

if (sub_6cc020(eax_5, &data_adb2e0, arg4, 0x3e8) == 0)
    *(arg2 + 0x4a) = ebx_2 & 0xffbf
    return 2

*(arg2 + 0x4a) = ebx_2 | 0x40
return 2
