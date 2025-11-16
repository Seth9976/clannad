// 函数: sub_679f70
// 地址: 0x679f70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (zx.d(arg2) - 0x3f2 u<= 0x41)
    switch (arg2)
        case 0x3f2
            LRESULT hWnd_2 = *(*(arg1 + 4) + 4)
            
            if (hWnd_2 != 0)
                SendMessageW(hWnd_2, 0x10, 0, 0)
            
            hWnd_2.b = 1
            return hWnd_2
        case 0x408
            data_bac504
            LRESULT eax_3 = sub_6a53f0()
            LRESULT edi = eax_3
            
            if (edi s>= 0 && edi s< *(data_bac510 + 0x10b88))
                *(arg1 + 0x6d8)
                eax_3 = divs.dp.d(sx.q(eax_3), *(arg1 + 0x6d8))
                
                if (eax_3 s>= 0 && eax_3 s< *(arg1 + 0x6d4))
                    sub_6c3c50(arg1 + 0x20, eax_3)
                    sub_67a890(arg1)
                    sub_67acd0(arg1)
                    WPARAM edi_1 = edi - *(arg1 + 0x6e4)
                    void* var_10_2 = arg1
                    int32_t var_10_3 = sub_6c4b00(arg1 + 0xb8, edi_1)
                    sub_6c4ba0(arg1 + 0xb8, edi_1)
                    sub_6c4d40(arg1 + 0xb8, edi_1)
            
            eax_3.b = 1
            return eax_3
        case 0x40b
            sub_67b030(arg1)
            WPARAM eax_5
            eax_5.b = 1
            return eax_5
        case 0x415
            LRESULT hWnd_1 = *(arg1 + 0x488)
            
            if (hWnd_1 != 0)
                hWnd_1 = SendMessageW(hWnd_1, 0xf0, 0, 0)
            
            hWnd_1.b &= 1
            *(data_bac4e4 + 0x19c) = hWnd_1.b
            hWnd_1.b = 1
            return hWnd_1
        case 0x433
            LRESULT hWnd = *(arg1 + 0x3f4)
            
            if (hWnd != 0)
                hWnd = SendMessageW(hWnd, 0xf0, 0, 0)
            
            hWnd.b &= 1
            *(data_bac4e4 + 0x19b) = hWnd.b
            hWnd.b = 1
            return hWnd

uint32_t eax_2
eax_2.b = 0
return eax_2
