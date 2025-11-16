// 函数: sub_477f90
// 地址: 0x477f90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

enum MESSAGEBOX_RESULT eax

if (arg1 s>= 0 && arg1 s< data_7031bc)
    eax = *((arg2 + (arg1 << 1)) * 0x7a0 + 0x98c180)
    
    if (eax != 0)
        int32_t i_1 = *((arg2 + (arg1 << 1)) * 0x7a0 + &data_98c178)
        
        if (i_1 s<= 0)
            return eax
        
        int32_t* ecx = eax + 0x3cc
        int32_t eax_2
        int32_t i
        
        do
            eax_2 = *ecx
            
            if (eax_2 != 0 && eax_2 != 1 && eax_2 != 2 && eax_2 != 3)
                *ecx = 3
            
            ecx = &ecx[0x1f6]
            i = i_1
            i_1 -= 1
        while (i != 1)
        return eax_2

return sub_476410(eax, arg2, arg1, 0)
