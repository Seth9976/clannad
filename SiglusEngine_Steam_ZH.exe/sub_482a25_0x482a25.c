// 函数: sub_482a25
// 地址: 0x482a25
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x40)
int32_t edi
int32_t var_c = edi

if (eax == 0)
    sub_4827e1(arg1)
    
    if (*(arg1 + 0x48) == 0)
        int32_t* eax_3 = sub_745f3f(0x10)
        
        if (eax_3 == 0)
            eax_3 = nullptr
        else
            *eax_3 = 0
            eax_3[1] = 0
            eax_3[2] = 0xa
            eax_3[3] = 0
        
        *(arg1 + 0x48) = eax_3
        
        if (eax_3 == 0)
            return 0x8007000e
    
    sub_48647e(*(arg1 + 0x48), &arg2)
else if (eax == 1)
    sub_48222e(arg1, arg2)

return 0
