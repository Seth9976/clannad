// 函数: sub_579fa0
// 地址: 0x579fa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == arg2)
    return arg4

int32_t* esi = arg4

do
    if (esi != 0)
        *esi = *arg3
        esi[1] = 0
        int32_t eax_1 = arg3[1]
        arg3[1] = 0
        esi[1] = eax_1
        *arg3 = 0
    
    arg3 = &arg3[2]
    esi = &esi[2]
while (arg3 != arg2)

return esi
