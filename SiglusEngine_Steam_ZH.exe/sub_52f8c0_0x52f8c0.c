// 函数: sub_52f8c0
// 地址: 0x52f8c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
int32_t var_c = arg1
int32_t esi = arg1
int32_t* eax_3

if (arg2 u> 0x110)
    if (arg2 == 0x111)
        int32_t var_1c_3 = arg1
        
        if (sub_5300b0(arg1, arg3.w) == 0)
            return 0
        
        eax_3 = ebp[4]
    else if (arg2 != 0x20a)
    label_52f9dc:
        
        if (arg2 != 6 || arg3.w != 0)
            eax_3 = ebp[4]
        else
            sub_681b70(esi)
            eax_3 = ebp[4]
    else
        int32_t var_1c_2 = arg1
        
        if (sub_5302d0(arg1, arg3) == 0)
            return 0
        
        eax_3 = ebp[4]
else if (arg2 == 0x110)
    if (sub_52fa20(arg1) == 0)
        return 0
    
    eax_3 = ebp[4]
else if (arg2 == 6)
    if (arg3.w != 0)
        eax_3 = ebp[4]
    else
        LRESULT hWnd = *(esi + 0xc0)
        
        if (hWnd == 0)
            if (hWnd s< (*(esi + 0x314) - *(esi + 0x310)) s>> 2)
                goto label_52f982
            
            sub_681b70(esi)
            eax_3 = ebp[4]
        else
            hWnd = SendMessageW(hWnd, 0x130b, 0, 0)
            
            if (hWnd s< 0 || hWnd s>= (*(esi + 0x314) - *(esi + 0x310)) s>> 2)
                sub_681b70(esi)
                eax_3 = ebp[4]
            else
            label_52f982:
                sub_681b70(*(*(esi + 0x310) + (hWnd << 2)))
                sub_681b70(esi)
                sub_681b70(esi)
                eax_3 = ebp[4]
else if (arg2 == 0x10)
    char eax_4
    eax_4, ebp, esi = sub_52ff70(arg1, esi, arg2)
    
    if (eax_4 == 0)
        *ebp
        return 0
    
    eax_3 = ebp[4]
else
    if (arg2 != 0x4e)
        goto label_52f9dc
    
    eax_3 = arg4
    
    if (*arg4 == *(esi + 0xc0) && eax_3[2] == 0xfffffdd9)
        sub_530900(arg1)
        eax_3 = ebp[4]

LRESULT result = sub_6c4530(esi, arg2, arg3, eax_3)
*ebp
return result
