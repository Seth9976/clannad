// 函数: sub_422920
// 地址: 0x422920
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg1
int32_t var_8 = edx

if (data_13125b4 == 0)
    return 

int32_t edi_1 = data_13701cc

if (edi_1 == 0)
    return 

int32_t ecx_1 = data_13126d4 - data_13126fc
void* eax = data_13701b0
int32_t ecx_2 = data_13126e0
void* var_14_1 = eax
int32_t var_1c_1 = 0

if (ecx_2 s<= 0)
    return 

while (true)
    void* edi_2 = *(edi_1 + (eax << 3) + 4)
    eax = *(edi_2 + 0x48)
    
    if (eax != 0)
        int32_t ecx_3 = *(edi_2 + 0x50)
        
        if (ecx_3 s> 0)
            int32_t ecx_4 = data_13126d0
            
            if (ecx_4 s<= edx && edx s<= ecx_4 + data_13126f8 && *(edi_2 + 0x1c) + ecx_1 s<= arg2
                    && arg2 s<= *(edi_2 + 0x20) + ecx_1)
                int32_t edi_3 = 0
                
                if (ecx_3 s> 0)
                    int32_t ecx_10 = var_8
                    
                    while (true)
                        int32_t esi_3 = *(eax + 0xc) + data_13126d0
                        int32_t edx_2 = *(eax + 0x10) + ecx_1
                        
                        if (esi_3 s<= ecx_10)
                            if (var_8 s<= *(eax + 0x14) - 1 + esi_3 && edx_2 s<= arg2
                                    && arg2 s<= *(eax + 0x18) - 1 + edx_2)
                                if (*(eax + 0x1c) == 0xffffffff)
                                    break
                                
                                data_1312728 = var_14_1
                                data_131272c = *(eax + 0x1c)
                                eax.b = *(eax + 0x20)
                                data_1312730 = eax.b
                                return 
                            
                            ecx_10 = var_8
                        
                        eax += *eax
                        edi_3 += 1
                        
                        if (edi_3 s>= ecx_3)
                            edx = var_8
                            goto label_422a30
                    
                    break
                
            label_422a30:
                
                if (*(edi_2 + 0x30) != 0xffffffff)
                    int32_t eax_2 = *(edi_2 + 0x3c) + data_13126d0
                    int32_t ecx_18 = *(edi_2 + 0x40) + ecx_1
                    
                    if (eax_2 s<= edx && edx s<= eax_2 + data_1312744 - 1 && ecx_18 s<= arg2
                            && arg2 s<= data_1312748 - 1 + ecx_18)
                        data_1312728 = var_14_1
                        data_131272c = *(edi_2 + 0x30)
                        eax.b = *(edi_2 + 0x34)
                        data_1312730 = eax.b
                        break
        
        ecx_2 = data_13126e0
    
    eax = var_14_1 + 1
    
    if (eax == 0x3e8)
        eax = nullptr
    
    int32_t edi_6 = var_1c_1 + 1
    var_14_1 = eax
    var_1c_1 = edi_6
    
    if (edi_6 s>= ecx_2)
        break
    
    edi_1 = data_13701cc
