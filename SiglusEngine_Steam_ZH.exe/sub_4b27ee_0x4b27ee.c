// 函数: sub_4b27ee
// 地址: 0x4b27ee
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t eax_1 = (*(*arg1 + 0x54))(*(arg2 + 0x6c))
int32_t eax_3 = (*(*arg1 + 0x58))(*(arg2 + 0x6c))
*arg3 = eax_3

if ((arg1[0x1c].b & 0x40) == 0)
    int32_t edi_2 = 0
    
    if (eax_1 == 0xb)
        if (eax_3 u>= 4)
            return 0x80004005
        
        *arg4 = 8
    else if (eax_1 == 0xd)
        if (eax_3 != 0)
            return 0x80004005
        
        edi_2 = 1
        *arg4 = 9
    else if (eax_1 == 0x11)
        if (eax_3 != 0)
            return 0x80004005
        
        *arg4 = 0x11
        *arg3 = 1
    else if (eax_1 != 0x12)
        if (eax_1 != 0xffff)
            return 0x80004005
        
        *arg4 = 0
        edi_2 = 0
    else
        if (eax_3 != 0)
            return 0x80004005
        
        *arg4 = 0x11
        *arg3 = 0
    
    if (arg5 != 0)
        *arg5 = edi_2
else
    if (arg5 != 0)
        *arg5 = 0
    
    if (eax_1 != 5)
        goto label_4b2838
    
    if (*arg3 != 0 || arg5 == 0)
        *arg4 = 6
        *arg3 = *(arg2 + 0xc)
    else
        *arg5 = 1
    label_4b2838:
        
        if (eax_1 != 0xffff)
            *arg4 = 6
            *arg3 = *(arg2 + 0xc)
        else
            *arg4 = 0

return 0
