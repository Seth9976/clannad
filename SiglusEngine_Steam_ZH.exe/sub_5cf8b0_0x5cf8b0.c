// 函数: sub_5cf8b0
// 地址: 0x5cf8b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void*** eax = *(arg1 + 0x144)

if (eax s>= 0)
    void* edi_2 = eax * 0x2e60 + *(arg1 + 0x10c)
    eax = *(data_bac510 + 0xa47f44)
    
    if (eax == 1)
        eax = *(edi_2 + 0x2e14)
        
        if (eax != *(edi_2 + 0x2e18))
            int32_t ecx = *(edi_2 + 0x2e2c)
            
            if (ecx s< 0 || (*(edi_2 + 0x2e18) - *(edi_2 + 0x2e14)) s>> 2 s<= ecx)
                *(edi_2 + 0x2e2c) = 0
            
            int32_t ecx_1 = *(edi_2 + 0x2e2c)
            void* ebx = data_bac4e4
            int32_t* eax_6 = *(*(edi_2 + 0x2e14) + (ecx_1 << 2))
            int32_t eax_8 = *(*(edi_2 + 0x2e20) + (ecx_1 << 2))
            int32_t ebx_1
            
            if (*(ebx + 0x156) == 0)
                ebx_1 = 0x64
            else
                ebx_1 = *(ebx + 0x158)
            
            void* esi = data_bac468
            sub_6de670(*(esi + 0x178), 1)
            *(esi + 0x184) = eax_6
            *(esi + 0x188) = eax_8
            *(esi + 0x190) = 1
            sub_676f90(0)
            int64_t var_2c
            var_2c:4.d = 0
            var_2c.d = ebx_1
            char* eax_11 = sub_6040f0(*(esi + 0x178), eax_6, nullptr, var_2c, nullptr, 0)
            *(edi_2 + 0x2e2c) += 1
            return eax_11
    else if (eax == 2)
        int64_t var_2c_1 = *(edi_2 + 0x2e50)
        int32_t var_24_1 = *(edi_2 + 0x2e58)
        int32_t eax_12
        eax_12.w = *(edi_2 + 0x2e5c)
        int16_t var_20_1 = eax_12.w
        eax = sub_650710()
        
        if (eax.b != 0)
            int32_t eax_13
            eax_13.w = *(edi_2 + 0x2e5c)
            return sub_5d03b0(*(edi_2 + 0x2e50), *(edi_2 + 0x2e58), eax_13.w)

return eax
