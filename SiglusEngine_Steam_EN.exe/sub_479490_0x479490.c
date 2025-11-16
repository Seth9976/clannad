// 函数: sub_479490
// 地址: 0x479490
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s>= 0 && arg3 s< data_7031bc)
    enum MESSAGEBOX_RESULT edx = arg4
    arg1 = arg2 + (arg3 << 1)
    enum MESSAGEBOX_RESULT esi_1 = arg5
    void* edi_2 = arg1 * 0x7a0 + &data_98c178
    
    if (edx s> esi_1)
        arg1 = edx
        edx = esi_1
        esi_1 = arg1
    
    if (*(edi_2 + 8) != 0)
        arg1 = *edi_2
        
        if (arg1 s> 0 && edx s>= 0 && esi_1 s< arg1)
            int32_t i_1 = esi_1 - edx + 1
            
            if (i_1 s<= 0)
                return arg1
            
            void* edx_3 = edx * 0x7d8 + 0x3cc + *(edi_2 + 8)
            int32_t eax_1
            int32_t i
            
            do
                eax_1 = sub_468560(edx_3 - 0xfc, edx_3, *(edx_3 - 0x23c), edx_3 - 0xfc, arg6)
                edx_3 += 0x7d8
                i = i_1
                i_1 -= 1
            while (i != 1)
            return eax_1

return sub_476410(arg1, arg2, arg3, 0)
