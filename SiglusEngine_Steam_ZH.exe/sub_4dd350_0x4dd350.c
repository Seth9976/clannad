// 函数: sub_4dd350
// 地址: 0x4dd350
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
int32_t ecx_1 = *(ebx + 0x160) - 1
int32_t eax_1 = *(ebx + 0x144) - 1
void* esi = *(ebx + 0x1b0)
int32_t i = *(esi + 0x18)
int32_t edi
int32_t var_48 = edi
void* var_10 = esi
int32_t var_20 = ecx_1
int32_t i_1 = i

while (i s< *(esi + 0x1c))
    int32_t edi_1 = *(esi + 0x14)
    int32_t var_c_1 = edi_1
    
    if (edi_1 u<= ecx_1)
        int32_t edi_2 = edi_1
        
        do
            sub_4985f0(*(esi + 0x20), *(ebx + 0x168) << 7)
            
            if ((*(*(ebx + 0x1c0) + 4))(ebx, esi + 0x20) == 0)
                *(var_10 + 0x14) = edi_2
                *(var_10 + 0x18) = i_1
                return 0
            
            int32_t ecx_3 = 0
            int32_t var_14_1 = 0
            int32_t var_30_1 = 0
            
            if (*(ebx + 0x14c) s> 0)
                void* var_1c_1 = ebx + 0x150
                bool cond:7_1
                
                do
                    void* esi_2 = *var_1c_1
                    
                    if (*(esi_2 + 0x30) != 0)
                        int32_t eax_9 = *(esi_2 + 4) << 2
                        int32_t edx_4 = *(*(ebx + 0x1c4) + eax_9 + 4)
                        int32_t edx_5
                        
                        if (edi_2 u>= var_20)
                            edx_5 = *(esi_2 + 0x44)
                        else
                            edx_5 = *(esi_2 + 0x34)
                        
                        int32_t edi_5 = *(esi_2 + 0x40) * var_c_1
                        int32_t var_18_1 = *(eax_9 + arg2) + ((*(esi_2 + 0x24) * i_1) << 2)
                        int32_t j = 0
                        int32_t var_3c_1 = edi_5
                        int32_t j_1 = 0
                        
                        if (*(esi_2 + 0x38) s> 0)
                            do
                                if ((*(ebx + 0x98) u< eax_1 || i_1 + j s< *(esi_2 + 0x48))
                                        && edx_5 s> 0)
                                    void* ebx_2 = var_10 + (ecx_3 << 2) + 0x20
                                    int32_t var_28_1 = edx_5
                                    bool cond:10_1
                                    
                                    do
                                        edx_4(arg1, esi_2, *ebx_2, var_18_1, edi_5)
                                        edi_5 += *(esi_2 + 0x24)
                                        ebx_2 += 4
                                        cond:10_1 = var_28_1 != 1
                                        var_28_1 -= 1
                                    while (cond:10_1)
                                    j = j_1
                                    edi_5 = var_3c_1
                                    ecx_3 = var_14_1
                                
                                ecx_3 += *(esi_2 + 0x34)
                                ebx = arg1
                                var_18_1 += *(esi_2 + 0x24) << 2
                                j += 1
                                var_14_1 = ecx_3
                                j_1 = j
                            while (j s< *(esi_2 + 0x38))
                    else
                        ecx_3 += *(esi_2 + 0x3c)
                        var_14_1 = ecx_3
                    
                    edi_2 = var_c_1
                    cond:7_1 = var_30_1 + 1 s< *(ebx + 0x14c)
                    var_30_1 += 1
                    var_1c_1 += 4
                while (cond:7_1)
            
            esi = var_10
            edi_2 += 1
            var_c_1 = edi_2
        while (edi_2 u<= var_20)
        
        i = i_1
        ecx_1 = var_20
    
    *(esi + 0x14) = 0
    i += 1
    i_1 = i

int32_t ecx_5 = *(ebx + 0x98)
*(ebx + 0xa0) += 1
int32_t edx_24 = *(ebx + 0x144)
*(ebx + 0x98) = ecx_5 + 1

if (ecx_5 + 1 u>= edx_24)
    (*(*(ebx + 0x1b8) + 0xc))(ebx)
    return 4

void* eax_18 = *(ebx + 0x1b0)

if (*(ebx + 0x14c) s> 1)
    *(eax_18 + 0x1c) = 1
    *(eax_18 + 0x14) = 0
    *(eax_18 + 0x18) = 0
    return 3

void* edx_26 = *(ebx + 0x150)
int32_t ecx_8

if (ecx_5 + 1 u>= edx_24 - 1)
    ecx_8 = *(edx_26 + 0x48)
else
    ecx_8 = *(edx_26 + 0xc)

*(eax_18 + 0x1c) = ecx_8
*(eax_18 + 0x14) = 0
*(eax_18 + 0x18) = 0
return 3
