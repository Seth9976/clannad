// 函数: sub_448ab0
// 地址: 0x448ab0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_12c109c
data_1af4508 = 0
data_1af4504 = 0
data_1af4500 = 0

if (edx == 0)
    return 

int32_t edi_1 = data_12c3ca0

if (edi_1 == 0)
    return 

int32_t ecx_1 = 0
int32_t var_10_1 = 0
void* eax

if (edi_1 s> 0)
    eax = &data_12c10f4
    void* var_14_1 = &data_12c10f4
    
    do
        int32_t edi_2 = 0
        
        if (edx s> 0)
            void* eax_1 = eax - 0x24
            void* esi_1 = &data_12be2cc
            void* var_c_1 = eax_1
            
            do
                void* ecx_2 = eax_1
                void* edx_1 = esi_1
                
                if (ecx_2 != 0 && esi_1 != 0)
                    eax_1.b = *ecx_2
                    
                    while (eax_1.b != 0)
                        eax_1:1.b = *edx_1
                        
                        if (eax_1:1.b == 0)
                            goto label_448b6e
                        
                        if (eax_1.b != eax_1:1.b)
                            eax_1.b = *ecx_2
                            goto label_448b6e
                        
                        if (eax_1.b u< 0x80)
                            ecx_2 += 1
                            edx_1 += 1
                        else if (eax_1.b u< 0xa0)
                            if (eax_1.b u< 0xfe)
                                goto label_448b51
                            
                            ecx_2 += 1
                            edx_1 += 1
                        else if (eax_1.b u<= 0xdf || eax_1.b u>= 0xfe)
                            ecx_2 += 1
                            edx_1 += 1
                        else
                        label_448b51:
                            eax_1.b = *(ecx_2 + 1)
                            
                            if (eax_1.b != *(edx_1 + 1))
                                goto label_448b6e
                            
                            ecx_2 += 2
                            edx_1 += 2
                        
                        eax_1.b = *ecx_2
                    
                    if (*edx_1 == 0)
                        edx = data_12c109c
                        data_1af4508 = 1
                        break
                    
                label_448b6e:
                    eax_1 = var_c_1
                
                edx = data_12c109c
                edi_2 += 1
                esi_1 += 0x5c
            while (edi_2 s< edx)
            
            ecx_1 = var_10_1
            eax = var_14_1
        
        if (edi_2 == edx)
            *eax = 1
            edx = data_12c109c
            data_1af4504 = 1
        
        edi_1 = data_12c3ca0
        ecx_1 += 1
        eax += 0x58
        var_10_1 = ecx_1
        var_14_1 = eax
    while (ecx_1 s< edi_1)

int32_t ecx_3 = 0
int32_t var_14_2 = 0

if (edx s<= 0)
    return 

eax = &data_12be2f4
void* var_10_2 = &data_12be2f4
int32_t edi_3 = edi_1

do
    int32_t i = 0
    
    if (edi_3 s> 0)
        void* eax_2 = eax - 0x28
        void* edi_4 = &data_12c10d0
        void* var_c_2 = eax_2
        
        do
            if (sub_4d0f10(eax_2, edi_4) == 0)
                break
            
            eax_2 = var_c_2
            i += 1
            edi_4 += 0x58
        while (i s< data_12c3ca0)
        
        eax = var_10_2
        ecx_3 = var_14_2
        edx = data_12c109c
        edi_3 = data_12c3ca0
    
    if (i == edi_3)
        *eax = 1
        edx = data_12c109c
        edi_3 = data_12c3ca0
        data_1af4500 = 1
    
    ecx_3 += 1
    eax += 0x5c
    var_14_2 = ecx_3
    var_10_2 = eax
while (ecx_3 s< edx)
