// 函数: sub_482a91
// 地址: 0x482a91
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x40)
int32_t edi
int32_t var_c = edi

if (eax == 0)
    sub_482812(arg1)
    
    if (*(arg1 + 0x4c) == 0)
        int32_t* eax_3 = sub_745f3f(0x10)
        
        if (eax_3 == 0)
            eax_3 = nullptr
        else
            *eax_3 = 0
            eax_3[1] = 0
            eax_3[2] = 0xfa
            eax_3[3] = 0
        
        *(arg1 + 0x4c) = eax_3
        
        if (eax_3 == 0)
            return 0x8007000e
    
    sub_4822e8(*(arg1 + 0x4c), &arg2)
else if (eax == 1)
    void* var_10_1 = arg1
    sub_482282(arg1, fconvert.s(fconvert.t(arg2)))

return 0
