// 函数: sub_4a1a60
// 地址: 0x4a1a60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (arg1 != 0xfffffffd)
    BOOL eax
    
    if (arg1 == 0xfffffffe)
        int32_t edi_2 = 0
        
        for (int32_t i = 0x92b978; i s< 0x9331f8; )
            eax = sub_49e720(eax, edi_2 + 0x20, i, arg2)
            i += 0x788
            edi_2 += 1
        
        return 
    
    if (arg1 != 0xffffffff)
        if (arg1 u<= 0xf)
            sub_49e720(eax, arg1 + 0x20, arg1 * 0x788 + 0x92b978, arg2)
        
        return 
else
    int32_t edi_1 = 0x20
    int32_t i_2 = 0x10
    int32_t esi_1 = 0x92b978
    int32_t i_1
    
    do
        sub_4c2f90(edi_1, arg2)
        WaitForSingleObject(data_702788, 0xffffffff)
        BOOL eax_1
        
        if (edi_1 s< 0)
            eax_1, arg1 = ReleaseSemaphore(data_702788, 1, nullptr)
        else
            eax_1, arg1 = sub_4cb9c0(edi_1, arg2)
        
        if (esi_1 != 0)
            arg1 = sub_4d1ba0(sub_4d1ba0(eax_1, 0x24, esi_1, 0), 0x24, esi_1 + 0x28, 0)
            *(esi_1 + 0x24) = 0xffffffff
        
        esi_1 += 0x788
        edi_1 += 1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

sub_4c3010(arg1, arg2)
