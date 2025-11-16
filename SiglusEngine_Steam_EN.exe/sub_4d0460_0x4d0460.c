// 函数: sub_4d0460
// 地址: 0x4d0460
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edi = arg4
int32_t* eax = arg3
int32_t* var_c = eax

if (edi == 0)
    return 0

void* edx = nullptr
char* esi = edi

if (*edi != 0)
    do
        eax.b = *esi
        
        if (eax.b u< 0x80)
            edx += 1
            esi = &esi[1]
        else if (eax.b u< 0xa0)
            if (eax.b u< 0xfe)
                goto label_4d04c2
            
            edx += 1
            esi = &esi[1]
        else if (eax.b u<= 0xdf || eax.b u>= 0xfe)
            edx += 1
            esi = &esi[1]
        else
        label_4d04c2:
            uint32_t ecx_1 = zx.d(zx.w(eax.b) << 8) | zx.d(esi[1])
            
            if ((ecx_1 + 0x7cc0).w u> 0x56)
                if ((ecx_1 + 0x7d7f).w u<= 0x19)
                    edx += 1
                    esi = &esi[2]
                else if ((ecx_1 + 0x7da0).w u<= 0x19)
                    edx += 1
                    esi = &esi[2]
                else if ((ecx_1 + 0x7db1).w u<= 9)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8142)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8175)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8176)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8141)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8145)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x815b)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x814a)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x814b)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8140)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8160)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8151)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x817b)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x817c)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8196)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x815e)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8193)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8194)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8197)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8190)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8146)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8147)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8144)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8168)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8149)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8148)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8183)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8184)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8179)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x817a)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x816f)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8170)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w == 0x8166)
                    edx += 1
                    esi = &esi[2]
                else if (ecx_1.w != 0x818f)
                    edx += 2
                    esi = &esi[2]
                else
                    edx += 1
                    esi = &esi[2]
            else if (ecx_1.w == 0x834b || ecx_1.w == 0x834d || ecx_1.w == 0x834f
                    || ecx_1.w == 0x8351 || ecx_1.w == 0x8353 || ecx_1.w == 0x8355
                    || ecx_1.w == 0x8357 || ecx_1.w == 0x8359 || ecx_1.w == 0x835b
                    || ecx_1.w == 0x835d || ecx_1.w == 0x835f || ecx_1.w == 0x8361
                    || ecx_1.w == 0x8364 || ecx_1.w == 0x8366 || ecx_1.w == 0x8368
                    || ecx_1.w == 0x836f || ecx_1.w == 0x8372 || ecx_1.w == 0x8375
                    || ecx_1.w == 0x8378 || ecx_1.w == 0x837b || ecx_1.w == 0x8394
                    || ecx_1.w == 0x8370 || ecx_1.w == 0x8373 || ecx_1.w == 0x8376
                    || ecx_1.w == 0x82d8 || ecx_1.w == 0x837c || ecx_1.w == 0x838e
                    || ecx_1.w == 0x8390 || ecx_1.w == 0x8391 || ecx_1.w == 0x8395
                    || ecx_1.w == 0x8396)
                edx += 2
                esi = &esi[2]
            else
                edx += 1
                esi = &esi[2]
    while (*esi != 0)
    
    edi = arg4
    eax = var_c

sub_4d6960(eax, arg2, eax, edx + 1, "Zen to Han")
char* eax_3 = *arg2
int16_t ecx_3

while (*edi != 0)
    BOOL* ebx
    ebx.b = *edi
    
    if (ebx.b u< 0x80)
    label_4d0e6b:
        *eax_3 = ebx.b
        eax_3 = &eax_3[1]
        edi = &edi[1]
    else
        if (ebx.b u< 0xa0)
            if (ebx.b u>= 0xfe)
                goto label_4d0e6b
        else if (ebx.b u<= 0xdf || ebx.b u>= 0xfe)
            goto label_4d0e6b
        
        uint32_t edx_4 = zx.d(zx.w(ebx.b) << 8) | zx.d(edi[1])
        
        if (edx_4.w + 0x7cc0 u> 0x56)
            if (edx_4.w + 0x7d7f u<= 0x19)
                ecx_3.b = *(edx_4 + 0x608c1f)
                *eax_3 = ecx_3.b
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w + 0x7da0 u<= 0x19)
                ecx_3.b = *(edx_4 + 0x608c20)
                *eax_3 = ecx_3.b
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w + 0x7db1 u<= 9)
                ecx_3.b = *(edx_4 + 0x608c21)
                *eax_3 = ecx_3.b
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8142)
                *eax_3 = 0xa1
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8175)
                *eax_3 = 0xa2
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8176)
                *eax_3 = 0xa3
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8141)
                *eax_3 = 0xa4
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8145)
                *eax_3 = 0xa5
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x815b)
                *eax_3 = 0xb0
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x814a)
                *eax_3 = 0xde
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x814b)
                *eax_3 = 0xdf
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8140)
                *eax_3 = 0x20
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8160)
                *eax_3 = 0x7e
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8151)
                *eax_3 = 0x5f
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x817b)
                *eax_3 = 0x2b
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x817c)
                *eax_3 = 0x2d
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8196)
                *eax_3 = 0x2a
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x815e)
                *eax_3 = 0x2f
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8193)
                *eax_3 = 0x25
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8194)
                *eax_3 = 0x23
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8197)
                *eax_3 = 0x40
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8190)
                *eax_3 = 0x24
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8146)
                *eax_3 = 0x3a
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8147)
                *eax_3 = 0x3b
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8144)
                *eax_3 = 0x2e
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8168)
                *eax_3 = 0x22
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8149)
                *eax_3 = 0x21
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8148)
                *eax_3 = 0x3f
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8183)
                *eax_3 = 0x3c
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8184)
                *eax_3 = 0x3e
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8179)
                *eax_3 = 0x5b
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x817a)
                *eax_3 = 0x5d
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x816f)
                *eax_3 = 0x7b
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w == 0x8170)
                *eax_3 = 0x7d
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else if (edx_4.w != 0x8166)
                if (edx_4.w != 0x818f)
                    goto label_4d0b0e
                
                *eax_3 = 0x5c
                eax_3 = &eax_3[1]
                edi = &edi[2]
            else
                *eax_3 = 0x27
                eax_3 = &eax_3[1]
                edi = &edi[2]
        else if (edx_4.w == 0x834b || edx_4.w == 0x834d || edx_4.w == 0x834f || edx_4.w == 0x8351
                || edx_4.w == 0x8353 || edx_4.w == 0x8355 || edx_4.w == 0x8357 || edx_4.w == 0x8359
                || edx_4.w == 0x835b || edx_4.w == 0x835d || edx_4.w == 0x835f || edx_4.w == 0x8361
                || edx_4.w == 0x8364 || edx_4.w == 0x8366 || edx_4.w == 0x8368 || edx_4.w == 0x836f
                || edx_4.w == 0x8372 || edx_4.w == 0x8375 || edx_4.w == 0x8378 || edx_4.w == 0x837b
                || edx_4.w == 0x8394)
            ecx_3.b = *(edx_4 + 0x608b80)
            *eax_3 = ecx_3.b
            eax_3[1] = 0xde
            eax_3 = &eax_3[2]
            edi = &edi[2]
        else if (edx_4.w == 0x8370 || edx_4.w == 0x8373 || edx_4.w == 0x8376 || edx_4.w == 0x82d8
                || edx_4.w == 0x837c)
            ecx_3.b = *(edx_4 + 0x608b80)
            *eax_3 = ecx_3.b
            eax_3[1] = 0xdf
            eax_3 = &eax_3[2]
            edi = &edi[2]
        else if (edx_4.w == 0x838e || edx_4.w == 0x8390 || edx_4.w == 0x8391 || edx_4.w == 0x8395
            || edx_4.w == 0x8396)
        label_4d0b0e:
            *eax_3 = ebx.b
            ecx_3.b = edi[1]
            eax_3[1] = ecx_3.b
            eax_3 = &eax_3[2]
            edi = &edi[2]
        else
            ecx_3.b = *(edx_4 + 0x608b80)
            *eax_3 = ecx_3.b
            eax_3 = &eax_3[1]
            edi = &edi[2]

ecx_3.b = *edi
*eax_3 = ecx_3.b
return edx + 1
