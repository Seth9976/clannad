// 函数: sub_5c4bc0
// 地址: 0x5c4bc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

data_4ecd150 = 0
__builtin_memset(&data_4ecd160, 0, 0x18)
data_4ecd154 = &__dos_header
data_4ecd158 = 0xb49708
data_4ecd15c = 0xb49708

if (InitializeCriticalSectionAndSpinCount(&data_4ecd160, 0) == 0)
    enum WIN32_ERROR eax_1 = GetLastError()
    bool cond:0_1 = eax_1 s>= NO_ERROR
    
    if (eax_1 s> NO_ERROR)
        cond:0_1 = (zx.d(eax_1.w) | 0x80070000) s>= 0
    
    if (not(cond:0_1))
        data_bac3fd = 1
        return &data_4ecd150

data_4ecd150 = 0x28
return &data_4ecd150
