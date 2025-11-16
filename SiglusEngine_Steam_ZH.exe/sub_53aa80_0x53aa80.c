// 函数: sub_53aa80
// 地址: 0x53aa80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (zx.d(arg2) - 0x3fd u<= 0x1d)
    switch (arg2)
        case 0x3fd
            LRESULT hWnd_3 = *(*(arg1 + 4) + 4)
            
            if (hWnd_3 != 0)
                SendMessageW(hWnd_3, 0x10, 0, 0)
            
            hWnd_3.b = 1
            return hWnd_3
        case 0x3fe
            sub_53ad30()
            int32_t eax_3
            eax_3.b = 1
            return eax_3
        case 0x418
            LRESULT hWnd_1 = *(arg1 + 0x380)
            
            if (hWnd_1 != 0)
                hWnd_1 = SendMessageW(hWnd_1, 0xf0, 0, 0)
            
            hWnd_1.b &= 1
            *(data_bac4e4 + 0x155) = hWnd_1.b
            hWnd_1.b = 1
            return hWnd_1
        case 0x419
            LRESULT hWnd_2 = *(arg1 + 0x410)
            
            if (hWnd_2 != 0)
                hWnd_2 = SendMessageW(hWnd_2, 0xf0, 0, 0)
            
            hWnd_2.b &= 1
            *(data_bac4e4 + 0x156) = hWnd_2.b
            hWnd_2.b = 1
            return hWnd_2
        case 0x41a
            LRESULT hWnd = *(arg1 + 0x2f0)
            
            if (hWnd != 0)
                hWnd = SendMessageW(hWnd, 0xf0, 0, 0)
            
            hWnd.b &= 1
            *(data_bac4e4 + 0x154) = hWnd.b
            hWnd.b = 1
            return hWnd

uint32_t eax_2
eax_2.b = 0
return eax_2
