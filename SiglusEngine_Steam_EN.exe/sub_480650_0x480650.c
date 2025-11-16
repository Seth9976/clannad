// 函数: sub_480650
// 地址: 0x480650
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg2

if (arg3 s>= 0 && arg3 s< data_7031bc)
    enum MESSAGEBOX_RESULT edi_1 = arg4
    arg1 = arg2 + (arg3 << 1)
    enum MESSAGEBOX_RESULT esi_1 = arg5
    void* ecx_1 = arg1 * 0x7a0 + &data_98c178
    
    if (edi_1 s> esi_1)
        arg1 = edi_1
        edi_1 = esi_1
        esi_1 = arg1
    
    if (*(ecx_1 + 8) != 0)
        arg1 = *ecx_1
        
        if (arg1 s> 0 && edi_1 s>= 0 && esi_1 s< arg1)
            int32_t i_1 = esi_1 - edi_1 + 1
            
            if (i_1 s<= 0)
                return arg1
            
            int32_t i
            
            do
                arg1 = sub_4805e0(arg1, arg2, arg3, edi_1, arg6)
                arg2 = var_8
                edi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
            return arg1

return sub_476410(arg1, arg2, arg3, 0)
