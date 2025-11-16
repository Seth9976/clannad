// 函数: sub_6990c0
// 地址: 0x6990c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__builtin_memset(&data_4ebe350, 0, 0x24)
data_bac3f8 = &data_4ebe34c
data_4ebe374 = 0

if (InitializeCriticalSectionAndSpinCount(&data_4ebe35c, 0) == 0)
    enum WIN32_ERROR eax_1 = GetLastError()
    bool cond:0_1 = eax_1 s>= NO_ERROR
    
    if (eax_1 s> NO_ERROR)
        cond:0_1 = (zx.d(eax_1.w) | 0x80070000) s>= 0
    
    if (not(cond:0_1))
        data_bac3fd = 1
        return &data_4ebe34c

data_4ebe350 = 0x24
return &data_4ebe34c
