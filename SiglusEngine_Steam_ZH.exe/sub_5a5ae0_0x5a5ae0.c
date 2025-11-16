// 函数: sub_5a5ae0
// 地址: 0x5a5ae0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
uint32_t eax_1

if (zx.d(arg2.w) - 0x409 u<= 0x2b)
    switch (arg2.w)
        case 0x409
            *(data_bac4a0 + 0x1ea) = 1
        label_5a5b31:
            eax_1 = *(arg1 + 0x444)
            
            if (eax_1 != 0)
                SetFocus(*(eax_1 + 0x64))
                HWND eax_2
                eax_2.b = 1
                return eax_2
        case 0x413
            LRESULT hWnd = *(arg1 + 0xbc)
            
            if (hWnd != 0)
                hWnd = SendMessageW(hWnd, 0xf0, 0, 0)
            
            hWnd.b &= 1
            *(data_bac4a0 + 0x1e9) = hWnd.b
            goto label_5a5b31
        case 0x414, 0x42d
            goto label_5a5b31
        case 0x434
            uint32_t ecx_3 = arg2 u>> 0x10
            
            if (ecx_3 == 1)
                sub_5a6710(arg1, *((sub_6c3410(arg1 + 0x268) << 2) + &data_ada7a0))
                sub_5a67c0(arg1)
            else if (ecx_3 == 8)
                sub_5a67c0(arg1)
                HWND eax_4
                eax_4.b = 1
                return eax_4

eax_1.b = 1
return eax_1
