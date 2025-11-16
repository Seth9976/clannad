// 函数: sub_460ab8
// 地址: 0x460ab8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || arg2 == 0)
    return 0x88760385

void*** eax = sub_745f3f(0x18)
void*** esi_1

if (eax == 0)
    esi_1 = nullptr
else
    esi_1 = sub_48375e(eax, arg1, arg2, 0)

if (esi_1 != 0)
    void*** eax_2 = sub_745f3f(0x30)
    void*** eax_3
    
    if (eax_2 == 0)
        eax_3 = nullptr
    else
        eax_3 = sub_460951(eax_2, arg3, esi_1)
    
    *arg4 = eax_3
    
    if (eax_3 != 0)
        return 0
    
    (**esi_1)(1)

return 0x8007000e
