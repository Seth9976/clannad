// 函数: sub_476cd0
// 地址: 0x476cd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s>= 0 && arg3 s< data_7031bc)
    arg1 = arg2 + (arg3 << 1)
    int32_t* esi_1 = *(arg1 * 0x7a0 + 0x98c180)
    
    if (esi_1 != 0)
        int32_t i_2 = *(arg1 * 0x7a0 + &data_98c178)
        
        if (i_2 s<= 0)
            return arg1
        
        int32_t i_1 = i_2
        int32_t* eax_2
        int32_t i
        
        do
            int32_t edx
            
            if (*(arg3 * 0x24 + &data_12b9280) != 0 || arg4 != 0)
                sub_476bb0(esi_1)
                sub_476870(esi_1)
                edx = 1
            else
                sub_476bb0(esi_1)
                sub_476870(esi_1)
                edx = 0
            
            eax_2 = sub_4769d0(esi_1, edx)
            esi_1 = &esi_1[0x1f6]
            i = i_1
            i_1 -= 1
        while (i != 1)
        return eax_2

return sub_476410(arg1, arg2, arg3, 0)
