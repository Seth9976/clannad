// 函数: sub_4c5a70
// 地址: 0x4c5a70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
int32_t ecx = data_1c04200
int32_t edx = data_1c041fc
uint32_t result = ecx - 0x10

if (result u<= 0x20)
    int32_t edi_1 = arg7
    result = edi_1 - 0x8140
    bool cond:0_1
    
    if (result u> 0x296)
        cond:0_1 = edi_1 u>= 0x80
    else
        edi_1 -= 0x80c0
        cond:0_1 = edi_1 u>= 0x336
    
    if (not(cond:0_1))
        int32_t edi_2 = edi_1 << 6
        void* edi_3
        
        if (edx s> 0)
            edi_3 = edi_2 + &data_20a1bc0
        else
            edi_3 = edi_2 + &data_20a1ba0
            edx = 0
        
        if (*edi_3 != 0 && *(edi_3 + 0x18) == ecx)
            result = zx.d(*(edi_3 + 0x1c))
        
        if (*edi_3 == 0 || *(edi_3 + 0x18) != ecx || result != edx)
            *(edi_3 + 0x10) = arg5
            *(edi_3 + 0x14) = arg6
            char eax_2 = (data_1c041f8).b
            *(edi_3 + 0x18) = ecx
            *(edi_3 + 0x1c) = edx.b
            *(edi_3 + 8) = arg2
            *(edi_3 + 0xc) = arg4
            *(edi_3 + 0x1d) = eax_2
            sub_4d6d20(edi_3, edi_3 + 4)
            void* dwBytes = arg2 * arg4
            HGLOBAL hMem = GlobalAlloc(GHND, dwBytes)
            *edi_3 = hMem
            
            if (hMem == 0)
                sub_4d6cc0(dwBytes, "FontKeep")
            else
                *(edi_3 + 4) = GlobalLock(hMem)
            
            result = *(edi_3 + 4)
            
            if (result != 0)
                return sub_5f6260(result, arg3, dwBytes)

return result
