// 函数: sub_4782d0
// 地址: 0x4782d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

enum MESSAGEBOX_RESULT eax

if (arg1 s>= 0 && arg1 s< data_7031bc)
    eax = *((arg2 + (arg1 << 1)) * 0x7a0 + 0x98c180)

if (arg1 s< 0 || arg1 s>= data_7031bc || eax == 0)
    sub_476410(eax, arg2, arg1, 0)
else
    int32_t esi_3 = *((arg2 + (arg1 << 1)) * 0x7a0 + &data_98c178)
    int32_t ecx = 0
    
    if (esi_3 s> 0)
        int32_t* eax_2 = eax + 0x3cc
        
        do
            if (eax_2[-0x8f] == 1)
                int32_t edx = *eax_2
                
                if (edx == 4 || edx == 8)
                    return 1
            
            ecx += 1
            eax_2 = &eax_2[0x1f6]
        while (ecx s< esi_3)

return 0
