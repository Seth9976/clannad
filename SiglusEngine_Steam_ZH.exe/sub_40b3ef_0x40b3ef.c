// 函数: sub_40b3ef
// 地址: 0x40b3ef
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* eax = arg1
int32_t ebx
int32_t var_8 = ebx
void* ecx
ecx.w = *eax
int32_t edi
int32_t var_10 = edi
int32_t edi_1 = 0
int32_t esi = 0
uint32_t edx

if (ecx.w != 0xff)
    edx = ecx
    ecx = &eax[3]
    
    do
        if (edx.w != 0)
            return 0x8876086c
        
        ebx.b = *(ecx - 2)
        
        if (ebx.b u> 7)
            return 0x8876086c
        
        if (esi != zx.d(*(ecx - 4)))
            return 0x8876086c
        
        if (*(ecx - 1) u> 5)
            return 0x8876086c
        
        uint32_t edx_1
        edx_1.b = *ecx
        
        if (edx_1.b u> 5 && edx_1.b != 9 && edx_1.b != 0xa)
            return 0x8876086c
        
        if (edx_1.b == 0xa && *(ecx + 1) u> 1)
            return 0x8876086c
        
        ecx += 8
        esi += zx.d(*(zx.d(ebx.b) + 0xab6978))
        edx.w = *(ecx - 6)
    while (edx.w != 0xff)

ecx.b = eax[3].b

if (ecx.b != 0)
    if (ecx.b == 9 && eax[2].b == 3)
        edi_1 = 4
        eax = &eax[4]
else if (eax[2].b == 2)
    eax = &eax[4]
    int32_t ecx_1 = 0
    
    if (eax[3].b == 1)
        edx.b = eax[2].b
        
        if (edx.b u<= 3)
            ecx_1 = zx.d(edx.b) + 1
            eax = &eax[4]
    
    if (eax[3].b == 2)
        if (eax[2].b == 5)
            ecx_1 += 1
            edi_1 = 0x1000
            eax = &eax[4]
        
        if (eax[3].b == 2 && eax[2].b == 4)
            edi_1 |= 0x8000
            ecx_1 += 1
            eax = &eax[4]
    
    switch (ecx_1)
        case 0
            edi_1 |= 2
        case 1
            edi_1 |= 6
        case 2
            edi_1 |= 8
        case 3
            edi_1 |= 0xa
        case 4
            edi_1 |= 0xc
        case 5
            edi_1 |= 0xe

void* i = 0x10

if (eax[3].b == 3 && eax[2].b == 2)
    edi_1 |= 0x10
    eax = &eax[4]

if (eax[3].b == 4 && eax[2].b == 0)
    edi_1 |= 0x20
    eax = &eax[4]

if (eax[3].b == 0xa)
    if (*(eax + 7) == 0 && eax[2].b == 4)
        edi_1 |= 0x40
        eax = &eax[4]
    
    if (eax[3].b == 0xa && *(eax + 7) == 1 && eax[2].b == 4)
        edi_1 |= 0x80
        eax = &eax[4]

int32_t edx_3 = 0

do
    ecx.b = eax[3].b
    
    if (ecx.b != 5)
        break
    
    if (eax[2].b != 0 || zx.d(*(eax + 7)) != edx_3)
        if (ecx.b != 5)
            break
        
        if (eax[2].b != 1 || zx.d(*(eax + 7)) != edx_3)
            if (ecx.b != 5)
                break
            
            if (eax[2].b != 2 || zx.d(*(eax + 7)) != edx_3)
                if (ecx.b != 5)
                    break
                
                if (eax[2].b != 3)
                    break
                
                if (zx.d(*(eax + 7)) != edx_3)
                    break
                
                edi_1 |= 2 << i.b
            else
                edi_1 |= 1 << i.b
    else
        edi_1 |= 3 << i.b
    
    eax = &eax[4]
    edx_3 += 1
    i += 2
while (i u< 0x20)

if (*eax != 0xff)
    return 0x8876086c

*arg2 = edx_3 << 8 | edi_1
return 0
