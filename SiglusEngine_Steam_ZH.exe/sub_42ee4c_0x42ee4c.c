// 函数: sub_42ee4c
// 地址: 0x42ee4c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = sub_745f3f(0x70)
int32_t* eax_1

if (eax == 0)
    eax_1 = nullptr
else
    eax_1 = sub_42b95b(eax)

*(arg1 + 0x268) = eax_1

if (eax_1 == 0)
    return 0x8007000e

int32_t result = sub_42bc3e(eax_1, arg2, arg3, arg1, arg1 + 0x18)

if (result s>= 0)
    result = sub_42e2cf(arg1, arg4)
    
    if (result s>= 0)
        *(arg1 + 0x26c) = *(arg1 + 0x268)
        *(arg1 + 0x270) = arg5
        return 0

return result
