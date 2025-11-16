// 函数: sub_4d4a10
// 地址: 0x4d4a10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_4cfd70(&data_20c02e0, 0x1bfdb18)
void* ecx = &data_20c02e0

while (true)
    char eax_1 = *ecx
    
    if (eax_1 u>= 0x80 && (eax_1 u< 0xa0 || eax_1 u> 0xdf) && eax_1 u< 0xfe)
        ecx += 2
        continue
    
    if (eax_1 == 0)
        break
    
    if (eax_1 u>= 0x61 && eax_1 u<= 0x7a)
        *ecx = eax_1 - 0x20
    
    ecx += 1

data_20c04e8 = lstrlenA(&data_20c02e0)

if (arg2 != 0)
    *arg2 = 0

data_20c02a8 = 0
data_20c02d8 = 0
EnumWindows(sub_4d48d0, 0)

if (data_20c02a8 != 1)
    return 1

data_20c04ec = GetWindowLongA(data_20c02d8, 0xfffffffa)
data_20c04f0 = 0
data_20c04f4 = 0
EnumWindows(sub_4d49c0, 0)

if (data_20c04f0 != 1)
    SetForegroundWindow(data_20c02d8)
    
    if (arg2 != 0)
        *arg2 = data_20c02d8
    
    return 0

SetForegroundWindow(data_20c04f4)

if (arg2 != 0)
    *arg2 = data_20c04f4

return 0
