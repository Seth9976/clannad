// 函数: sub_4c1f20
// 地址: 0x4c1f20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2
void* ecx = *(arg1 + 4)
HGLOBAL hMem
int32_t edi_2

if (*(ecx + 0x3a0) != 0)
label_4c1f5e:
    edi_2 = esi
    esi = 0
label_4c1f65:
    
    if (edi_2 != 0)
        if (*(ecx + 0x39c) == 0)
            hMem = GlobalAlloc(GHND, edi_2 + 0x1000)
            
            if (hMem != 0)
                int32_t eax_1 = GlobalLock(hMem)
                int32_t var_20_4 = edi_2
                sub_4c1e40(sub_4ccfe0(*(arg1 + 4)), eax_1, arg1, edi_2)
                GlobalUnlock(hMem)
                hMem = GlobalFree(hMem)
        else
            sub_4cc800(hMem, arg2, ecx, edi_2)
            *(arg1 + 0x10) += edi_2
            hMem = *(arg1 + 0x10)
            int32_t ecx_1 = *(arg1 + 0xc)
            
            if (hMem s>= ecx_1)
                do
                    hMem -= ecx_1
                while (hMem s>= ecx_1)
                
                *(arg1 + 0x10) = hMem
else
    edi_2 = *(ecx + 0x388) - *(ecx + 0x3a4)
    
    if (*(ecx + 0x2e) == 0x10)
        edi_2 *= 2
    
    if (edi_2 s> 0)
        if (edi_2 s>= esi)
            goto label_4c1f5e
        
        esi -= edi_2
        goto label_4c1f65

if (*(arg1 + 0x14) == 0)
    void* ecx_4 = *(arg1 + 4)
    
    if (*(ecx_4 + 0x3a0) == 0)
        hMem = *(ecx_4 + 0x3a4)
        
        if (hMem s>= *(ecx_4 + 0x388))
            hMem = *(arg1 + 0x10)
            *(arg1 + 0x18) = hMem
            *(arg1 + 0x14) = 1

if (esi != 0)
    sub_4c1e40(hMem, 0, arg1, esi)
