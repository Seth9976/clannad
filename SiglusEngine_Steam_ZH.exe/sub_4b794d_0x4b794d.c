// 函数: sub_4b794d
// 地址: 0x4b794d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t eax = 0
void* edx = arg1
int32_t edi
int32_t var_20 = edi
void* var_c = edx
int32_t var_14 = 0

if (arg3 u> 0)
    do
        int32_t* edi_1 = *(arg2 + (eax << 2))
        
        if (edi_1 != 0)
            int32_t eax_1 = *edi_1
            
            if (eax_1 != 0)
                int32_t ecx_2 = eax_1 & 0xfff00000
                int32_t var_10_1 = sub_4b4917(ecx_2)
                
                if (ecx_2 == 0x11000000)
                    var_10_1 = 1
                
                int32_t i = 0
                
                if (edi_1[1] u> 0)
                    do
                        int32_t eax_3 = *(edx + 0x14)
                        void* esi_2 = *(eax_3 + (*(edi_1[2] + (i << 2)) << 2))
                        
                        if (*(esi_2 + 4) == *(edx + 0x80) && zx.d((*(esi_2 + 0x6c)).b) == arg4
                                && arg5 == zx.d(*(esi_2 + 0x6d))
                                && (var_10_1 == 0 || *(esi_2 + 0x3c) != 0))
                            if (arg6 u> 0)
                                int32_t ecx_9 = *(esi_2 + 0x10)
                                
                                do
                                    if (ecx_9 == *(*(eax_3 + (*(arg7 + (ebx << 2)) << 2)) + 0x10))
                                        int32_t var_24_2 = ecx_9
                                        int32_t var_28_1 = ecx_9
                                        var_28_1.q = fconvert.d(float.t(0))
                                        int32_t eax_4 =
                                            sub_49f544(var_c, *(var_c + 0x88), 0, ecx_9, var_28_1)
                                        
                                        if (eax_4 == 0xffffffff)
                                            return 0x8007000e
                                        
                                        void* ecx_13 = *(*(var_c + 0x14) + (eax_4 << 2))
                                        *(ecx_13 + 0x3c) = *(esi_2 + 0x3c)
                                        *(ecx_13 + 0x38) = *(arg7 + (ebx << 2))
                                        *(edi_1[2] + (i << 2)) = eax_4
                                        break
                                    
                                    ebx += 1
                                while (ebx u< arg6)
                            
                            if (ebx == arg6)
                                sub_4a4100(var_c, nullptr, 0x12c1, 
                                    "internal error: InputRemap component matchup failed")
                                return 0x80004005
                            
                            edx = var_c
                            ebx = 0
                        
                        i += 1
                    while (i u< edi_1[1])
        
        eax = var_14 + 1
        var_14 = eax
    while (eax u< arg3)

return 0
