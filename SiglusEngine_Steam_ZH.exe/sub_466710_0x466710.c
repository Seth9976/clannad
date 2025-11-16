// 函数: sub_466710
// 地址: 0x466710
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *arg1

if (arg2 s>= 0)
    if (*(esi + 0x68) s< arg2)
        return arg2
    
    return (*(esi + 8))(arg1)

int32_t eax_1 = *(esi + 0x6c)

if (eax_1 == 0 || *(esi + 0x68) s>= 3)
    eax_1 = (*(esi + 8))(arg1)

*(esi + 0x6c) += 1
return eax_1
