// 函数: sub_70c630
// 地址: 0x70c630
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg1[4]

if (arg2 == 0)
    if (result u> 0xffffffff)
        return 0xffffffff
    
    return result

if (arg2 u<= result)
    int32_t* eax = result - arg2
    
    if (eax u> 0xffffffff)
        eax = 0xffffffff
    
    int32_t* ecx
    
    if (arg1[5] u< 0x10)
        ecx = arg1
    else
        ecx = *arg1
    
    int32_t* esi_1 = ecx + eax
    void** edi_1 = arg1
    
    while (true)
        if (*esi_1 == 0x40 && sub_6701a0(eax, 0xb08810, esi_1, arg2) == 0)
            if (edi_1[5] u>= 0x10)
                edi_1 = *edi_1
            
            return esi_1 - edi_1
        
        eax = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
            edi_1)
        
        if (esi_1 == eax)
            break
        
        esi_1 -= 1

return 0xffffffff
