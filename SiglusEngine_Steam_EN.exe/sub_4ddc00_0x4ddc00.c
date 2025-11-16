// 函数: sub_4ddc00
// 地址: 0x4ddc00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg2
HWND hWnd

if (edi u> 0x39)
    if (edi u<= 0x115)
        if (edi u>= 0x114)
        label_4ddc94:
            hWnd = arg4
            goto label_4ddc96
        
        if (edi == 0x4e)
            hWnd = *arg4
            goto label_4ddc96
        
        if (edi == 0x111 && arg4 != 0)
            goto label_4ddc94
    else if (edi u>= 0x132)
        if (edi u<= 0x138)
            goto label_4ddc94
        
        if (edi == 0x210)
            void* eax_8 = *(arg1 + 0x18)
            
            if (eax_8 != 0)
                CallWindowProcA(*(arg1 + 0x20), *(arg1 + 4), *(eax_8 + 4), *(eax_8 + 8), 
                    *(eax_8 + 0xc))
            
            if (zx.d(arg3.w) - 1 u<= 1)
                goto label_4ddc94
            
            hWnd = GetDlgItem(*(arg1 + 4), arg3 u>> 0x10)
            goto label_4ddc96
else if (edi == 0x39)
    hWnd = *(arg4 + 8)
label_4ddc96:
    
    if (hWnd != 0)
        char edx_1 = (*(arg1 + 0x98)).b
        
        if ((edx_1 & 8) == 0)
            return SendMessageA(hWnd, edi + 0x2000, arg3, arg4)
        
        arg2 = 0
        
        if ((edx_1 & 1) != 0)
            int32_t* edx_2 = *(arg1 + 0x74)
            
            if (edx_2 != 0)
                if ((*(*edx_2 + 0x24))(edx_2, edi + 0x2000, arg3, arg4, &arg2) s>= 0)
                    return arg2
        
        return 0
else if (edi - 0x2b u<= 4)
    switch (edi)
        case 0x2b
            if (*arg4 != 1)
                hWnd = *(arg4 + 0x14)
                goto label_4ddc96
            
            if (IsWindow(*(arg4 + 0x14)) != 0)
                hWnd = *(arg4 + 0x14)
                goto label_4ddc96
        case 0x2c
            if (*arg4 != 1)
                hWnd = GetDlgItem(*(arg1 + 4), *(arg4 + 4))
                goto label_4ddc96
        case 0x2d
            hWnd = *(arg4 + 0xc)
            goto label_4ddc96
        case 0x2e, 0x2f
            goto label_4ddc94
*arg5 = 0
return 1
