// 函数: sub_53c1f0
// 地址: 0x53c1f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (zx.d(arg2) - 0x401 u<= 0x8c)
    switch (arg2)
        case 0x401
            *(arg1 + 0x1c) = 0
        label_53c23e:
            LRESULT hWnd = *(*(arg1 + 4) + 4)
            
            if (hWnd != 0)
                SendMessageW(hWnd, 0x10, 0, 0)
            
            hWnd.b = 1
            return hWnd
        case 0x402, 0x403
            goto label_53c23e
        case 0x48c
            *(data_bac434 + 0x10) = 0
            void* eax_3
            eax_3.b = 1
            return eax_3
        case 0x48d
            *(data_bac434 + 0x10) = 1
            void* eax_4
            eax_4.b = 1
            return eax_4

uint32_t eax_2
eax_2.b = 0
return eax_2
