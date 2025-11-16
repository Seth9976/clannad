// 函数: sub_6c0020
// 地址: 0x6c0020
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int128_t* hWnd = *(arg1 + 4)

if (hWnd != 0)
    int32_t* edx_1 = arg4
    
    if (arg2 u> 0x112)
        if (arg2 == 0x214)
            if (sub_6c0370(arg1, arg3, edx_1) == 0)
                return 0
            
            goto label_6c0055
        
        if (arg2 != 0x216 || *(arg1 + 0x59) == (arg2 - 0x214).b - 2)
            goto label_6c005b
        
        int32_t* var_14_3 = edx_1
        sub_6c0570(arg1, hWnd)
    label_6c0055:
        edx_1 = arg4
    label_6c005b:
        
        if (*(arg1 + 0x20) != 0)
            int32_t* var_14_2 = edx_1
            WPARAM var_18_1 = arg3
            return sub_6c0061(arg1) __tailcall
        
        if (GetWindowLongW(*(arg1 + 4), 0x4) == 0)
            return DefWindowProcW(*(arg1 + 4), arg2, arg3, arg4)
    else
        if (arg2 == 0x112)
            if ((arg3 & 0xf010) != 0)
                data_4ebe440 = 0
            
            goto label_6c005b
        
        if (arg2 != 2)
            if (arg2 != 0x10)
                goto label_6c005b
            
            DestroyWindow(hWnd)
            goto label_6c0055
        
        if (sub_6c0250(arg1) != 0)
            goto label_6c0055

return 0
