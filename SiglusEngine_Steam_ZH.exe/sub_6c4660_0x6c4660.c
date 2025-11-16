// 函数: sub_6c4660
// 地址: 0x6c4660
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax

if (*(arg1 + 0x80) != *(arg1 + 0x84))
    eax = *(arg1 + 0x8c)
    
    if (eax != 0)
    label_6c4684:
        int32_t ecx_1
        ecx_1.b = *(eax + 0x50) == 0
        HCURSOR hCursor = LoadCursorW(nullptr, ecx_1 + 0x7f84)
        
        if (hCursor != GetCursor())
            SetCursor(hCursor)
        
        HCURSOR eax_1
        eax_1.b = 0
        return eax_1
    
    eax = sub_6c79a0(arg1 + 0x80, *(arg1 + 4))
    
    if (eax != 0)
        goto label_6c4684

eax.b = 1
return eax
