// 函数: sub_4e08a0
// 地址: 0x4e08a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

__builtin_memset(&data_1cd4520, 0, 0x24)
data_20f33f8 = &data_1cd451c
data_1cd4544 = 0

if (InitializeCriticalSectionAndSpinCount(&data_1cd452c, 0) == 0)
    enum WIN32_ERROR eax_1 = GetLastError()
    bool cond:0_1 = eax_1 s>= NO_ERROR
    
    if (eax_1 s> NO_ERROR)
        cond:0_1 = (zx.d(eax_1.w) | 0x80070000) s>= 0
    
    if (not(cond:0_1))
        data_20f33fd = 1
        return &data_1cd451c

data_1cd4520 = 0x24
return &data_1cd451c
