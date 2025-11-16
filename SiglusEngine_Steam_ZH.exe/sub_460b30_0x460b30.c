// 函数: sub_460b30
// 地址: 0x460b30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HRSRC eax = FindResourceA(arg1, arg2, arg3)

if (eax == 0)
    return 0x8876038a

HGLOBAL hResData = LoadResource(arg1, eax)

if (hResData == 0)
    return 0x8876038b

int32_t edi
int32_t var_10_2 = edi
int32_t eax_1 = LockResource(hResData)
uint32_t eax_2 = SizeofResource(arg1, eax)
int32_t result

if (eax_1 == 0 || eax_2 == 0)
    FreeResource(eax)
    result = 0x8876038b
else
    void*** eax_3 = sub_745f3f(0x1c)
    void*** esi_2
    
    if (eax_3 == 0)
        esi_2 = nullptr
    else
        esi_2 = sub_4837b1(eax_3, hResData, eax_1, eax_2)
    
    if (esi_2 != 0)
        void*** eax_5 = sub_745f3f(0x30)
        void*** eax_6
        
        if (eax_5 == 0)
            eax_6 = nullptr
        else
            eax_6 = sub_460951(eax_5, arg4, esi_2)
        
        *arg5 = eax_6
        
        if (eax_6 != 0)
            result = 0
        else
            (**esi_2)(1)
            result = 0x8007000e
    else
        FreeResource(eax)
        result = 0x8007000e

return result
