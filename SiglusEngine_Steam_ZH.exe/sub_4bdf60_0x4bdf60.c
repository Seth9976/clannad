// 函数: sub_4bdf60
// 地址: 0x4bdf60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_2c = edi
int32_t* edi_1 = arg5

if (edi_1 != 0)
    *edi_1 = 0

int32_t esi = arg4

if (esi != 0)
    if (edi_1 == 0)
        int32_t* ecx = arg3
        
        if (arg3 u< esi)
            do
                void* eax_2 = *(arg2 + (ecx << 2))
                
                if (eax_2 != 0)
                    *(eax_2 + 0x24) = 0
                
                ecx += 1
            while (ecx u< esi)
    
    int32_t eax_3 = esi - 1
    int32_t* ebx_1 = arg3
    
    if (arg3 u< eax_3)
        do
            int32_t* edi_2 = *(arg2 + (ebx_1 << 2))
            
            if (edi_2 != 0)
                int32_t* esi_1 = nullptr
                
                if (arg5 != 0)
                    *arg5 += 1
                
                while (ebx_1 u< eax_3)
                    ebx_1 += 1
                    esi_1 = *(arg2 + (ebx_1 << 2))
                    
                    if (esi_1 != 0)
                        break
                
                int32_t var_20_1 = 0
                ebx_1 -= 1
                int32_t* var_1c_1 = ebx_1
                
                if (esi_1 != 0)
                    int32_t var_24_1 = 0
                    
                    if (arg5 == 0)
                        edi_2[9] = 0
                        esi_1[9] = 0
                    
                    int32_t eax_5 = *edi_2 & 0xfffff
                    
                    if (eax_5 == 1 && (*esi_1 & 0xfffff) u< 4)
                        int32_t* eax_6 = edi_2
                        edi_2 = esi_1
                        esi_1 = eax_6
                        var_24_1 = 1
                    label_4be047:
                        int32_t eax_12
                        
                        if (zx.d((arg1[0x32]).w) != 0x104)
                            eax_12 = (*(*arg1 + 0xa4))(edi_2, esi_1)
                        
                        if (zx.d((arg1[0x32]).w) == 0x104 || eax_12 == 0)
                            int32_t eax_14 = *edi_2 & 0xfff00000
                            
                            if (eax_14 != 0x72100000 && eax_14 != 0x72000000 && eax_14 != 0x72e00000
                                    && eax_14 != 0x60700000 && eax_14 != 0x60500000
                                    && eax_14 != 0x60a00000 && eax_14 != 0x60000000
                                    && eax_14 != 0x60f00000 && eax_14 != 0x11000000 && eax_14 != 0)
                                int32_t var_10_1 = 0
                                
                                if (edi_2[3] u> 0)
                                    int32_t eax_16 = arg1[5]
                                    int32_t* var_c_1 = edi_2[4]
                                    int32_t i_1 = edi_2[3]
                                    int32_t i
                                    
                                    do
                                        int32_t edx_4 = *var_c_1
                                        
                                        if (*(*(eax_16 + (edx_4 << 2)) + 0x10) == 3)
                                            var_20_1 = 1
                                        
                                        if (esi_1[1] u> 0)
                                            arg3 = esi_1[2]
                                            int32_t j_3 = esi_1[1]
                                            int32_t j
                                            
                                            do
                                                int32_t ecx_12 = *arg3
                                                
                                                if (*(*(eax_16 + (ecx_12 << 2)) + 0x38) == edx_4
                                                        || ecx_12 == edx_4)
                                                    var_10_1 = 1
                                                
                                                arg3 = &arg3[1]
                                                j = j_3
                                                j_3 -= 1
                                            while (j != 1)
                                            ebx_1 = var_1c_1
                                        
                                        var_c_1 = &var_c_1[1]
                                        i = i_1
                                        i_1 -= 1
                                    while (i != 1)
                                
                                arg3 = nullptr
                                
                                if (esi_1[3] u> 0)
                                    do
                                        if (edi_2[1] u> 0)
                                            int32_t ecx_14 = *(esi_1[4] + (arg3 << 2))
                                            int32_t* eax_19 = edi_2[2]
                                            int32_t j_2 = edi_2[1]
                                            int32_t j_1
                                            
                                            do
                                                if (*(*(arg1[5] + (*eax_19 << 2)) + 0x38) == ecx_14
                                                        || *eax_19 == ecx_14)
                                                    var_10_1 = 1
                                                
                                                eax_19 = &eax_19[1]
                                                j_1 = j_2
                                                j_2 -= 1
                                            while (j_1 != 1)
                                            ebx_1 = var_1c_1
                                        
                                        arg3 += 1
                                    while (arg3 u< esi_1[3])
                                
                                if (var_10_1 == 0 && var_20_1 == 0
                                        && *(*(arg1[5] + (*esi_1[4] << 2)) + 0x10) == 3)
                                    if (arg5 == 0)
                                        if (var_24_1 == 0)
                                            esi_1[9] = 1
                                        else
                                            edi_2[9] = 1
                                    
                                    ebx_1 += 1
                    else if (eax_5 != 4 && (*esi_1 & 0xfffff) == 1)
                        goto label_4be047
                
                esi = arg4
            
            ebx_1 += 1
            eax_3 = esi - 1
        while (ebx_1 u< eax_3)
        
        edi_1 = arg5
    
    if (ebx_1 != esi && edi_1 != 0)
        *edi_1 += 1

return 0
