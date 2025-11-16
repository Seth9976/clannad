// 函数: sub_4cfee0
// 地址: 0x4cfee0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
char* esi = arg4
int32_t* eax = arg3

if (esi == 0)
    return 0

int32_t ebx = 0
char* edx = esi

if (*esi != 0)
    do
        arg3.b = *edx
        
        if (arg3.b u< 0xa1 || arg3.b u> 0xdf)
            if (arg3.b u< 0x80)
            label_4cfff4:
                
                if ((arg3.b u>= 0x61 && arg3.b u<= 0x7a) || (arg3.b u>= 0x41 && arg3.b u<= 0x5a))
                    ebx += 2
                else if (arg3.b u< 0x30)
                    if (arg3.b == 0x20 || arg3.b == 0x7e || arg3.b == 0x5f || arg3.b == 0x2b
                            || arg3.b == 0x2d || arg3.b == 0x2a || arg3.b == 0x2f || arg3.b == 0x25
                            || arg3.b == 0x23 || arg3.b == 0x40 || arg3.b == 0x24 || arg3.b == 0x3a
                            || arg3.b == 0x3b || arg3.b == 0x2e || zx.d(arg3.b) == 0xffffffde
                            || arg3.b == 0x22 || arg3.b == 0x21 || arg3.b == 0x3f || arg3.b == 0x3c
                            || arg3.b == 0x3e || arg3.b == 0x5b || arg3.b == 0x5d || arg3.b == 0x7b
                            || arg3.b == 0x7d || arg3.b == 0x27 || arg3.b == 0x5c)
                        ebx += 2
                    else
                        ebx += 1
                else if (arg3.b u<= 0x39 || arg3.b == 0x20 || arg3.b == 0x7e || arg3.b == 0x5f
                        || arg3.b == 0x2b || arg3.b == 0x2d || arg3.b == 0x2a || arg3.b == 0x2f
                        || arg3.b == 0x25 || arg3.b == 0x23 || arg3.b == 0x40 || arg3.b == 0x24
                        || arg3.b == 0x3a || arg3.b == 0x3b || arg3.b == 0x2e
                        || zx.d(arg3.b) == 0xffffffde || arg3.b == 0x22 || arg3.b == 0x21
                        || arg3.b == 0x3f || arg3.b == 0x3c || arg3.b == 0x3e || arg3.b == 0x5b
                        || arg3.b == 0x5d || arg3.b == 0x7b || arg3.b == 0x7d || arg3.b == 0x27
                        || arg3.b == 0x5c)
                    ebx += 2
                else
                    ebx += 1
                
                edx = &edx[1]
            else if (arg3.b u< 0xa0)
                if (arg3.b u>= 0xfe)
                    goto label_4cfff4
                
                edx = &edx[2]
                ebx += 2
            else
                if (arg3.b u<= 0xdf || arg3.b u>= 0xfe)
                    goto label_4cfff4
                
                edx = &edx[2]
                ebx += 2
        else
            bool cond:1_1
            
            if (arg3.b == 0xb6 || arg3.b == 0xb7 || arg3.b == 0xb8 || arg3.b == 0xb9
                    || arg3.b == 0xba || arg3.b == 0xbb || arg3.b == 0xbc || arg3.b == 0xbd
                    || arg3.b == 0xbe || arg3.b == 0xbf || arg3.b == 0xc0 || arg3.b == 0xc1
                    || arg3.b == 0xc2 || arg3.b == 0xc3 || arg3.b == 0xc4 || arg3.b == 0xb3)
                cond:1_1 = edx[1] != 0xde
            label_4cffa9:
                
                if (cond:1_1)
                    edx = &edx[1]
                    ebx += 2
                else
                    edx = &edx[2]
                    ebx += 2
            else if (arg3.b == 0xca || arg3.b == 0xcb || arg3.b == 0xcc || arg3.b == 0xcd
                    || arg3.b == 0xce)
                arg3.b = edx[1]
                
                if (arg3.b != 0xde)
                    cond:1_1 = arg3.b != 0xdf
                    goto label_4cffa9
                
                edx = &edx[2]
                ebx += 2
            else
                edx = &edx[1]
                ebx += 2
    while (*edx != 0)

uint32_t ecx_1
uint32_t edx_2
ecx_1, edx_2 = sub_4d6960(eax, arg2, eax, ebx + 1, "Han to Zen")
char* eax_3 = *arg2

while (*esi != 0)
    edx_2.b = *esi
    
    if (edx_2.b u< 0xa1 || edx_2.b u> 0xdf)
        if (edx_2.b u< 0x80)
        label_4d020b:
            
            if (edx_2.b u>= 0x61 && edx_2.b u<= 0x7a)
                edx_2 = zx.d(edx_2.b)
                *eax_3 = *((edx_2 << 1) + &data_63e976)
                eax_3[1] = *((edx_2 << 1) + &data_63e977)
                eax_3 = &eax_3[2]
                esi = &esi[1]
            else if (edx_2.b u>= 0x41 && edx_2.b u<= 0x5a)
                edx_2 = zx.d(edx_2.b)
                *eax_3 = *((edx_2 << 1) + &data_63e876)
                eax_3[1] = *((edx_2 << 1) + &data_63e877)
                eax_3 = &eax_3[2]
                esi = &esi[1]
            else if (edx_2.b u>= 0x30 && edx_2.b u<= 0x39)
                edx_2 = zx.d(edx_2.b)
                *eax_3 = *((edx_2 << 1) + &data_63e7e8)
                eax_3[1] = *((edx_2 << 1) + &data_63e7e9)
                eax_3 = &eax_3[2]
                esi = &esi[1]
            else if (edx_2.b != 0x20)
                if (edx_2.b == 0x7e)
                    *eax_3 = 0x6081
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x5f)
                    *eax_3 = 0x5181
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x2b)
                    *eax_3 = 0x7b81
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x2d)
                    *eax_3 = 0x7c81
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x2a)
                    *eax_3 = 0x9681
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x2f)
                    *eax_3 = 0x5e81
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x25)
                    *eax_3 = 0x9381
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x23)
                    *eax_3 = 0x9481
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x40)
                    *eax_3 = 0x9781
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x24)
                    *eax_3 = 0x9081
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x3a)
                    *eax_3 = 0x4681
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x3b)
                    *eax_3 = 0x4781
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x2e)
                    *eax_3 = 0x4481
                    eax_3 = &eax_3[2]
                else if (zx.d(edx_2.b) == 0xffffffde)
                    *eax_3 = 0x4a81
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x22)
                    *eax_3 = 0x6881
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x21)
                    *eax_3 = 0x4981
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x3f)
                    *eax_3 = 0x4881
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x3c)
                    *eax_3 = 0x8381
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x3e)
                    *eax_3 = 0x8481
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x5b)
                    *eax_3 = 0x7981
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x5d)
                    *eax_3 = 0x7a81
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x7b)
                    *eax_3 = 0x6f81
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x7d)
                    *eax_3 = 0x7081
                    eax_3 = &eax_3[2]
                else if (edx_2.b == 0x27)
                    *eax_3 = 0x6681
                    eax_3 = &eax_3[2]
                else if (edx_2.b != 0x5c)
                    *eax_3 = edx_2.b
                    eax_3 = &eax_3[1]
                else
                    *eax_3 = 0x8f81
                    eax_3 = &eax_3[2]
                
                esi = &esi[1]
            else
                *eax_3 = 0x4081
                eax_3 = &eax_3[2]
                esi = &esi[1]
        else
            if (edx_2.b u< 0xa0)
                if (edx_2.b u>= 0xfe)
                    goto label_4d020b
                
                goto label_4d01f8
            
            if (edx_2.b u<= 0xdf || edx_2.b u>= 0xfe)
                goto label_4d020b
            
        label_4d01f8:
            *eax_3 = edx_2.b
            ecx_1.b = esi[1]
            eax_3[1] = ecx_1.b
            eax_3 = &eax_3[2]
            esi = &esi[2]
    else if (edx_2.b == 0xb6 || edx_2.b == 0xb7 || edx_2.b == 0xb8 || edx_2.b == 0xb9
            || edx_2.b == 0xba || edx_2.b == 0xbb || edx_2.b == 0xbc || edx_2.b == 0xbd
            || edx_2.b == 0xbe || edx_2.b == 0xbf || edx_2.b == 0xc0 || edx_2.b == 0xc1
            || edx_2.b == 0xc2 || edx_2.b == 0xc3 || edx_2.b == 0xc4 || edx_2.b == 0xb3)
        edx_2 = zx.d(edx_2.b)
        
        if (esi[1] != 0xde)
            goto label_4d0176
        
    label_4d01cc:
        *eax_3 = *((edx_2 << 1) + &data_63ea36)
        eax_3[1] = *((edx_2 << 1) + &data_63ea37)
        eax_3 = &eax_3[2]
        esi = &esi[2]
    else if (edx_2.b == 0xca || edx_2.b == 0xcb || edx_2.b == 0xcc || edx_2.b == 0xcd
            || edx_2.b == 0xce)
        ecx_1.b = esi[1]
        edx_2 = zx.d(edx_2.b)
        
        if (ecx_1.b == 0xde)
            goto label_4d01cc
        
        if (ecx_1.b != 0xdf)
            goto label_4d0176
        
        *eax_3 = *((edx_2 << 1) + &data_63e9b6)
        eax_3[1] = *((edx_2 << 1) + &data_63e9b7)
        eax_3 = &eax_3[2]
        esi = &esi[2]
    else
        edx_2 = zx.d(edx_2.b)
    label_4d0176:
        *eax_3 = *((edx_2 << 1) + &data_63eab6)
        eax_3[1] = *((edx_2 << 1) + &data_63eab7)
        eax_3 = &eax_3[2]
        esi = &esi[1]

ecx_1.b = *esi
*eax_3 = ecx_1.b
return ebx + 1
