// 函数: sub_724c60
// 地址: 0x724c60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((*"1.2.8")[0] != 0x31)
    return 0xfffffffa

if (arg1 != 0)
    int32_t eax_2 = *(arg1 + 0x20)
    *(arg1 + 0x18) = 0
    
    if (eax_2 != 0 && *(arg1 + 0x24) != 0)
        void* eax_3 = eax_2(*(arg1 + 0x28), 1, 0x1bcc)
        
        if (eax_3 == 0)
            return eax_3 - 4
        
        *(arg1 + 0x1c) = eax_3
        *(eax_3 + 0x34) = 0
        int32_t result = sub_724bf0(arg1)
        
        if (result != 0)
            (*(arg1 + 0x24))(*(arg1 + 0x28), eax_3)
            *(arg1 + 0x1c) = 0
        
        return result

return 0xfffffffe
