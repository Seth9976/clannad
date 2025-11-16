// 函数: sub_5c4cb0
// 地址: 0x5c4cb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__builtin_memset(&data_4ecd184, 0, 0x28)
data_4ecd180 = 0x2c

if (InitializeCriticalSectionAndSpinCount(&data_4ecd184, 0) == 0)
    enum WIN32_ERROR eax_1 = GetLastError()
    bool cond:0_1 = eax_1 s>= NO_ERROR
    
    if (eax_1 s> NO_ERROR)
        cond:0_1 = (zx.d(eax_1.w) | 0x80070000) s>= 0
    
    if (not(cond:0_1))
        data_bac3fd = 1
        data_4ecd180 = 0

return &data_4ecd180
