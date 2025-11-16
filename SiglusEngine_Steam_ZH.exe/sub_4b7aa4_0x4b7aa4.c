// 函数: sub_4b7aa4
// 地址: 0x4b7aa4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = 0
int32_t edi
int32_t var_1c = edi
int32_t var_10 = 0

if (arg3 u> 0)
    do
        void* edi_1 = *(arg2 + (eax << 2))
        
        if (edi_1 != 0)
            int32_t i = 0
            
            if (*(edi_1 + 4) u> 0)
                do
                    int32_t eax_1 = *(arg1 + 0x14)
                    void* esi_2 = *(eax_1 + (*(*(edi_1 + 8) + (i << 2)) << 2))
                    
                    if (*(esi_2 + 4) == *(arg1 + 0x80) && *(esi_2 + 0x3c) != 0
                            && zx.d((*(esi_2 + 0x6c)).b) == arg4 && arg5 == zx.d(*(esi_2 + 0x6d)))
                        int32_t var_8_1 = 0
                        
                        if (arg6 u> 0)
                            do
                                int32_t ecx_2 = *(esi_2 + 0x10)
                                
                                if (ecx_2 == *(*(eax_1 + (*(arg7 + (var_8_1 << 2)) << 2)) + 0x10))
                                    int32_t var_20_1 = ecx_2
                                    int32_t var_24_1 = ecx_2
                                    var_24_1.q = fconvert.d(float.t(0))
                                    int32_t eax_2 =
                                        sub_49f544(arg1, *(arg1 + 0x88), 0, ecx_2, var_24_1)
                                    
                                    if (eax_2 == 0xffffffff)
                                        return 0x8007000e
                                    
                                    void* ecx_6 = *(*(arg1 + 0x14) + (eax_2 << 2))
                                    *(ecx_6 + 0x3c) = *(esi_2 + 0x3c)
                                    *(ecx_6 + 0x38) = *(arg7 + (var_8_1 << 2))
                                    *(*(edi_1 + 8) + (i << 2)) = eax_2
                                    break
                                
                                var_8_1 += 1
                            while (var_8_1 u< arg6)
                        
                        if (var_8_1 == arg6)
                            sub_4a4100(arg1, nullptr, 0x12c2, 
                                "internal error: InputRemap component matchup failed")
                            return 0x80004005
                    
                    i += 1
                while (i u< *(edi_1 + 4))
        
        eax = var_10 + 1
        var_10 = eax
    while (eax u< arg3)

return 0
