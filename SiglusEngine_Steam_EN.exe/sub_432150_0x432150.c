// 函数: sub_432150
// 地址: 0x432150
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx

if (data_1392cc0 != 0)
    data_702fc0 = 0
else if (data_1392cbc == 0)
    int32_t eax_1
    eax_1.b = data_1392cb8 != 0
    data_702fc0 = eax_1
else
    data_702fc0 = 1

void* i = &data_108f398
data_108f320.o = (*U"\n\n\n\n")[4].o
__builtin_memcpy(&data_108f350, 
    "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
data_7031bc = 0x100
data_108f330 = 0
data_108f334 = 0x40
data_108f33c = 0
data_108f340 = 1
data_108f344 = 1
__builtin_memset(&data_108f370, 0, 0x24)

do
    *(i - 4) = 0
    *i = 0
    *(i + 4) = 0
    *(i + 8) = 0xffffffff
    *(i + 0xc) = 0xffffffff
    *(i + 0x10) = 0xffffffff
    *(i + 0x14) = 0xffffffff
    i += 0x1c
while (i s< &data_108f478)

__builtin_memset(&data_108f474, 0, 0x18)
char const* const edx = "VisualArts"
void* ecx_1 = &data_108f5cc

do
    i.b = *edx
    
    if (i.b u< 0x80)
    label_4322c2:
        *ecx_1 = i.b
        ecx_1 += 1
        edx = &edx[1]
    else
        if (i.b u< 0xa0)
            if (i.b u>= 0xfe)
                goto label_4322c2
        else if (i.b u<= 0xdf || i.b u>= 0xfe)
            goto label_4322c2
        
        *ecx_1 = i.b
        i.b = edx[1]
        *(ecx_1 + 1) = i.b
        ecx_1 += 2
        edx = &edx[2]
while (*edx != 0)

*ecx_1 = 0
char const* const edx_1 = "VAS\PRODUCT"
data_108f64c = 1
char* ecx_2 = &data_108f654
data_108f650 = 0xd

do
    i.b = *edx_1
    
    if (i.b u< 0x80)
    label_432312:
        *ecx_2 = i.b
        ecx_2 = &ecx_2[1]
        edx_1 = &edx_1[1]
    else
        if (i.b u< 0xa0)
            if (i.b u>= 0xfe)
                goto label_432312
        else if (i.b u<= 0xdf || i.b u>= 0xfe)
            goto label_432312
        
        *ecx_2 = i.b
        i.b = edx_1[1]
        ecx_2[1] = i.b
        ecx_2 = &ecx_2[2]
        edx_1 = &edx_1[2]
while (*edx_1 != 0)

*ecx_2 = 0
char const* const edx_2 = "DISKMARK.ENV"
void* ecx_3 = &data_108f85c

do
    i.b = *edx_2
    
    if (i.b u< 0x80)
    label_43234a:
        *ecx_3 = i.b
        ecx_3 += 1
        edx_2 = &edx_2[1]
    else
        if (i.b u< 0xa0)
            if (i.b u>= 0xfe)
                goto label_43234a
        else if (i.b u<= 0xdf || i.b u>= 0xfe)
            goto label_43234a
        
        *ecx_3 = i.b
        i.b = edx_2[1]
        *(ecx_3 + 1) = i.b
        ecx_3 += 2
        edx_2 = &edx_2[2]
while (*edx_2 != 0)

int32_t ebx
int32_t var_c = ebx
*ecx_3 = 0
void* i_1 = &data_108fa8c
data_108fa64 = 0
int32_t edi = 0

do
    char* edx_3 = *(edi + &data_611520)
    void* ecx_4 = i_1 - 0x24
    void* eax_2
    
    if (i_1 != 0x24 && edx_3 != 0)
        eax_2.b = *edx_3
        
        while (eax_2.b != 0)
            if (eax_2.b u< 0x80)
            label_4323b0:
                *ecx_4 = eax_2.b
                ecx_4 += 1
                edx_3 = &edx_3[1]
            else
                if (eax_2.b u< 0xa0)
                    if (eax_2.b u>= 0xfe)
                        goto label_4323b0
                else if (eax_2.b u<= 0xdf || eax_2.b u>= 0xfe)
                    goto label_4323b0
                
                *ecx_4 = eax_2.b
                eax_2.b = edx_3[1]
                *(ecx_4 + 1) = eax_2.b
                ecx_4 += 2
                edx_3 = &edx_3[2]
            
            eax_2.b = *edx_3
        
        *ecx_4 = 0
    
    char* edx_4 = *(edi + &data_6114c0)
    void* i_32 = i_1
    
    if (i_1 != 0 && edx_4 != 0)
        eax_2.b = *edx_4
        
        while (eax_2.b != 0)
            if (eax_2.b u< 0x80)
            label_4323f3:
                *i_32 = eax_2.b
                i_32 += 1
                edx_4 = &edx_4[1]
            else
                if (eax_2.b u< 0xa0)
                    if (eax_2.b u>= 0xfe)
                        goto label_4323f3
                else if (eax_2.b u<= 0xdf || eax_2.b u>= 0xfe)
                    goto label_4323f3
                
                *i_32 = eax_2.b
                eax_2.b = edx_4[1]
                *(i_32 + 1) = eax_2.b
                i_32 += 2
                edx_4 = &edx_4[2]
            
            eax_2.b = *edx_4
        
        *i_32 = 0
    
    *(i_1 + 0x24) = 0
    edi += 4
    i_1 += 0x4c
while (i_1 s< &data_108feb4)

void* eax_3 = &data_109000c
data_108fe90 = data_624940
int32_t i_33 = 0x40
data_108fab0 = 1
data_108fe40 = 1
data_108f34c = 1
__builtin_memset(&data_108fea0, 0xff, 0x14)
data_108feb4 = 1
int32_t i_2

do
    *(eax_3 - 0x28) = 0
    eax_3 += 0x2c
    *(eax_3 - 0x30) = 8
    *(eax_3 - 0x2c) = 0x3e8
    i_2 = i_33
    i_33 -= 1
while (i_2 != 1)
data_12a2964 = 0x64
int32_t i_3 = 0
data_12a2968 = 0x64
data_12a296c = 0xa0
data_12a2970 = 0xc8
data_12a2974 = i_33
data_12a2978 = i_33

do
    *((i_3 << 2) + &data_108f48c) = 0
    *((i_3 << 2) + &data_108f50c) = 0
    (&data_108f58c)[i_3] = 1
    (&data_108f5ac)[i_3] = 0xff
    i_3 += 1
while (i_3 s< 0x20)

bool cond:0 = data_13926fc s< 0x320
int128_t xmm0_2 = data_6248c0
data_12ff24c = 5
data_12a297c = 1
data_12a2980.o = xmm0_2
int32_t edx_5

if (cond:0 || data_13926f8 s< 0x258)
    edx_5 = 0
else
    edx_5 = 1

int32_t* k_2 = &data_1090ae4
int32_t i_38 = 0x40
int32_t i_4

do
    sub_431d40(k_2, edx_5)
    k_2 = &k_2[0x75]
    i_4 = i_38
    i_38 -= 1
while (i_4 != 1)
void* eax_4 = &data_109a7e4
void* i_5 = &data_12997e4
void* var_8_1 = &data_109a7e4
int32_t j_4

do
    *i_5 = 0
    void* edx_6 = eax_4
    j_4 = 8
    int32_t j
    
    do
        *edx_6 = 0
        void* eax_5 = edx_6 + 0x7c
        *(edx_6 + 0x24) = 0
        void* ecx_6 = edx_6 + 0x2fc
        *(edx_6 + 0x48) = 0
        int32_t k = 0
        *(edx_6 + 0x6c) = 0
        *(edx_6 + 0x70) = 0
        *(edx_6 + 0x74) = 0
        *(edx_6 + 0x78) = 0
        
        do
            *(eax_5 + 4) = k
            eax_5 += 0x14
            *(eax_5 - 0xc) = k
            ecx_6 += 0x14
            *(eax_5 - 0x14) = 0
            k += 8
            *(eax_5 - 8) = 0
            *(eax_5 - 4) = 0
            *(ecx_6 - 0x14) = 0xffffffff
            *(ecx_6 - 0x10) = 0
            *(ecx_6 - 0xc) = 0
            *(ecx_6 - 8) = 0
            *(ecx_6 - 4) = 0
        while (k s< 0x100)
        
        *(edx_6 + 0x57c) = 0
        void* eax_6 = edx_6 + 0x708
        *(edx_6 + 0x5a0) = 0
        k_2 = 8
        *(edx_6 + 0x5c4) = 0
        *(edx_6 + 0x5e8) = 0
        *(edx_6 + 0x60c) = 0
        *(edx_6 + 0x630) = 0
        *(edx_6 + 0x654) = 0
        *(edx_6 + 0x678) = 0
        *(edx_6 + 0x69c) = 0
        *(edx_6 + 0x6c0) = 0
        int32_t* k_1
        
        do
            *(eax_6 - 0x24) = 0
            eax_6 += 0x120
            *(eax_6 - 0x120) = 0
            *(eax_6 - 0xfc) = 0
            *(eax_6 - 0xd8) = 0
            *(eax_6 - 0xb4) = 0
            *(eax_6 - 0x90) = 0
            *(eax_6 - 0x6c) = 0
            *(eax_6 - 0x48) = 0
            k_1 = k_2
            k_2 -= 1
        while (k_1 != 1)
        *(edx_6 + 0xfec) = k_2
        *(edx_6 + 0xff0) = k_2
        *(edx_6 + 0xff4) = k_2
        edx_6 += 0xff8
        j = j_4
        j_4 -= 1
    while (j != 1)
    i_5 += 4
    eax_4 = var_8_1 + 0x7fc0
    var_8_1 = eax_4
while (i_5 s< &data_12998e4)

data_129a980 = j_4
void* const edx_7 = &data_614540
data_129a984 = j_4
void* ecx_7 = &data_129a98c
data_129a988 = j_4

do
    eax_4.b = *edx_7
    
    if (eax_4.b u< 0x80)
    label_432702:
        *ecx_7 = eax_4.b
        ecx_7 += 1
        edx_7 += 1
    else
        if (eax_4.b u< 0xa0)
            if (eax_4.b u>= 0xfe)
                goto label_432702
        else if (eax_4.b u<= 0xdf || eax_4.b u>= 0xfe)
            goto label_432702
        
        *ecx_7 = eax_4.b
        eax_4.b = *(edx_7 + 1)
        *(ecx_7 + 1) = eax_4.b
        ecx_7 += 2
        edx_7 += 2
while (*edx_7 != 0)

*ecx_7 = 0
int32_t i_39 = 8
void* ecx_8 = &data_129aad8
int32_t j_3
int32_t i_6

do
    *(ecx_8 - 0x4c) = 0
    void* eax_8 = ecx_8 + 0x1c
    *(ecx_8 - 0x28) = 0
    int32_t j_1 = 0
    *ecx_8 = 0
    *(ecx_8 + 4) = 0
    *(ecx_8 - 4) = 1
    *(ecx_8 + 8) = 0xc8
    *(ecx_8 + 0xc) = 0
    *(ecx_8 + 0x10) = 0
    *(ecx_8 + 0x14) = 0
    
    do
        *eax_8 = j_1
        eax_8 += 0x14
        *(eax_8 - 0x10) = j_1
        j_1 += 8
        *(eax_8 - 0x18) = 0
        *(eax_8 - 0xc) = 0
        *(eax_8 - 8) = 0
        *(eax_8 + 0x268) = 0
        *(eax_8 + 0x26c) = 0
        *(eax_8 + 0x270) = 0
    while (j_1 s< 0x100)
    
    *(ecx_8 + 0x518) = 0
    void* eax_9 = ecx_8 + 0x6a4
    *(ecx_8 + 0x53c) = 0
    j_3 = 8
    *(ecx_8 + 0x560) = 0
    *(ecx_8 + 0x584) = 0
    *(ecx_8 + 0x5a8) = 0
    *(ecx_8 + 0x5cc) = 0
    *(ecx_8 + 0x5f0) = 0
    *(ecx_8 + 0x614) = 0
    *(ecx_8 + 0x638) = 0
    *(ecx_8 + 0x65c) = 0
    int32_t j_2
    
    do
        *(eax_9 - 0x24) = 0
        eax_9 += 0x120
        *(eax_9 - 0x120) = 0
        *(eax_9 - 0xfc) = 0
        *(eax_9 - 0xd8) = 0
        *(eax_9 - 0xb4) = 0
        *(eax_9 - 0x90) = 0
        *(eax_9 - 0x6c) = 0
        *(eax_9 - 0x48) = 0
        j_2 = j_3
        j_3 -= 1
    while (j_2 != 1)
    ecx_8 += 0xfcc
    i_6 = i_39
    i_39 -= 1
while (i_6 != 1)
void* eax_10 = &data_109802c
int32_t i_34 = j_3 + 0x20
int32_t i_7

do
    *(eax_10 - 0x48) = 0
    eax_10 += 0x10c
    *(eax_10 - 0x130) = 0
    __builtin_memset(eax_10 - 0x10c, 0, 0x1c)
    *(eax_10 - 0xf0) = 0x18
    __builtin_memset(eax_10 - 0xec, 0, 0x1c)
    *(eax_10 - 0xd0) = 0xffffffff
    *(eax_10 - 0xcc) = 0
    *(eax_10 - 0xc8) = 1
    *(eax_10 - 0xc4) = 0xffffffff
    *(eax_10 - 0xc0) = 0
    *(eax_10 - 0xbc) = 0
    *(eax_10 - 0xb8) = 0xffffffff
    *(eax_10 - 0xb4) = 0
    *(eax_10 - 0x60) = 0
    *(eax_10 - 0x5c) = 0x1f4
    *(eax_10 - 0x58) = 0
    *(eax_10 - 0x54) = 0x1f4
    *(eax_10 - 0x50) = 0
    *(eax_10 - 0x4c) = 0x1f4
    *(eax_10 - 0xb0) = 0
    *(eax_10 - 0xac) = 0
    *(eax_10 - 0xa8) = 0
    *(eax_10 - 0xa4) = 0xff
    *(eax_10 - 0xa0) = 0
    *(eax_10 - 0x9c) = 0
    *(eax_10 - 0x98) = 0
    *(eax_10 - 0x94) = 0
    *(eax_10 - 0x90) = 0xff
    *(eax_10 - 0x8c) = 0
    *(eax_10 - 0x88) = 0
    *(eax_10 - 0x84) = 0
    *(eax_10 - 0x80) = 0
    *(eax_10 - 0x7c) = 0xff
    *(eax_10 - 0x78) = 0
    *(eax_10 - 0x74) = 0
    *(eax_10 - 0x70) = 0
    *(eax_10 - 0x6c) = 0
    *(eax_10 - 0x68) = 0xff
    *(eax_10 - 0x64) = 0
    i_7 = i_34
    i_34 -= 1
while (i_7 != 1)
int32_t i_37 = 8
data_1299910.o = data_624890
data_1299920.o = zx.o(0)
data_1299930.o = data_6249a0
data_1299980 = data_6248e0
int128_t xmm0_6 = data_624920
data_12998e4 = i_34.b
data_1299908 = i_34
data_129990c = i_34
data_1299944 = i_34
data_1299958 = i_34
data_1299978 = i_34
data_129997c = i_34
void* ecx_10 = &data_12999a8
data_1299940 = 8
data_129996c = 0xffffffff
data_1299948 = 8
data_129994c = 8
data_1299950 = 0x40
data_1299954 = 0x20
data_1299970 = 0xffffffff
data_129995c = 8
data_1299960 = 0x48
data_1299964 = 0x40
data_1299968 = 0x20
data_1299974 = 0xffffffff
data_1299990.o = xmm0_6
int32_t i_8

do
    *(ecx_10 - 8) = 0
    ecx_10 += 0x1fc
    *(ecx_10 - 0x200) = 0xffffffff
    *(ecx_10 - 0x1fc) = 0
    *(ecx_10 - 0x1f8) = data_12a2964
    *(ecx_10 - 0x1f4) = data_12a2968
    *(ecx_10 - 0x1f0) = data_12a296c
    *(ecx_10 - 0x1ec) = data_12a2970
    *(ecx_10 - 0x1e8) = data_12a2974
    *(ecx_10 - 0x1e4) = 0
    *(ecx_10 - 0x1e0) = 0xff
    *(ecx_10 - 0x1dc) = 0
    *(ecx_10 - 0x1d8) = 0xff
    *(ecx_10 - 0x1d4) = 0xffffffff
    *(ecx_10 - 0x1d0) = 0xff
    *(ecx_10 - 0x1cc) = 0
    *(ecx_10 - 0x1a8) = 0
    *(ecx_10 - 0x184) = 0
    *(ecx_10 - 0x17c) = 0
    *(ecx_10 - 0x174) = 0
    *(ecx_10 - 0x150) = 0
    *(ecx_10 - 0x148) = 0
    *(ecx_10 - 0x140) = 0
    *(ecx_10 - 0x11c) = 0
    *(ecx_10 - 0x114) = 0
    *(ecx_10 - 0x10c) = 0
    *(ecx_10 - 0xe8) = 0
    *(ecx_10 - 0xe0) = 0
    *(ecx_10 - 0xd8) = 0
    *(ecx_10 - 0xb4) = 0
    *(ecx_10 - 0xac) = 0
    *(ecx_10 - 0xa4) = 0
    *(ecx_10 - 0x80) = 0
    *(ecx_10 - 0x78) = 0
    *(ecx_10 - 0x70) = 0
    *(ecx_10 - 0x4c) = 0
    *(ecx_10 - 0x44) = 0
    *(ecx_10 - 0x3c) = 0
    *(ecx_10 - 0x18) = 0
    *(ecx_10 - 0x10) = 0
    i_8 = i_37
    i_37 -= 1
while (i_8 != 1)
int32_t i_35 = i_37 + 0x20
data_12a2910.o = data_6248f0
void* eax_16 = &data_109a18c
data_12a28ec = i_37.b
data_12a2920 = i_37
data_12a2924 = 0x78
data_12a2928 = 0x28
data_12dc630.o = zx.o(0)
data_12dc640 = 1
int32_t i_9

do
    *(eax_16 - 0x28) = 0
    eax_16 += 0x34
    *(eax_16 - 0x38) = 8
    *(eax_16 - 0x34) = 0x3e8
    *(eax_16 - 0x30) = 0x10
    *(eax_16 - 0x2c) = 0x10
    i_9 = i_35
    i_35 -= 1
while (i_9 != 1)
int128_t xmm0_8 = data_624930
void* eax_17 = nullptr
data_1300594 = i_35
void* i_10 = &data_1301618
data_12a292c = 1
data_12a2930.o = xmm0_8
data_12a2940 = 1
data_12a2944 = 1
data_12a2948 = 2
__builtin_memcpy(&data_12a294c, 
    "\xf4\x01\x00\x00\x01\x00\x00\x00\x8c\x00\x00\x00\xc8\x00\x00\x00\xdc\x05\x00\x00\x88\x13\x00\x00", 
    0x18)

do
    *(eax_17 + &data_1300598) = 1
    eax_17 += 1
    *(eax_17 + 0x13005d7) = 0
    *i_10 = 0
    i_10 += 0x11
while (i_10 s< &data_1301a58)

int128_t xmm0_9 = data_624880
int32_t i_11 = 0
data_1305c58 = 1
data_1305c5c = 1
data_1305c60.o = xmm0_9

do
    (&data_12a2990)[i_11 * 2].b = i_11.b
    (&data_12a2990)[i_11 * 2]:1.b = i_11.b
    (&data_12a2992)[i_11 << 2] = i_11.b
    *((i_11 << 2) + &data_12a2993) = 0xff
    i_11 += 1
while (i_11 s< 0x100)

data_12a2990 = 0xffff
void* i_12 = &data_12a2da0
data_12a2992 = 0xff
void* edi_2 = nullptr
data_12a2994 = 0x64ff
data_12a2996 = 0x64
data_12a2998 = 0xff50
data_12a299a = 0x50
data_12a299c = 0x6464
data_12a299e = 0xff
data_12a29a0 = 0xc8ff
data_12a29a2 = 0xc8
data_12a29a4 = 0xffb4
data_12a29a6 = 0xb4
data_12a29a8 = 0xdcdc
data_12a29aa = 0xff
data_12a2d88.w = 0xffff
data_12a2d8a = 0xc8
data_12a2d8c = 0
data_12a2d8e = 0
data_12a2d90 = 0
data_12a2d94 = 1
data_12a2d98 = 1
int32_t eax_18

do
    void* i_36 = i_12
    char* edx_8 = *(edi_2 + &data_610630)
    *(i_12 - 4) = *(edi_2 + 0x6106b0)
    
    if (i_12 != 0 && edx_8 != 0)
        eax_18.b = *edx_8
        
        while (eax_18.b != 0)
            if (eax_18.b u< 0x80)
            label_432ee0:
                *i_36 = eax_18.b
                i_36 += 1
                edx_8 = &edx_8[1]
            else
                if (eax_18.b u< 0xa0)
                    if (eax_18.b u>= 0xfe)
                        goto label_432ee0
                else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
                    goto label_432ee0
                
                *i_36 = eax_18.b
                eax_18.b = edx_8[1]
                *(i_36 + 1) = eax_18.b
                i_36 += 2
                edx_8 = &edx_8[2]
            
            eax_18.b = *edx_8
        
        *i_36 = 0
    
    *(i_12 + 0x28) = 0
    edi_2 += 4
    *(i_12 + 0x50) = 0
    *(i_12 + 0x78) = 0
    *(i_12 + 0xa0) = 0
    *(i_12 + 0xc8) = 0
    *(i_12 + 0xf0) = 0
    *(i_12 + 0x118) = 0
    *(i_12 + 0x140) = 0
    *(i_12 + 0x168) = 0
    *(i_12 + 0x190) = 0
    i_12 += 0x1bc
while (i_12 s< 0x12a6520)

void* const edx_9 = &data_614560
void* ecx_11 = &data_12a3674

do
    eax_18.b = *edx_9
    
    if (eax_18.b u< 0x80)
    label_432f72:
        *ecx_11 = eax_18.b
        ecx_11 += 1
        edx_9 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_432f72
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_432f72
        
        *ecx_11 = eax_18.b
        eax_18.b = *(edx_9 + 1)
        *(ecx_11 + 1) = eax_18.b
        ecx_11 += 2
        edx_9 += 2
while (*edx_9 != 0)

*ecx_11 = 0
void* const edx_10 = &data_614570
void* ecx_12 = &data_12a369c

do
    eax_18.b = *edx_10
    
    if (eax_18.b u< 0x80)
    label_432faa:
        *ecx_12 = eax_18.b
        ecx_12 += 1
        edx_10 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_432faa
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_432faa
        
        *ecx_12 = eax_18.b
        eax_18.b = *(edx_10 + 1)
        *(ecx_12 + 1) = eax_18.b
        ecx_12 += 2
        edx_10 += 2
while (*edx_10 != 0)

*ecx_12 = 0
void* const edx_11 = &data_614580
void* ecx_13 = &data_12a3ba8

do
    eax_18.b = *edx_11
    
    if (eax_18.b u< 0x80)
    label_432fe2:
        *ecx_13 = eax_18.b
        ecx_13 += 1
        edx_11 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_432fe2
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_432fe2
        
        *ecx_13 = eax_18.b
        eax_18.b = *(edx_11 + 1)
        *(ecx_13 + 1) = eax_18.b
        ecx_13 += 2
        edx_11 += 2
while (*edx_11 != 0)

*ecx_13 = 0
void* const edx_12 = &data_61459c
void* ecx_14 = &data_12a3bd0

do
    eax_18.b = *edx_12
    
    if (eax_18.b u< 0x80)
    label_43301a:
        *ecx_14 = eax_18.b
        ecx_14 += 1
        edx_12 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_43301a
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_43301a
        
        *ecx_14 = eax_18.b
        eax_18.b = *(edx_12 + 1)
        *(ecx_14 + 1) = eax_18.b
        ecx_14 += 2
        edx_12 += 2
while (*edx_12 != 0)

*ecx_14 = 0
void* const edx_13 = &data_6145b8
void* ecx_15 = &data_12a3bf8

do
    eax_18.b = *edx_13
    
    if (eax_18.b u< 0x80)
    label_433052:
        *ecx_15 = eax_18.b
        ecx_15 += 1
        edx_13 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_433052
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_433052
        
        *ecx_15 = eax_18.b
        eax_18.b = *(edx_13 + 1)
        *(ecx_15 + 1) = eax_18.b
        ecx_15 += 2
        edx_13 += 2
while (*edx_13 != 0)

*ecx_15 = 0
char const* const edx_14 = "DirectSound"
void* ecx_16 = &data_12a40dc

do
    eax_18.b = *edx_14
    
    if (eax_18.b u< 0x80)
    label_43308a:
        *ecx_16 = eax_18.b
        ecx_16 += 1
        edx_14 = &edx_14[1]
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_43308a
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_43308a
        
        *ecx_16 = eax_18.b
        eax_18.b = edx_14[1]
        *(ecx_16 + 1) = eax_18.b
        ecx_16 += 2
        edx_14 = &edx_14[2]
while (*edx_14 != 0)

*ecx_16 = 0
void* const edx_15 = &data_6145e0
void* ecx_17 = &data_12a4104

do
    eax_18.b = *edx_15
    
    if (eax_18.b u< 0x80)
    label_4330c2:
        *ecx_17 = eax_18.b
        ecx_17 += 1
        edx_15 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_4330c2
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_4330c2
        
        *ecx_17 = eax_18.b
        eax_18.b = *(edx_15 + 1)
        *(ecx_17 + 1) = eax_18.b
        ecx_17 += 2
        edx_15 += 2
while (*edx_15 != 0)

*ecx_17 = 0
void* const edx_16 = &data_6145ec
void* ecx_18 = &data_12a4610

do
    eax_18.b = *edx_16
    
    if (eax_18.b u< 0x80)
    label_4330fa:
        *ecx_18 = eax_18.b
        ecx_18 += 1
        edx_16 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_4330fa
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_4330fa
        
        *ecx_18 = eax_18.b
        eax_18.b = *(edx_16 + 1)
        *(ecx_18 + 1) = eax_18.b
        ecx_18 += 2
        edx_16 += 2
while (*edx_16 != 0)

char* const edx_17 = &data_614400
*ecx_18 = 0
void* ecx_19 = &data_12a4638

do
    eax_18.b = *edx_17
    
    if (eax_18.b u< 0x80)
    label_433142:
        *ecx_19 = eax_18.b
        ecx_19 += 1
        edx_17 = &edx_17[1]
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_433142
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_433142
        
        *ecx_19 = eax_18.b
        eax_18.b = edx_17[1]
        *(ecx_19 + 1) = eax_18.b
        ecx_19 += 2
        edx_17 = &edx_17[2]
while (*edx_17 != 0)

*ecx_19 = 0
void* const edx_18 = &data_6145fc
void* ecx_20 = &data_12a4b6c

do
    eax_18.b = *edx_18
    
    if (eax_18.b u< 0x80)
    label_43317a:
        *ecx_20 = eax_18.b
        ecx_20 += 1
        edx_18 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_43317a
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_43317a
        
        *ecx_20 = eax_18.b
        eax_18.b = *(edx_18 + 1)
        *(ecx_20 + 1) = eax_18.b
        ecx_20 += 2
        edx_18 += 2
while (*edx_18 != 0)

*ecx_20 = 0
void* const edx_19 = &data_614604
void* ecx_21 = &data_12a4b6c

do
    eax_18.b = *edx_19
    
    if (eax_18.b u< 0x80)
    label_4331b2:
        *ecx_21 = eax_18.b
        ecx_21 += 1
        edx_19 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_4331b2
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_4331b2
        
        *ecx_21 = eax_18.b
        eax_18.b = *(edx_19 + 1)
        *(ecx_21 + 1) = eax_18.b
        ecx_21 += 2
        edx_19 += 2
while (*edx_19 != 0)

*ecx_21 = 0
void* const edx_20 = &data_61460c
void* ecx_22 = &data_12a4d28

do
    eax_18.b = *edx_20
    
    if (eax_18.b u< 0x80)
    label_4331ea:
        *ecx_22 = eax_18.b
        ecx_22 += 1
        edx_20 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_4331ea
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_4331ea
        
        *ecx_22 = eax_18.b
        eax_18.b = *(edx_20 + 1)
        *(ecx_22 + 1) = eax_18.b
        ecx_22 += 2
        edx_20 += 2
while (*edx_20 != 0)

*ecx_22 = 0
void* const edx_21 = &data_614614
void* ecx_23 = &data_12a4d28

do
    eax_18.b = *edx_21
    
    if (eax_18.b u< 0x80)
    label_433222:
        *ecx_23 = eax_18.b
        ecx_23 += 1
        edx_21 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_433222
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_433222
        
        *ecx_23 = eax_18.b
        eax_18.b = *(edx_21 + 1)
        *(ecx_23 + 1) = eax_18.b
        ecx_23 += 2
        edx_21 += 2
while (*edx_21 != 0)

*ecx_23 = 0
void* const edx_22 = &data_61460c
void* ecx_24 = &data_12a4ee4

do
    eax_18.b = *edx_22
    
    if (eax_18.b u< 0x80)
    label_43325a:
        *ecx_24 = eax_18.b
        ecx_24 += 1
        edx_22 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_43325a
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_43325a
        
        *ecx_24 = eax_18.b
        eax_18.b = *(edx_22 + 1)
        *(ecx_24 + 1) = eax_18.b
        ecx_24 += 2
        edx_22 += 2
while (*edx_22 != 0)

*ecx_24 = 0
void* const edx_23 = &data_614614
void* ecx_25 = &data_12a4ee4

do
    eax_18.b = *edx_23
    
    if (eax_18.b u< 0x80)
    label_433292:
        *ecx_25 = eax_18.b
        ecx_25 += 1
        edx_23 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_433292
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_433292
        
        *ecx_25 = eax_18.b
        eax_18.b = *(edx_23 + 1)
        *(ecx_25 + 1) = eax_18.b
        ecx_25 += 2
        edx_23 += 2
while (*edx_23 != 0)

*ecx_25 = 0
void* const edx_24 = &data_61461c
void* ecx_26 = &data_12a50a0

do
    eax_18.b = *edx_24
    
    if (eax_18.b u< 0x80)
    label_4332ca:
        *ecx_26 = eax_18.b
        ecx_26 += 1
        edx_24 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_4332ca
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_4332ca
        
        *ecx_26 = eax_18.b
        eax_18.b = *(edx_24 + 1)
        *(ecx_26 + 1) = eax_18.b
        ecx_26 += 2
        edx_24 += 2
while (*edx_24 != 0)

*ecx_26 = 0
void* const edx_25 = &data_614624
void* ecx_27 = &data_12a50a0

do
    eax_18.b = *edx_25
    
    if (eax_18.b u< 0x80)
    label_433302:
        *ecx_27 = eax_18.b
        ecx_27 += 1
        edx_25 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_433302
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_433302
        
        *ecx_27 = eax_18.b
        eax_18.b = *(edx_25 + 1)
        *(ecx_27 + 1) = eax_18.b
        ecx_27 += 2
        edx_25 += 2
while (*edx_25 != 0)

*ecx_27 = 0
void* const edx_26 = &data_6145ec
void* ecx_28 = &data_12a5e58

do
    eax_18.b = *edx_26
    
    if (eax_18.b u< 0x80)
    label_43333a:
        *ecx_28 = eax_18.b
        ecx_28 += 1
        edx_26 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_43333a
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_43333a
        
        *ecx_28 = eax_18.b
        eax_18.b = *(edx_26 + 1)
        *(ecx_28 + 1) = eax_18.b
        ecx_28 += 2
        edx_26 += 2
while (*edx_26 != 0)

char* const edx_27 = &data_6144d8
*ecx_28 = 0
void* ecx_29 = &data_12a5e80

do
    eax_18.b = *edx_27
    
    if (eax_18.b u< 0x80)
    label_433382:
        *ecx_29 = eax_18.b
        ecx_29 += 1
        edx_27 = &edx_27[1]
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_433382
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_433382
        
        *ecx_29 = eax_18.b
        eax_18.b = edx_27[1]
        *(ecx_29 + 1) = eax_18.b
        ecx_29 += 2
        edx_27 = &edx_27[2]
while (*edx_27 != 0)

*ecx_29 = 0
void* const edx_28 = &data_6145ec
void* ecx_30 = &data_12a6014

do
    eax_18.b = *edx_28
    
    if (eax_18.b u< 0x80)
    label_4333ba:
        *ecx_30 = eax_18.b
        ecx_30 += 1
        edx_28 += 1
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_4333ba
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_4333ba
        
        *ecx_30 = eax_18.b
        eax_18.b = *(edx_28 + 1)
        *(ecx_30 + 1) = eax_18.b
        ecx_30 += 2
        edx_28 += 2
while (*edx_28 != 0)

char* const edx_29 = &data_6144e8
*ecx_30 = 0
void* ecx_31 = &data_12a603c

do
    eax_18.b = *edx_29
    
    if (eax_18.b u< 0x80)
    label_433402:
        *ecx_31 = eax_18.b
        ecx_31 += 1
        edx_29 = &edx_29[1]
    else
        if (eax_18.b u< 0xa0)
            if (eax_18.b u>= 0xfe)
                goto label_433402
        else if (eax_18.b u<= 0xdf || eax_18.b u>= 0xfe)
            goto label_433402
        
        *ecx_31 = eax_18.b
        eax_18.b = edx_29[1]
        *(ecx_31 + 1) = eax_18.b
        ecx_31 += 2
        edx_29 = &edx_29[2]
while (*edx_29 != 0)

*ecx_31 = 0

for (void* i_13 = &data_12a651c; i_13 s< &data_12a6e1c; i_13 += 0x24)
    *i_13 = 0

for (void* i_14 = &data_12a6e1c; i_14 s< &data_12a705c; i_14 += 0x24)
    *i_14 = 0

int32_t ecx_32 = data_70300c
void* i_15 = &data_12a7060
int32_t edx_30 = data_7030dc

do
    *(i_15 - 4) = 0
    __builtin_memset(i_15, 0, 0x18)
    *(i_15 + 0x18) = 0x1f4
    *(i_15 + 0x1c) = 0
    *(i_15 + 0x20) = 1
    *(i_15 + 0x24) = 0
    *(i_15 + 0x28) = 0
    *(i_15 + 0x2c) = ecx_32
    *(i_15 + 0x30) = edx_30
    *(i_15 + 0x34) = 0
    *(i_15 + 0x38) = 0
    *(i_15 + 0x3c) = 0xff
    i_15 += 0x44
while (i_15 s< &data_12b7a00)

data_12b925c = 0
int32_t* i_16 = &data_12b9200
data_12b9260 = 0
data_12b9264 = 0

do
    i_16[-1] = 0
    *i_16 = 0
    i_16[1] = 0
    i_16 = &i_16[3]
while (i_16 s< &data_12b9260)

__builtin_memset(&data_12bda68, 0, 0x18)
void* i_17 = &data_12b926c
data_12bda80 = 1
data_12bda84 = 0
data_12bda88 = 1

do
    *(i_17 - 4) = 0
    __builtin_memset(i_17, 0, 0x14)
    *(i_17 + 0x14) = 1
    *(i_17 + 0x18) = 0
    *(i_17 + 0x1c) = 1
    i_17 += 0x24
while (i_17 s< &data_12bda6c)

data_12bda90 = 0xa
int32_t* i_18 = &data_12bdaa0
data_12bda94 = 0xfffffc18
data_12bda98 = 0xa

do
    i_18[-1] = 0
    *i_18 = 0
    i_18 = &i_18[2]
while (i_18 s< 0x12be2a0)

data_12c109c = 0

for (void* i_19 = &data_12be2cc; i_19 s< 0x12c10cc; i_19 += 0x5c)
    *(i_19 - 0x24) = 0
    *i_19 = 0
    *(i_19 + 0x24) = 0
    *(i_19 + 0x28) = 0

data_12c3ca0 = 0

for (void* i_20 = &data_12c10f4; i_20 s< 0x12c3cf4; i_20 += 0x58)
    *(i_20 - 0x24) = 0
    *i_20 = 0

for (int32_t* i_21 = &data_12c3cc8; i_21 s< 0x12c41c8; i_21 = &i_21[0xa])
    i_21[-9].b = 0
    *i_21 = 0

int128_t xmm0_10 = data_624a00
void* i_22 = &data_12c41b4
data_12c3cc8 = 1
data_12c41a4 = xmm0_10

do
    *i_22 = 0
    i_22 += 0x184
while (i_22 s< &data_12c7234)

for (void* i_23 = &data_12c7234; i_23 s< &data_12c92b4; i_23 += 0x104)
    *i_23 = 0

for (void* i_24 = &data_12c92f8; i_24 s< 0x12dc2f8; i_24 += 0x98)
    *(i_24 - 0x43) = 0
    *i_24 = 0
    *(i_24 + 4) = 0
    *(i_24 + 0x44) = 0
    *(i_24 + 0x48) = 0
    *(i_24 + 0x4c) = 0xffffffff
    *(i_24 + 0x50) = 0xffffffff

data_12dc2b4 = 0
void* i_25 = &data_12dc39c
data_12dc2b8 = 0
data_12dc2bc = 1
data_12dc2c0 = 1
data_12dc2c4 = 0
data_12dc2e8 = 0
data_12dc30c = 0
data_12dc4bc = 0
data_12dc330 = 0
data_12dc354 = 0
data_12dc378 = 0

do
    *i_25 = 0
    i_25 += 0x24
while (i_25 s< &data_12dc4bc)

void* const edx_31 = &data_61462c
__builtin_memcpy(&data_12dc4c0, 
    "\x00\x00\x00\x00\x01\x00\x00\x00\x03\x00\x00\x00\x01\x00\x00\x00\x10\x00\x00\x00\x00", 0x15)
void* ecx_33 = &data_12dc554

do
    i_25.b = *edx_31
    
    if (i_25.b u< 0x80)
    label_4337aa:
        *ecx_33 = i_25.b
        ecx_33 += 1
        edx_31 += 1
    else
        if (i_25.b u< 0xa0)
            if (i_25.b u>= 0xfe)
                goto label_4337aa
        else if (i_25.b u<= 0xdf || i_25.b u>= 0xfe)
            goto label_4337aa
        
        *ecx_33 = i_25.b
        i_25.b = *(edx_31 + 1)
        *(ecx_33 + 1) = i_25.b
        ecx_33 += 2
        edx_31 += 2
while (*edx_31 != 0)

int128_t xmm0_11 = data_6249c0
void* const edx_32 = &data_614640
*ecx_33 = 0
char* ecx_34 = &data_12ff38c
int32_t eax_19 = data_12dc4d0
data_12dc5e0.o = xmm0_11
int128_t xmm0_12 = data_624870
data_12dc5d4 = 0
data_12dc5d8 = 0
data_12dc5dc = 0
data_12dc5f0 = eax_19
data_12dc5f4 = 0
data_12ff250 = 0xffffffff
data_12ff254 = 0
data_12ff258 = 0
data_12ff358 = 2
data_12ff35c = 1
data_12ff360 = 1
data_12ff364 = 0
data_12ff36c = 0x1e
data_12ff368 = 0
data_12ff370.o = xmm0_12

do
    eax_19.b = *edx_32
    
    if (eax_19.b u< 0x80)
    label_433892:
        *ecx_34 = eax_19.b
        ecx_34 = &ecx_34[1]
        edx_32 += 1
    else
        if (eax_19.b u< 0xa0)
            if (eax_19.b u>= 0xfe)
                goto label_433892
        else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
            goto label_433892
        
        *ecx_34 = eax_19.b
        eax_19.b = *(edx_32 + 1)
        ecx_34[1] = eax_19.b
        ecx_34 = &ecx_34[2]
        edx_32 += 2
while (*edx_32 != 0)

*ecx_34 = 0
void* const edx_33 = &data_614670
void* ecx_35 = &data_12ff48c

do
    eax_19.b = *edx_33
    
    if (eax_19.b u< 0x80)
    label_4338ca:
        *ecx_35 = eax_19.b
        ecx_35 += 1
        edx_33 += 1
    else
        if (eax_19.b u< 0xa0)
            if (eax_19.b u>= 0xfe)
                goto label_4338ca
        else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
            goto label_4338ca
        
        *ecx_35 = eax_19.b
        eax_19.b = *(edx_33 + 1)
        *(ecx_35 + 1) = eax_19.b
        ecx_35 += 2
        edx_33 += 2
while (*edx_33 != 0)

*ecx_35 = 0
void* const edx_34 = &data_614694
void* ecx_36 = &data_12ff58c

do
    eax_19.b = *edx_34
    
    if (eax_19.b u< 0x80)
    label_433902:
        *ecx_36 = eax_19.b
        ecx_36 += 1
        edx_34 += 1
    else
        if (eax_19.b u< 0xa0)
            if (eax_19.b u>= 0xfe)
                goto label_433902
        else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
            goto label_433902
        
        *ecx_36 = eax_19.b
        eax_19.b = *(edx_34 + 1)
        *(ecx_36 + 1) = eax_19.b
        ecx_36 += 2
        edx_34 += 2
while (*edx_34 != 0)

*ecx_36 = 0
void* const edx_35 = &data_6146a0
void* ecx_37 = &data_12ff68c

do
    eax_19.b = *edx_35
    
    if (eax_19.b u< 0x80)
    label_43393a:
        *ecx_37 = eax_19.b
        ecx_37 += 1
        edx_35 += 1
    else
        if (eax_19.b u< 0xa0)
            if (eax_19.b u>= 0xfe)
                goto label_43393a
        else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
            goto label_43393a
        
        *ecx_37 = eax_19.b
        eax_19.b = *(edx_35 + 1)
        *(ecx_37 + 1) = eax_19.b
        ecx_37 += 2
        edx_35 += 2
while (*edx_35 != 0)

*ecx_37 = 0
void* const edx_36 = &data_6146c0
char* ecx_38 = &data_12ff78c

do
    eax_19.b = *edx_36
    
    if (eax_19.b u< 0x80)
    label_433972:
        *ecx_38 = eax_19.b
        ecx_38 = &ecx_38[1]
        edx_36 += 1
    else
        if (eax_19.b u< 0xa0)
            if (eax_19.b u>= 0xfe)
                goto label_433972
        else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
            goto label_433972
        
        *ecx_38 = eax_19.b
        eax_19.b = *(edx_36 + 1)
        ecx_38[1] = eax_19.b
        ecx_38 = &ecx_38[2]
        edx_36 += 2
while (*edx_36 != 0)

*ecx_38 = 0
void* const edx_37 = &data_614708
void* ecx_39 = &data_12ff88c

do
    eax_19.b = *edx_37
    
    if (eax_19.b u< 0x80)
    label_4339aa:
        *ecx_39 = eax_19.b
        ecx_39 += 1
        edx_37 += 1
    else
        if (eax_19.b u< 0xa0)
            if (eax_19.b u>= 0xfe)
                goto label_4339aa
        else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
            goto label_4339aa
        
        *ecx_39 = eax_19.b
        eax_19.b = *(edx_37 + 1)
        *(ecx_39 + 1) = eax_19.b
        ecx_39 += 2
        edx_37 += 2
while (*edx_37 != 0)

*ecx_39 = 0
void* const edx_38 = &data_614714
void* ecx_40 = &data_12ff98c

do
    eax_19.b = *edx_38
    
    if (eax_19.b u< 0x80)
    label_4339e2:
        *ecx_40 = eax_19.b
        ecx_40 += 1
        edx_38 += 1
    else
        if (eax_19.b u< 0xa0)
            if (eax_19.b u>= 0xfe)
                goto label_4339e2
        else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
            goto label_4339e2
        
        *ecx_40 = eax_19.b
        eax_19.b = *(edx_38 + 1)
        *(ecx_40 + 1) = eax_19.b
        ecx_40 += 2
        edx_38 += 2
while (*edx_38 != 0)

*ecx_40 = 0
void* const edx_39 = &data_6146c0
char* ecx_41 = &data_12ffa8c

do
    eax_19.b = *edx_39
    
    if (eax_19.b u< 0x80)
    label_433a1a:
        *ecx_41 = eax_19.b
        ecx_41 = &ecx_41[1]
        edx_39 += 1
    else
        if (eax_19.b u< 0xa0)
            if (eax_19.b u>= 0xfe)
                goto label_433a1a
        else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
            goto label_433a1a
        
        *ecx_41 = eax_19.b
        eax_19.b = *(edx_39 + 1)
        ecx_41[1] = eax_19.b
        ecx_41 = &ecx_41[2]
        edx_39 += 2
while (*edx_39 != 0)

void* ebx_2
ebx_2.b = 0x83
char* const edx_40 = &data_614344
*ecx_41 = 0
void* ecx_42 = &data_12ffb8c

do
    eax_19.b = *edx_40
    
    if (eax_19.b u< 0x80)
    label_433a62:
        *ecx_42 = eax_19.b
        ecx_42 += 1
        edx_40 = &edx_40[1]
    else
        if (eax_19.b u< 0xa0)
            if (eax_19.b u>= 0xfe)
                goto label_433a62
        else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
            goto label_433a62
        
        *ecx_42 = eax_19.b
        eax_19.b = edx_40[1]
        *(ecx_42 + 1) = eax_19.b
        ecx_42 += 2
        edx_40 = &edx_40[2]
while (*edx_40 != 0)

*ecx_42 = 0
char* const edx_41 = &data_614344
void* ecx_43 = &data_12ffc8c

if (ebx_2.b != 0)
    do
        eax_19.b = *edx_41
        
        if (eax_19.b u< 0x80)
        label_433aa2:
            *ecx_43 = eax_19.b
            ecx_43 += 1
            edx_41 = &edx_41[1]
        else
            if (eax_19.b u< 0xa0)
                if (eax_19.b u>= 0xfe)
                    goto label_433aa2
            else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
                goto label_433aa2
            
            *ecx_43 = eax_19.b
            eax_19.b = edx_41[1]
            *(ecx_43 + 1) = eax_19.b
            ecx_43 += 2
            edx_41 = &edx_41[2]
    while (*edx_41 != 0)

char* const edx_42 = &data_61434c
*ecx_43 = 0
void* ecx_44 = &data_12ffd8c

do
    eax_19.b = *edx_42
    
    if (eax_19.b u< 0x80)
    label_433ae4:
        *ecx_44 = eax_19.b
        ecx_44 += 1
        edx_42 = &edx_42[1]
    else
        if (eax_19.b u< 0xa0)
            if (eax_19.b u>= 0xfe)
                goto label_433ae4
        else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
            goto label_433ae4
        
        *ecx_44 = eax_19.b
        eax_19.b = edx_42[1]
        *(ecx_44 + 1) = eax_19.b
        ecx_44 += 2
        edx_42 = &edx_42[2]
while (*edx_42 != 0)

*ecx_44 = 0
char* const edx_43 = &data_61434c
void* ecx_45 = &data_12ffe8c

do
    eax_19.b = *edx_43
    
    if (eax_19.b u< 0x80)
    label_433b22:
        *ecx_45 = eax_19.b
        ecx_45 += 1
        edx_43 = &edx_43[1]
    else
        if (eax_19.b u< 0xa0)
            if (eax_19.b u>= 0xfe)
                goto label_433b22
        else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
            goto label_433b22
        
        *ecx_45 = eax_19.b
        eax_19.b = edx_43[1]
        *(ecx_45 + 1) = eax_19.b
        ecx_45 += 2
        edx_43 = &edx_43[2]
while (*edx_43 != 0)

*ecx_45 = 0
void* const edx_44 = &data_614734
void* ecx_46 = &data_12fff8c

do
    eax_19.b = *edx_44
    
    if (eax_19.b u< 0x80)
    label_433b5a:
        *ecx_46 = eax_19.b
        ecx_46 += 1
        edx_44 += 1
    else
        if (eax_19.b u< 0xa0)
            if (eax_19.b u>= 0xfe)
                goto label_433b5a
        else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
            goto label_433b5a
        
        *ecx_46 = eax_19.b
        eax_19.b = *(edx_44 + 1)
        *(ecx_46 + 1) = eax_19.b
        ecx_46 += 2
        edx_44 += 2
while (*edx_44 != 0)

*ecx_46 = 0
void* const edx_45 = &data_614750
void* ecx_47 = &data_130008c

do
    eax_19.b = *edx_45
    
    if (eax_19.b u< 0x80)
    label_433b92:
        *ecx_47 = eax_19.b
        ecx_47 += 1
        edx_45 += 1
    else
        if (eax_19.b u< 0xa0)
            if (eax_19.b u>= 0xfe)
                goto label_433b92
        else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
            goto label_433b92
        
        *ecx_47 = eax_19.b
        eax_19.b = *(edx_45 + 1)
        *(ecx_47 + 1) = eax_19.b
        ecx_47 += 2
        edx_45 += 2
while (*edx_45 != 0)

*ecx_47 = 0
void* const edx_46 = &data_614768
void* ecx_48 = &data_130018c

do
    eax_19.b = *edx_46
    
    if (eax_19.b u< 0x80)
    label_433bca:
        *ecx_48 = eax_19.b
        ecx_48 += 1
        edx_46 += 1
    else
        if (eax_19.b u< 0xa0)
            if (eax_19.b u>= 0xfe)
                goto label_433bca
        else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
            goto label_433bca
        
        *ecx_48 = eax_19.b
        eax_19.b = *(edx_46 + 1)
        *(ecx_48 + 1) = eax_19.b
        ecx_48 += 2
        edx_46 += 2
while (*edx_46 != 0)

*ecx_48 = 0
void* const edx_47 = &data_614780
void* ecx_49 = &data_130028c

do
    eax_19.b = *edx_47
    
    if (eax_19.b u< 0x80)
    label_433c02:
        *ecx_49 = eax_19.b
        ecx_49 += 1
        edx_47 += 1
    else
        if (eax_19.b u< 0xa0)
            if (eax_19.b u>= 0xfe)
                goto label_433c02
        else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
            goto label_433c02
        
        *ecx_49 = eax_19.b
        eax_19.b = *(edx_47 + 1)
        *(ecx_49 + 1) = eax_19.b
        ecx_49 += 2
        edx_47 += 2
while (*edx_47 != 0)

*ecx_49 = 0
char const* const edx_48 = "Ver 1.0"
data_130038c = 0
void* ecx_50 = &data_1305b58

do
    eax_19.b = *edx_48
    
    if (eax_19.b u< 0x80)
    label_433c42:
        *ecx_50 = eax_19.b
        ecx_50 += 1
        edx_48 = &edx_48[1]
    else
        if (eax_19.b u< 0xa0)
            if (eax_19.b u>= 0xfe)
                goto label_433c42
        else if (eax_19.b u<= 0xdf || eax_19.b u>= 0xfe)
            goto label_433c42
        
        *ecx_50 = eax_19.b
        eax_19.b = edx_48[1]
        *(ecx_50 + 1) = eax_19.b
        ecx_50 += 2
        edx_48 = &edx_48[2]
while (*edx_48 != 0)

*ecx_50 = 0
void* i_26 = &data_108fec4
data_12dc608 = 1
data_12dc60c = 1
data_12dc610 = 1

do
    *i_26 = 0
    i_26 += 0x24
while (i_26 s< &data_108ffe4)

data_108febc = 1
int32_t i_27 = 0
data_108fec0 = 0
data_108f348 = 0
data_12dc618 = 1
data_12dc614 = 1
__builtin_memset(&data_12dc61c, 0, 0x14)
data_12dc5f8 = 1
data_12dc5fc = 0
data_12dc600 = 0
data_12dc604 = 1
data_12dc644 = 0x3f
data_12ff380 = 0
data_12ff384 = 1
data_12ff388 = 0
void* edi_5 = &data_12f97cc

do
    if (i_27 s>= 0x1a)
        int32_t eax_21
        int32_t edx_49
        edx_49:eax_21 = sx.q(i_27 - 0x1a)
        int32_t var_18_2 = (&data_610730)[mods.dp.d(edx_49:eax_21, 0x1a)]
        int32_t var_1c_1 = (&data_610730)[divs.dp.d(edx_49:eax_21, 0x1a)]
        sub_4c84d0(edi_5, "%s%s")
    else
        int32_t var_18_1 = (&data_610730)[i_27]
        sub_4c84d0(edi_5, "%s")
    
    i_27 += 1
    edi_5 += 0x21
while (i_27 s< 0x2be)

int32_t i_28 = 0
void* edi_6 = &data_12e81c8

do
    if (i_28 s>= 0x1a)
        int32_t eax_24
        int32_t edx_51
        edx_51:eax_24 = sx.q(i_28 - 0x1a)
        int32_t var_18_4 = (&data_610730)[mods.dp.d(edx_51:eax_24, 0x1a)]
        int32_t var_1c_2 = (&data_610730)[divs.dp.d(edx_51:eax_24, 0x1a)]
        sub_4c84d0(edi_6, "%s%s")
    else
        int32_t var_18_3 = (&data_610730)[i_28]
        sub_4c84d0(edi_6, "%s")
    
    i_28 += 1
    edi_6 += 0x21
while (i_28 s< 0x2be)

__builtin_memset(&data_12dc648, 0, 0x1f40)
__builtin_memset(&data_12de588, 0, 0x1f40)
__builtin_memset(&data_12e04c8, 0, 0x1f40)
__builtin_memset(&data_12e2408, 0, 0x1f40)
__builtin_memset(&data_12e4348, 0, 0x1f40)
__builtin_memset(&data_12e6288, 0, 0x1f40)
__builtin_memset(&data_12edc4c, 0, 0x1f40)
__builtin_memset(&data_12efb8c, 0, 0x1f40)

for (void* i_29 = &data_12f3a0c; i_29 s< &data_12f594c; i_29 += 4)
    *(i_29 - 0x1f40) = 0
    *i_29 = 0

for (void* i_30 = &data_12f788c; i_30 s< &data_12f97cc; i_30 += 4)
    *(i_30 - 0x1f40) = 0
    *i_30 = 0

for (void* i_31 = &data_1305c94; i_31 s< 0x1305d94; i_31 -= 0xffffff80)
    *(i_31 - 0x24) = 0
    *i_31 = 0
    *(i_31 + 0x24) = 0
    *(i_31 + 0x28) = 0
    *(i_31 + 0x2c) = 5
    *(i_31 + 0x30) = 0x12c
    __builtin_memset(i_31 + 0x34, 0, 0x28)

return sub_414660()
