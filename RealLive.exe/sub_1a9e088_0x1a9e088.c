// 函数: sub_1a9e088
// 地址: 0x1a9e088
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t ebx = 0

if (data_1c078c8 == 0)
    if (arg1 s>= 0x61 && arg1 s<= 0x7a)
        return arg1 - 0x20
    
    return arg1

int32_t ecx_1 = InterlockedIncrement(0x1c08eb4)

if (data_1c08ea4 != 0)
    InterlockedDecrement(0x1c08eb4)
    sub_1a976dc(0x13)
    ecx_1 = 0x13
    ebx = 1

uint32_t var_10_1 = arg1
uint32_t eax_2 = sub_1a9e0f7(ecx_1)

if (ebx == 0)
    InterlockedDecrement(0x1c08eb4)
else
    __unlock(0x13)

return eax_2
