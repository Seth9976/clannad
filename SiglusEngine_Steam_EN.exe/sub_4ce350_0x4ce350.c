// 函数: sub_4ce350
// 地址: 0x4ce350
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi_1 = arg4 s>> 2

if (edi_1 != 0)
    if (arg3 u>= arg5)
        arg1 = arg6
    
    int32_t eax
    int32_t ebx_1
    
    if (arg3 u< arg5 || arg3 u>= arg1)
        ebx_1 = 0
    else
        arg1 = sub_4ce0e0(arg1, arg5, arg3, arg1)
        ebx_1 = sx.d(*arg3)
        
        if (arg1 != 0)
            eax = sub_4ce140(arg1, edi_1, arg2, edi_1, arg7, arg8, arg1, ebx_1, 0xffffffff)
            
            if (eax != 0xffffffff)
                return arg2 - eax * 2
            
            arg1 = sub_4ce140(eax, edi_1, arg2, edi_1, arg7, arg8, arg1, ebx_1, 1)
            
            if (arg1 != 0xffffffff)
                return &arg2[arg1]
    
    eax = sub_4ce140(arg1, edi_1, arg2, edi_1, arg7, arg8, 0, ebx_1, 0xffffffff)
    
    if (eax != 0xffffffff)
        return arg2 - eax * 2
    
    int32_t eax_4 = sub_4ce140(eax, edi_1, arg2, edi_1, arg7, arg8, 0, ebx_1, 1)
    
    if (eax_4 != 0xffffffff)
        return &arg2[eax_4]

return arg2
