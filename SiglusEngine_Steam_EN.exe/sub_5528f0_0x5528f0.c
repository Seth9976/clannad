// 函数: sub_5528f0
// 地址: 0x5528f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = data_63ecb0 << 2
sub_4d1c30(eax_1, &data_704898, data_20c2cac, eax_1)
int32_t eax_3 = data_63ecb4 << 2
sub_4d1c30(eax_3, &data_7067d8, data_20c2cb4, eax_3)
int32_t eax_5 = data_63ecb8 << 2
sub_4d1c30(eax_5, &data_708718, data_20c2cbc, eax_5)
int32_t eax_7 = data_63ecbc << 2
sub_4d1c30(eax_7, &data_70a658, data_20c2cc4, eax_7)
int32_t eax_9 = data_63ecc0 << 2
sub_4d1c30(eax_9, &data_70c598, data_20c2ccc, eax_9)
int32_t eax_11 = data_63ecc4 << 2
sub_4d1c30(eax_11, &data_70e4d8, data_20c2cd4, eax_11)
int32_t eax_13 = data_63ecc8 << 2
sub_4d1c30(eax_13, &data_13262d0, data_20c2cdc, eax_13)
int32_t eax_15 = data_63ed14 << 2
sub_4d1c30(eax_15, &data_1328210, data_20c2cfc, eax_15)
int32_t eax_16 = data_63eccc

if (eax_16 s> 0)
    int32_t eax_17 = eax_16 << 2
    sub_4d1c30(eax_17, data_702fe0, data_20c2ce4, eax_17)

int32_t eax_18 = data_63ecd0

if (eax_18 s> 0)
    int32_t eax_19 = eax_18 << 2
    sub_4d1c30(eax_19, data_702fd4, data_20c2cec, eax_19)

int32_t hMem = data_63ecd4

if (hMem s> 0)
    hMem <<= 2
    sub_4d1c30(hMem, data_702fc8, data_20c2cf4, hMem)

int32_t i = 0
int32_t i_4 = 0

if (data_63ece0 s> 0)
    int32_t* edi_2 = data_20c2d04 + 4
    
    do
        if (*((i << 2) + &data_1353040) != 0)
            hMem = sub_4d6c40(&edi_2[-1], edi_2)
            char* ecx_12 = *((i << 2) + &data_1353040)
            char* var_8_1 = ecx_12
            
            if (ecx_12 != 0)
                int32_t esi = 0
                char* eax_20 = ecx_12
                
                if (*ecx_12 != 0)
                    do
                        ecx_12.b = *eax_20
                        
                        if (ecx_12.b u< 0x80)
                            esi += 1
                            eax_20 = &eax_20[1]
                        else if (ecx_12.b u< 0xa0)
                            if (ecx_12.b u>= 0xfe)
                                esi += 1
                                eax_20 = &eax_20[1]
                            else
                                esi += 2
                                eax_20 = &eax_20[2]
                        else if (ecx_12.b u<= 0xdf || ecx_12.b u>= 0xfe)
                            esi += 1
                            eax_20 = &eax_20[1]
                        else
                            esi += 2
                            eax_20 = &eax_20[2]
                    while (*eax_20 != 0)
                
                hMem = sub_4d6960(eax_20, edi_2, &edi_2[-1], esi + 1, "FDS_M_STR")
                sub_4d1c30(hMem, var_8_1, *edi_2, esi + 1)
                i = i_4
        
        i += 1
        edi_2 = &edi_2[2]
        i_4 = i
    while (i s< data_63ece0)

int32_t i_1 = 0
int32_t i_5 = 0

if (data_63ecf8 s> 0)
    int32_t* edi_4 = data_20c2d0c + 4
    
    do
        if (*((i_1 << 2) + &data_1354f80) != 0)
            hMem = sub_4d6c40(&edi_4[-1], edi_4)
            char* ecx_16 = *((i_1 << 2) + &data_1354f80)
            char* var_8_2 = ecx_16
            
            if (ecx_16 != 0)
                int32_t esi_2 = 0
                char* eax_21 = ecx_16
                
                if (*ecx_16 != 0)
                    do
                        ecx_16.b = *eax_21
                        
                        if (ecx_16.b u< 0x80)
                            esi_2 += 1
                            eax_21 = &eax_21[1]
                        else if (ecx_16.b u< 0xa0)
                            if (ecx_16.b u>= 0xfe)
                                esi_2 += 1
                                eax_21 = &eax_21[1]
                            else
                                esi_2 += 2
                                eax_21 = &eax_21[2]
                        else if (ecx_16.b u<= 0xdf || ecx_16.b u>= 0xfe)
                            esi_2 += 1
                            eax_21 = &eax_21[1]
                        else
                            esi_2 += 2
                            eax_21 = &eax_21[2]
                    while (*eax_21 != 0)
                
                hMem = sub_4d6960(eax_21, edi_4, &edi_4[-1], esi_2 + 1, "FDS_S_STR")
                sub_4d1c30(hMem, var_8_2, *edi_4, esi_2 + 1)
                i_1 = i_5
        
        i_1 += 1
        edi_4 = &edi_4[2]
        i_5 = i_1
    while (i_1 s< data_63ecf8)

int32_t* edi_5 = data_20c2d14
void* i_2 = &data_132a150
int32_t* var_8_3 = edi_5
void* i_6 = &data_132a150

do
    if (*i_2 != 0)
        if (*edi_5 != 0)
            int32_t eax_22 = data_1af413c
            
            if (eax_22 == 0)
            label_552bc1:
                hMem = *edi_5
                
                if (hMem != 0)
                    GlobalUnlock(hMem)
                    hMem = GlobalFree(*edi_5)
                    *edi_5 = 0
                
                goto label_552be0
            
            hMem = WaitForSingleObject(data_7027a8, 0xffffffff)
            
            if (*edi_5 == 0)
            label_552be0:
                edi_5[1] = 0
                
                if (eax_22 != 0)
                    sub_4d6500()
                    hMem = ReleaseSemaphore(data_7027a8, 1, nullptr)
            else
                hMem = sub_4d6b80(edi_5)
                
                if (hMem.b != 0)
                    goto label_552bc1
        else
            edi_5[1] = 0
        
        if (i_2 != 0)
            char* i_8 = i_2
            int32_t esi_4 = 0
            
            if (*i_6 != 0)
                do
                    void* ecx_20
                    ecx_20.b = *i_8
                    
                    if (ecx_20.b u< 0x80)
                        esi_4 += 1
                        i_8 = &i_8[1]
                    else if (ecx_20.b u< 0xa0)
                        if (ecx_20.b u>= 0xfe)
                            esi_4 += 1
                            i_8 = &i_8[1]
                        else
                            esi_4 += 2
                            i_8 = &i_8[2]
                    else if (ecx_20.b u<= 0xdf || ecx_20.b u>= 0xfe)
                        esi_4 += 1
                        i_8 = &i_8[1]
                    else
                        esi_4 += 2
                        i_8 = &i_8[2]
                while (*i_8 != 0)
            
            hMem = sub_4d6960(i_8, &edi_5[1], var_8_3, esi_4 + 1, "FDS_NAMAE_STR")
            i_2 = i_6
            sub_4d1c30(hMem, i_2, edi_5[1], esi_4 + 1)
            edi_5 = var_8_3
    
    i_2 += 0x21
    edi_5 = &edi_5[2]
    var_8_3 = edi_5
    i_6 = i_2
while (i_2 s< 0x132fbce)

int32_t* edi_6 = data_20c2d1c
void* i_3 = &data_710418
int32_t* var_c = edi_6
void* i_7 = &data_710418

do
    if (*i_3 != 0)
        if (*edi_6 != 0)
            int32_t eax_23 = data_1af413c
            
            if (eax_23 == 0)
            label_552cc5:
                hMem = *edi_6
                
                if (hMem != 0)
                    GlobalUnlock(hMem)
                    hMem = GlobalFree(*edi_6)
                    *edi_6 = 0
                
                goto label_552ce4
            
            hMem = WaitForSingleObject(data_7027a8, 0xffffffff)
            
            if (*edi_6 == 0)
            label_552ce4:
                edi_6[1] = 0
                
                if (eax_23 != 0)
                    sub_4d6500()
                    hMem = ReleaseSemaphore(data_7027a8, 1, nullptr)
            else
                hMem = sub_4d6b80(edi_6)
                
                if (hMem.b != 0)
                    goto label_552cc5
        else
            edi_6[1] = 0
        
        if (i_3 != 0)
            char* i_9 = i_3
            int32_t esi_6 = 0
            
            if (*i_7 != 0)
                do
                    void* ecx_24
                    ecx_24.b = *i_9
                    
                    if (ecx_24.b u< 0x80)
                        esi_6 += 1
                        i_9 = &i_9[1]
                    else if (ecx_24.b u< 0xa0)
                        if (ecx_24.b u>= 0xfe)
                            esi_6 += 1
                            i_9 = &i_9[1]
                        else
                            esi_6 += 2
                            i_9 = &i_9[2]
                    else if (ecx_24.b u<= 0xdf || ecx_24.b u>= 0xfe)
                        esi_6 += 1
                        i_9 = &i_9[1]
                    else
                        esi_6 += 2
                        i_9 = &i_9[2]
                while (*i_9 != 0)
            
            hMem = sub_4d6960(i_9, &edi_6[1], var_c, esi_6 + 1, "FDS_LNAMAE_STR")
            i_3 = i_7
            sub_4d1c30(hMem, i_3, edi_6[1], esi_6 + 1)
            edi_6 = var_c
    
    i_3 += 0x21
    edi_6 = &edi_6[2]
    var_c = edi_6
    i_7 = i_3
while (i_3 s< 0x715e96)

return hMem
