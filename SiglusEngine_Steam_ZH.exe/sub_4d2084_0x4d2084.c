// 函数: sub_4d2084
// 地址: 0x4d2084
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
int32_t i = 0
int32_t edi_1 = 0

if (*(arg1 + 0xc) u> 0)
    do
        int32_t eax_1 = *(arg1 + 0x18)
        *(arg1 + 0xfc) = i
        int32_t* eax_2 = *(eax_1 + (i << 2))
        *(arg1 + 0x100) = eax_2
        int32_t edx_2 = *eax_2 & 0xfff00000
        
        if (edx_2 != 0)
            void* eax_5 = *(*(arg1 + 0x14) + (*eax_2[2] << 2))
            
            if (edx_2 == 0x60500000 || edx_2 == 0x60700000 || edx_2 == 0x60800000
                    || edx_2 == 0x60900000 || edx_2 == 0x60600000 || edx_2 == 0x60000000
                    || edx_2 == 0x60200000 || edx_2 == 0x60300000 || edx_2 == 0x60400000
                    || edx_2 == 0x60100000)
                if ((*(eax_5 + 0x3e) & 0xc0) != 0)
                    edi_1 = 1
                
                *(eax_5 + 0x3c) = 0x200000
            else if (edx_2 == 0x60a00000 || edx_2 == 0x60c00000 || edx_2 == 0x60d00000
                    || edx_2 == 0x60e00000 || edx_2 == 0x60b00000)
                if ((*(eax_5 + 0x3e) & 0xa0) != 0)
                    edi_1 = 1
                
                *(eax_5 + 0x3c) = &__dos_header
            else if (edx_2 == 0x60f00000 || edx_2 == 0x61100000 || edx_2 == 0x61200000
                    || edx_2 == 0x61300000 || edx_2 == 0x61000000)
                if ((*(eax_5 + 0x3e) & 0x60) != 0)
                    edi_1 = 1
                
                *(eax_5 + 0x3c) = 0x800000
        
        i += 1
    while (i u< *(arg1 + 0xc))
    
    if (edi_1 != 0)
        sub_4a4100(arg1, nullptr, 0x11bb, "sampler mismatch: sampler used inconsistently")
        return 0x80004005

return 0
