// 函数: sub_6acf60
// 地址: 0x6acf60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi_1 = arg3 s>> 2

if (edi_1 == 0)
    return arg2

int32_t eax_3
int32_t ebx

if (arg1 u< arg4 || arg1 u>= arg5)
    ebx = 0
label_6acfe9:
    eax_3 = sub_6ad030(arg2, edi_1, edi_1, arg6, arg7, 0, ebx, 0xffffffff)
    
    if (eax_3 == 0xffffffff)
        int32_t eax_8 = sub_6ad030(arg2, edi_1, edi_1, arg6, arg7, 0, ebx, 1)
        
        if (eax_8 == 0xffffffff)
            return arg2
        
        return &arg2[eax_8]
else
    int16_t* eax_1 = sub_6ad230(arg1, arg4, arg5)
    ebx = sx.d(*arg1)
    
    if (eax_1 == 0)
        goto label_6acfe9
    
    eax_3 = sub_6ad030(arg2, edi_1, edi_1, arg6, arg7, eax_1, ebx, 0xffffffff)
    
    if (eax_3 == 0xffffffff)
        int32_t eax_4 = sub_6ad030(arg2, edi_1, edi_1, arg6, arg7, eax_1, ebx, 1)
        
        if (eax_4 != 0xffffffff)
            return &arg2[eax_4]
        
        goto label_6acfe9
return arg2 - eax_3 * 2
