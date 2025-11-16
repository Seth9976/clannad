// 函数: sub_4d9530
// 地址: 0x4d9530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_20f3460 = 0
__builtin_memset(&data_20f3470, 0, 0x18)
data_20f3464 = &__dos_header
data_20f3468 = 0x62ac7c
data_20f346c = 0x62ac7c

if (InitializeCriticalSectionAndSpinCount(&data_20f3470, 0) == 0)
    enum WIN32_ERROR eax_1 = GetLastError()
    bool cond:0_1 = eax_1 s>= NO_ERROR
    
    if (eax_1 s> NO_ERROR)
        cond:0_1 = (zx.d(eax_1.w) | 0x80070000) s>= 0
    
    if (not(cond:0_1))
        data_20f33fd = 1
        return &data_20f3460

data_20f3460 = 0x28
return &data_20f3460
