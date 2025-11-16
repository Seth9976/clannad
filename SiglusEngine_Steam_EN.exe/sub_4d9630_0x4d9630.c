// 函数: sub_4d9630
// 地址: 0x4d9630
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

__builtin_memset(&data_20f3494, 0, 0x28)
data_20f3490 = 0x2c

if (InitializeCriticalSectionAndSpinCount(&data_20f3494, 0) == 0)
    enum WIN32_ERROR eax_1 = GetLastError()
    bool cond:0_1 = eax_1 s>= NO_ERROR
    
    if (eax_1 s> NO_ERROR)
        cond:0_1 = (zx.d(eax_1.w) | 0x80070000) s>= 0
    
    if (not(cond:0_1))
        data_20f33fd = 1
        data_20f3490 = 0

return &data_20f3490
