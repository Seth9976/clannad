// 函数: sub_43924a
// 地址: 0x43924a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *(arg2 + 0x10)
int32_t edi
int32_t var_10 = edi

if ((esi & 0x200) != 0)
    sub_437571(arg1, arg3, 1)

if (arg3 != 0 && *(arg3 + 4) == 9 && *(arg3 + 0x10) == 2)
    if ((0xc00 & esi) == 0)
        esi |= *(arg1[1] + 0x38)
    
    if ((0xc00 & esi) == 0)
        char ebx_1 = (*arg1).b
        
        if ((ebx_1 & 8) != 0)
            esi |= 0x400
        else if ((ebx_1 & 0x10) != 0)
            esi |= 0x800
    
    if ((0x400 & esi) != 0)
        *(arg3 + 0x20) = (*(arg3 + 0x20) & 0xfffff7ff) | 0x400
    
    if ((0x800 & esi) != 0)
        *(arg3 + 0x20) = (*(arg3 + 0x20) & 0xfffffbff) | 0x800
else if ((esi & 0xc00) != 0)
    sub_43713d(arg1, &arg1[8], 0xc05, 
        "non-matrix types cannot be declared 'row_major' or 'column_major'")
    return 0x80004005

return 0
