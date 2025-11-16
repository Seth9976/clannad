// 函数: sub_422ec0
// 地址: 0x422ec0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = 1
data_131278c = 0xffffffff
data_1312794 = 0xffffffff
void* edi = &data_13128fc
data_13128f8 = 0
data_1312a14 = 0
data_1312b30 = 0
data_1312c4c = 0
data_1312d68 = 0
data_1312e84 = 0
data_1312fa0 = 0
int32_t var_8 = 1
int32_t* eax_2
int32_t esi_3

while (true)
    eax_2 = *(edi - 8)
    
    if (eax_2 u> 0x1ff)
        esi_3 = data_1320e58
    else
        void* esi_1 = eax_2 * 0x74
        
        if (*(esi_1 + 0x13747b0) == 0 && *(esi_1 + &data_1374760) == 0)
            int32_t edx_1 = *(esi_1 + 0x137478c)
            
            if (edx_1 != 0xffffffff)
                int32_t var_18_1 = esi_1 + &data_1374790
                eax_2 = sub_4a83f0(esi_1 + 0x13747cc, edx_1, esi_1 + 0x13747b0, esi_1 + 0x13747b0, 
                    esi_1 + 0x13747cc)
            else
                eax_2 = sub_427370(esi_1 + 0x13747cc, esi_1 + 0x1374764, esi_1 + 0x13747b0, 
                    *(esi_1 + 0x1374788), *(esi_1 + 0x13747a0), 1, *(esi_1 + 0x13747a8), 
                    esi_1 + 0x13747cc, 1, 0)
            
            edx = var_8
            
            if (*(esi_1 + 0x13747b0) != 0)
                goto label_422fcd
            
            *(esi_1 + &data_1374760) = 1
        
        if (*(esi_1 + 0x13747b0) == 0)
            esi_3 = data_1320e58
        else
        label_422fcd:
            eax_2 = *(esi_1 + 0x13747c4)
            int32_t ecx_4
            
            if (eax_2 == 0 || eax_2 == 1)
            label_42300a:
                ecx_4 = *(esi_1 + 0x13747c0)
                eax_2 = *(esi_1 + 0x13747bc)
            label_423016:
                
                if (eax_2 s<= 0 || ecx_4 s<= 0)
                    esi_3 = data_1320e58
                else
                    int32_t esi_2 = data_131d2cc
                    
                    if (*edi s> esi_2)
                        esi_3 = data_1320e58
                    else
                        eax_2 += *edi - 1
                        edx = var_8
                        esi_3 = data_1320e58
                        
                        if (esi_2 s<= eax_2)
                            eax_2 = *(edi + 4)
                            
                            if (eax_2 s<= esi_3)
                                eax_2 = eax_2 - 1 + ecx_4
                                
                                if (esi_3 s<= eax_2)
                                    data_131278c = edx
                                    break
            else if (eax_2 != 2)
                if (eax_2 == 3)
                    goto label_42300a
                
                esi_3 = data_1320e58
            else
                eax_2 = *(esi_1 + 0x13747b4)
                
                if (*eax_2 s<= 0)
                    esi_3 = data_1320e58
                else
                    void* ecx_2 = eax_2[1]
                    
                    if (ecx_2 == 0 || eax_2[2] == 0)
                        esi_3 = data_1320e58
                    else
                        void* ecx_3 = ecx_2 + eax_2
                        
                        if (ecx_2 != neg.d(eax_2))
                            eax_2 = *(ecx_3 + 0x1c)
                            ecx_4 = *(ecx_3 + 0x20)
                            goto label_423016
                        
                        esi_3 = data_1320e58
    
    edx += 1
    edi += 0x11c
    var_8 = edx
    
    if (edi s>= &data_13130c0)
        edx = data_131278c
        break

if (data_13702a0 == 0)
    if (data_1312778 == 1)
        int32_t* ecx_6 = data_1312790
        
        if (ecx_6 != 0xffffffff)
            eax_2 = data_1312794
            
            if (ecx_6 == edx)
                eax_2 = ecx_6
            
            data_1312794 = eax_2
    
    data_1312790 = 0xffffffff
    
    if (edx != 0xffffffff)
        eax_2 = edx * 0x11c
        *(eax_2 + &data_13127dc) = 1
else
    int32_t ecx_5
    
    if (data_1312778 != 0)
        ecx_5 = data_1312790
    else
        ecx_5 = edx
        data_131277c = data_131d2cc
        eax_2 = data_1312900
        data_1312790 = ecx_5
        data_1312780 = esi_3
        data_1312784 = eax_2
        data_1312788 = 0
    
    if (edx != 0xffffffff && ecx_5 == edx)
        int32_t eax_7 = edx * 0x11c
        *(eax_7 + &data_13127dc) = 2
        return eax_7

return eax_2
