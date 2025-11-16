// 函数: sub_530990
// 地址: 0x530990
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 0x310)

if (result != *(arg1 + 0x314))
    result = *(arg1 + 0x314) - *(arg1 + 0x310)
    int32_t edi_1 = 0
    
    if ((result & 0xfffffffc) s> 0)
        do
            void* eax_2 = *(*(arg1 + 0x310) + (edi_1 << 2))
            
            if (eax_2 != arg2)
                HWND hWnd = *(eax_2 + 4)
                
                if (hWnd != 0)
                    SendMessageW(hWnd, 0x10, 0, 0)
            
            edi_1 += 1
            result = (*(arg1 + 0x314) - *(arg1 + 0x310)) s>> 2
        while (edi_1 s< result)

return result
