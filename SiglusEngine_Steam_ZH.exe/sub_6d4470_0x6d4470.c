// 函数: sub_6d4470
// 地址: 0x6d4470
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax = nullptr

if (arg1 != 0)
    if (*arg2 == 0x23)
        eax = 1
        
        while (*(eax + arg2) != 0x20)
            if (*(eax + arg2 + 1) == 0x20)
                eax = &eax[1]
                break
            
            eax = &eax[2]
            
            if (eax s>= 0xf)
                break
    
    int32_t ecx = *(arg1 + 0x50)
    
    if (ecx != 0)
        return ecx(arg1, eax + arg2)

int32_t var_8_1 = eax + arg2
_fprintf(&data_b4c230, "libpng warning: %s")
return _fprintf(&data_b4c230, U"\n")
