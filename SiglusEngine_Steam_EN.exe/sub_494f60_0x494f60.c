// 函数: sub_494f60
// 地址: 0x494f60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edx = data_1be46dc
char* var_14 = edx

if (edx == 0)
    return 

int32_t eax = data_1b8c88c
int32_t ecx_1 = 0
data_1be46d4 = 0
int32_t var_c_1 = 0

if (eax s<= 0)
    return 

int32_t edi_1 = data_1be46d0

do
    int32_t var_8_1 = 0
    
    if (edi_1 s> 0)
        int32_t eax_1 = 0
        
        do
            if (*edx != 0)
                *edx = 0
                void* ecx_2 = &edx[1]
                int32_t esi_1 = 1
                
                if (eax_1 + 1 s< edi_1)
                    void* eax_5 = ecx_2 - edx + var_8_1
                    
                    while (*ecx_2 != 0)
                        *ecx_2 = 0
                        eax_5 += 1
                        esi_1 += 1
                        ecx_2 += 1
                        
                        if (eax_5 s>= edi_1)
                            break
                
                void* edx_1 = &edx[edi_1]
                int32_t i = var_c_1 + 1
                void* var_10 = 1
                void* var_1c = edx_1
                int32_t i_1 = i
                
                while (i s< data_1b8c88c)
                    char* eax_6 = nullptr
                    
                    if (esi_1 s> 0)
                        while (*(eax_6 + edx_1) != 0)
                            eax_6 = &eax_6[1]
                            
                            if (eax_6 s>= esi_1)
                                goto label_49501f
                        
                        if (eax_6 s< esi_1)
                            break
                        
                    label_49501f:
                        int32_t edi_3 = __builtin_memset(edx_1, 0, esi_1 u>> 2 << 2)
                        edx_1 = var_1c
                        __builtin_memset(edi_3, 0, esi_1 & 3)
                        i = i_1
                        edi_1 = data_1be46d0
                    
                    var_10 += 1
                    i += 1
                    edx_1 += edi_1
                    i_1 = i
                    var_1c = edx_1
                
                int32_t eax_8 = var_8_1 << 3
                var_1c = eax_8
                int32_t edx_3 = data_1bfe278
                int32_t i_2 = var_c_1 << 3
                i_1 = i_2
                int32_t var_20 = eax_8 + (esi_1 << 3) - 1
                int32_t ecx_9 = data_1bfe274
                var_10 = (var_10 << 3) + 0xffffffff + i_2
                int32_t eax_15 = sub_4d2220(&var_1c, edx_3, ecx_9, data_1bfe27c, data_1bfe280, 
                    &var_1c, &i_1, &var_20, &var_10)
                
                if (eax_15 != 0)
                    if (data_1b8ad60 != 0)
                        int32_t eax_16 = data_1b8ad68
                        
                        if (data_1b8ad6c s>= eax_16)
                            data_1b8ad68 = eax_16 + 0x200
                            int32_t eax_18 = (eax_16 + 0x200) << 4
                            sub_4d6ae0(eax_18, &data_1b8ad64, &data_1b8ad60, eax_18)
                            edi_1 = data_1be46d0
                    else
                        data_1b8ad68 = 0x200
                        sub_4d6960(eax_15, &data_1b8ad64, &data_1b8ad60, 0x2000, "REDISPRECT")
                        edi_1 = data_1be46d0
                    
                    void** ecx_12 = (data_1b8ad6c << 4) + data_1b8ad64
                    *ecx_12 = var_1c
                    ecx_12[1] = i_1
                    ecx_12[2] = var_20
                    ecx_12[3] = var_10
                    data_1b8ad6c += 1
                
                eax_1 = var_8_1
                edx = var_14
            
            eax_1 += 1
            edx = &edx[1]
            var_14 = edx
            var_8_1 = eax_1
        while (eax_1 s< edi_1)
        
        eax = data_1b8c88c
        ecx_1 = var_c_1
    
    ecx_1 += 1
    var_c_1 = ecx_1
while (ecx_1 s< eax)
