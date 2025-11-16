// 函数: sub_6e5d90
// 地址: 0x6e5d90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = sub_6e5aa0(arg1)

if (eax u< *(arg1 + 0xe8))
    sub_6e5c20(arg1)

int32_t var_c

if (eax == 0)
    var_c = 0
else
    int32_t eax_1 = *(arg1 + 0xc9f0)
    int32_t ebx_1 = *(arg1 + 0xc9ec)
    
    if (eax_1 s< 1)
        ebx_1 = sub_6ec810(arg1 + 0xc9e4, 1)
        eax_1 = *(arg1 + 0xc9f0)
    
    *(arg1 + 0xc9ec) = ebx_1 * 2
    *(arg1 + 0xc9f0) = eax_1 - 1
    var_c = not.d(ebx_1 u>> 0x1f) & 1

int32_t eax_3 = *(arg1 + 0xe0)
uint32_t edx = 0
int32_t ecx_4 = *(arg1 + 0x100)
int32_t esi_2 = 0
int32_t ebx_5 = 0
int32_t eax_4 = *(arg1 + 0xe4)
int32_t eax_5 = *(arg1 + 0xd0)
uint32_t var_20 = 0
char* var_8 = nullptr
int32_t eax_7 = ecx_4 + (*(arg1 + 0xdc) << 2)
int32_t var_14 = 0
int32_t ecx_5 = 0
int32_t var_10 = 0
void* var_18 = arg1 + 0x104
void* eax_9 = arg1 + 0x8c
void* edi_1 = var_18
int32_t var_34 = 0
void* var_38 = eax_9
int32_t i_1 = 3
int32_t i

do
    ebx_5 += *eax_9
    char* eax_10 = var_8
    int32_t var_50_1 = ebx_5
    
    if (eax_10 u< ebx_5)
        do
            int32_t j = 0
            int32_t ebx_6 = 1
            int32_t j_1 = 0
            int32_t var_30_1 = 1
            
            do
                ecx_5 = var_10
                
                if ((ebx_6.b & eax_10[eax_4] u>> 2 & 0xf) != 0)
                    int32_t* ebx_8 = eax_7 - (esi_2 << 2)
                    int32_t k_1 = 4
                    int32_t* edi_4 = ((j + (var_8 << 2)) << 4) + eax_3
                    int32_t k_2 = 4
                    int32_t k
                    
                    do
                        int32_t esi_3 = *edi_4
                        
                        if (esi_3 s>= 0)
                            char* eax_16
                            eax_16.b = var_8[eax_4]
                            int32_t ecx_9 = var_10
                            int32_t eax_17
                            
                            if ((eax_16.b & 1) != 0)
                                eax_17 = 1
                                *(ecx_4 + (ecx_9 << 2)) = esi_3
                                edx = var_20
                                var_10 = ecx_9 + 1
                            else if ((eax_16.b & 2) != 0)
                                if (edx s> 0)
                                    eax_17 = var_c
                                else
                                    edx = sub_6ec760(arg1 + 0xc9e4, 0xadc0b0)
                                    int32_t ecx_17
                                    ecx_17.b = var_c == 0
                                    eax_17 = ecx_17
                                    ecx_9 = var_10
                                    var_c = eax_17
                                
                                edx -= 1
                                var_20 = edx
                                
                                if (var_c == 0)
                                    goto label_6e5eec
                                
                                *(ecx_4 + (ecx_9 << 2)) = esi_3
                                edx = var_20
                                var_10 = ecx_9 + 1
                            else
                                eax_17 = 0
                            label_6e5eec:
                                var_14 += 1
                                ebx_8 -= 4
                                *ebx_8 = esi_3
                            
                            *(eax_5 + (esi_3 << 2)) ^= (*(eax_5 + (esi_3 << 2)) ^ eax_17) & 1
                            ecx_5 = var_10
                            k_1 = k_2
                        
                        edi_4 = &edi_4[1]
                        k = k_1
                        k_1 -= 1
                        k_2 = k_1
                    while (k != 1)
                    esi_2 = var_14
                    ebx_6 = var_30_1
                    j = j_1
                
                eax_10 = var_8
                j += 1
                ebx_6 = rol.d(ebx_6, 1)
                j_1 = j
                var_30_1 = ebx_6
            while (j s< 4)
            
            ebx_5 = var_50_1
            eax_10 = &eax_10[1]
            var_8 = eax_10
        while (eax_10 u< ebx_5)
        
        edi_1 = var_18
    
    *edi_1 = ecx_5 - var_34
    edi_1 += 4
    eax_9 = var_38 + 0x20
    var_34 = ecx_5
    i = i_1
    i_1 -= 1
    var_18 = edi_1
    var_38 = eax_9
while (i != 1)
*(arg1 + 0x110) = ecx_5
return arg1
