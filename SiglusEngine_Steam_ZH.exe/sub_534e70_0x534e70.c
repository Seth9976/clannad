// 函数: sub_534e70
// 地址: 0x534e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1

if (arg2 != *(arg1 + 0x1d4))
    if (arg2 != *(arg1 + 0x264))
        if (arg2 == *(arg1 + 0x2f4))
            sub_60cbb0()
            sub_535320(arg1)
            int32_t eax_7
            eax_7.b = 1
            return eax_7
        
        if (arg2 != *(arg1 + 0x384))
            int32_t eax
            eax.b = 0
            return eax
        
        sub_6bfea0(*(arg1 + 4))
        LRESULT eax_8
        eax_8.b = 1
        return eax_8
    
    eax_1 = *(arg1 + 0x410)
    
    if (eax_1 s> 0)
        int32_t i = 0
        
        if (eax_1 s> 0)
            void* ebx_2 = data_bac4e4
            int32_t edi_2 = 0
            
            do
                edi_2 += 0x12c
                i += 1
                *(*(ebx_2 + 0x160) + (*(edi_2 + *(arg1 + 0x420) - 0x12c) << 3)) = 0
            while (i s< *(arg1 + 0x410))
        
        sub_535320(arg1)
        int32_t eax_6
        eax_6.b = 1
        return eax_6
else
    eax_1 = *(arg1 + 0x410)
    
    if (eax_1 s> 0)
        int32_t i_1 = 0
        
        if (eax_1 s> 0)
            void* ebx_1 = data_bac4e4
            int32_t edi_1 = 0
            
            do
                edi_1 += 0x12c
                i_1 += 1
                *(*(ebx_1 + 0x160) + (*(edi_1 + *(arg1 + 0x420) - 0x12c) << 3)) = 1
            while (i_1 s< *(arg1 + 0x410))
        
        sub_535320(arg1)

eax_1.b = 1
return eax_1
