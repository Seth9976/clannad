// 函数: sub_4b4ac3
// 地址: 0x4b4ac3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = *(arg1 + 0x4c)
int32_t edi
int32_t var_20 = edi
int32_t i = i_1

if (i_1 u< *(arg1 + 0x224))
    int32_t** var_c_1 = *(arg1 + 0x230) + (i_1 << 2)
    
    do
        int32_t* esi_1 = *var_c_1
        
        if (esi_1 != 0)
            int32_t eax_2 = *esi_1
            
            if (eax_2 != 0)
                int32_t edi_1 = *(arg1 + 0x14)
                
                if (*(*(edi_1 + (*esi_1[4] << 2)) + 4) != *(arg1 + 0x84)
                        || (eax_2 & 0xfff00000) != 0x10000000)
                    int32_t var_8_1 = 0
                    
                    if (esi_1[1] u> 0)
                        int32_t* ebx_1 = esi_1[2]
                        
                        while (true)
                            void* eax_5 = *(edi_1 + (*ebx_1 << 2))
                            int16_t edx_6 = (*(eax_5 + 0x3c)).w
                            
                            while (true)
                                int32_t edx_7 = *(eax_5 + 0x38)
                                
                                if (edx_7 == 0xffffffff)
                                    break
                                
                                eax_5 = *(edi_1 + (edx_7 << 2))
                            
                            if (*(eax_5 + 0x6c) == 3
                                    && (((*(eax_5 + 0x3c)).w | edx_6):1.b & 2) == 0)
                                uint32_t var_24_1 = zx.d((*(arg1 + 0xc8)).b)
                                sub_4a4195(arg1, esi_1[0xf], 0x1263, 
                                    "texcoord inputs used directly (that is, other than sampling from "
                                "textures) in shader body in ps_1_%i are always clamped from 0 to "
                                "1")
                                break
                            
                            var_8_1 += 1
                            ebx_1 = &ebx_1[1]
                            
                            if (var_8_1 u>= esi_1[1])
                                goto label_4b4b61
                        
                        break
        
    label_4b4b61:
        i += 1
        var_c_1 = &var_c_1[1]
    while (i u< *(arg1 + 0x224))

return 0
