// 函数: sub_444950
// 地址: 0x444950
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND esi = data_7027bc
int32_t ecx
int32_t var_20 = ecx
int32_t result_1 = 0
int32_t result = 0
BOOL var_8 = 0
int32_t var_14 = 0
void* var_10
int32_t eax_1
int32_t ecx_2
eax_1, ecx_2 = sub_434030(&var_10, &var_8, &var_14, &var_10, esi)

if (eax_1 != 0)
    int32_t var_20_1 = ecx_2
    
    if (sub_4443c0(esi) != 0)
        result_1 = 1
    
    result = result_1

sub_4d6c40(&var_14, &var_8)
int32_t eax_3

if (data_12ff380 == 0)
    eax_3 = data_12ff384
else
    eax_3 = 0
    data_12ff378 = 0
    data_12dc4c4 = 0
    data_12a2d98 = 0
    data_12ff384 = 0
    data_12dc5f8 = 0
    data_12dc2bc = 0
    data_12dc2c0 = 0

if (data_108f338 == 0x3e7 || eax_3 == 2 || data_1c051d4 == 1)
label_444a3a:
    sub_4cfd70(0x12a36c4, "50% Windowed Mode")
    sub_4cfd70(0x12a36ec, "75% Windowed Mode")
    sub_4cfd70(0x12a3714, "150% Windowed Mode")
    sub_4cfd70(0x12a373c, "200% Windowed Mode")
    sub_4cfd70(0x12a3764, "Detailed Settings")
else
    int32_t eax_4 = data_1332b60
    bool cond:1_1
    
    if (eax_4 != 0x280)
        if (eax_4 != 0x320)
            goto label_444a3a
        
        cond:1_1 = data_1332b64 == 0x258
    else
        cond:1_1 = data_1332b64 == 0x1e0
    
    if (not(cond:1_1))
        goto label_444a3a

void* eax_5 = &data_1090b2c
int32_t i_4 = 0x10
int32_t i

do
    if (*eax_5 == 1 && *(eax_5 + 0x40) == 0xffffffff)
        *eax_5 = 2
    
    if (*(eax_5 + 0x1d4) == 1 && *(eax_5 + 0x214) == 0xffffffff)
        *(eax_5 + 0x1d4) = 2
    
    if (*(eax_5 + 0x3a8) == 1 && *(eax_5 + 0x3e8) == 0xffffffff)
        *(eax_5 + 0x3a8) = 2
    
    if (*(eax_5 + 0x57c) == 1 && *(eax_5 + 0x5bc) == 0xffffffff)
        *(eax_5 + 0x57c) = 2
    
    eax_5 += 0x750
    i = i_4
    i_4 -= 1
while (i != 1)
int32_t eax_6 = data_12dc644 * 0x1d4
data_1090ae4 = 1

if ((&data_1090ae4)[data_12dc644 * 0x75] == i_4)
    (&data_1090ae4)[data_12dc644 * 0x75] = 1
    *(eax_6 + 0x1090ba8) = i_4
    *(eax_6 + 0x1090bac) = i_4
    *(eax_6 + 0x1090ba0) = 8
    *(eax_6 + 0x1090ba4) = 8

int32_t eax_8 = data_12b9264
int32_t ecx_5 = data_12b9260

if (data_12b91fc == 0)
    data_12b9200 = ecx_5
    data_12b9204 = eax_8

if (data_12b9208 == 0)
    data_12b920c = ecx_5
    data_12b9210 = eax_8

if (data_12b9214 == 0)
    data_12b9218 = ecx_5
    data_12b921c = eax_8

if (data_12b9220 == 0)
    data_12b9224 = ecx_5
    data_12b9228 = eax_8

if (data_12b922c == 0)
    data_12b9230 = ecx_5
    data_12b9234 = eax_8

if (data_12b9238 == 0)
    data_12b923c = ecx_5
    data_12b9240 = eax_8

if (data_12b9244 == 0)
    data_12b9248 = ecx_5
    data_12b924c = eax_8

if (data_12b9250 == 0)
    data_12b9254 = ecx_5
    data_12b9258 = eax_8

for (void* i_1 = &data_12b926c; i_1 s< &data_12bda6c; i_1 += 0x24)
    if (*(i_1 - 4) == 0)
        *i_1 = data_12bda6c
        *(i_1 + 4) = data_12bda70.d
        *(i_1 + 8) = data_12bda70:4
        *(i_1 + 0xc) = data_12bda70:8
        *(i_1 + 0x10) = data_12bda70:0xc
        *(i_1 + 0x14) = data_12bda80
        *(i_1 + 0x18) = data_12bda84
        *(i_1 + 0x1c) = data_12bda88

data_12bda8c = 0

for (void* i_2 = &data_12b926c; i_2 s< &data_12bda6c; i_2 += 0x24)
    if (*i_2 == 8)
        data_12bda8c = 1
        break

var_14 = 0

for (int32_t i_3 = 0; i_3 s< 0x40; i_3 += 1)
    void* ecx_6 = nullptr
    var_8 = 0
    var_10 = nullptr
    BOOL esi_2
    
    for (void* j = &data_1300618; j s< &data_1301618; )
        uint32_t esi_1 = zx.d(*(ecx_6 + 0x13005d8))
        int32_t eax_17 = 0
        
        if (esi_1 s> 0)
            do
                if (zx.d(*(j + eax_17)) == i_3)
                    BOOL esi_3 = var_8
                    ecx_6 = var_10
                    int32_t eax_20 = var_14 + esi_3
                    esi_2 = esi_3 + 1
                    var_8 = esi_2
                    *((eax_20 << 2) + &data_1301b58) = ecx_6
                    goto label_444c93
                
                eax_17 += 1
            while (eax_17 s< esi_1)
            
            ecx_6 = var_10
        
        esi_2 = var_8
    label_444c93:
        ecx_6 += 1
        j += 0x40
        var_10 = ecx_6
    
    var_14 += 0x40
    *((i_3 << 2) + &data_1301a58) = esi_2

if (data_1300594 == 0)
    int32_t ecx_8 = 0
    void* eax_18 = &data_1301629
    
    while (*(eax_18 - 0x11) == 0)
        if (*eax_18 != 0)
            ecx_8 += 1
            break
        
        if (*(eax_18 + 0x11) != 0)
            ecx_8 += 2
            break
        
        if (*(eax_18 + 0x22) != 0)
            ecx_8 += 3
            break
        
        eax_18 += 0x44
        ecx_8 += 4
        
        if (eax_18 s>= 0x1301a69)
            break
    
    int32_t eax_21 = data_12a47a0
    data_12a47cc = 0
    data_12a47f4 = 0
    
    if (ecx_8 == 0x40)
        eax_21 = 0
    
    data_12a47a0 = eax_21

if (data_12ff370 == 0)
    int32_t eax_22 = data_12ff368
    
    if (eax_22 == 2)
        eax_22 = 1
    
    data_12ff368 = eax_22

int32_t ecx_9 = data_1299980:4

if (ecx_9 s< 0xa)
    ecx_9 = 0xa
else if (ecx_9 s> 0x30)
    ecx_9 = 0x30

int32_t edx_3 = data_1299980:8
data_1299980:4 = ecx_9

if (edx_3 s< 0xa)
    edx_3 = 0xa
else if (edx_3 s> 0x30)
    edx_3 = 0x30

data_1299980:8 = edx_3

if (ecx_9 s> edx_3)
    int32_t eax_23 = ecx_9
    ecx_9 = edx_3
    edx_3 = eax_23
    data_1299980:4 = ecx_9
    data_1299980:8 = edx_3

int32_t eax_24 = data_1299980.d

if (eax_24 s>= ecx_9)
    if (eax_24 s> edx_3)
        eax_24 = edx_3
    
    data_1299980.d = eax_24
else
    data_1299980.d = ecx_9

int32_t eax_25 = data_1299990

if (eax_25 s< 1)
    eax_25 = 1
else if (eax_25 s> 0x10)
    eax_25 = 0x10

int32_t ecx_10 = data_1299994
data_1299990 = eax_25

if (ecx_10 s> 0 && ecx_10 s< eax_25)
    data_1299994 = eax_25 + 1

int32_t esi_4 = data_12999a0
int32_t ecx_11 = data_70300c

if (esi_4 s> 0)
    int32_t eax_28
    int32_t edx_4
    edx_4:eax_28 = sx.q(ecx_11)
    int32_t eax_30 = (eax_28 - edx_4) s>> 1
    
    if (esi_4 s> eax_30)
        if (esi_4 s> ecx_11)
            esi_4 = ecx_11
        
        data_12999a0 = esi_4
    else
        data_12999a0 = eax_30
else
    data_12999a0 = ecx_11

int32_t esi_5 = data_1299b9c

if (esi_5 s> 0)
    int32_t eax_32
    int32_t edx_5
    edx_5:eax_32 = sx.q(ecx_11)
    int32_t eax_34 = (eax_32 - edx_5) s>> 1
    
    if (esi_5 s> eax_34)
        if (esi_5 s> ecx_11)
            esi_5 = ecx_11
        
        data_1299b9c = esi_5
    else
        data_1299b9c = eax_34
else
    data_1299b9c = ecx_11

int32_t esi_6 = data_1299d98

if (esi_6 s> 0)
    int32_t eax_36
    int32_t edx_6
    edx_6:eax_36 = sx.q(ecx_11)
    int32_t eax_38 = (eax_36 - edx_6) s>> 1
    
    if (esi_6 s> eax_38)
        if (esi_6 s> ecx_11)
            esi_6 = ecx_11
        
        data_1299d98 = esi_6
    else
        data_1299d98 = eax_38
else
    data_1299d98 = ecx_11

int32_t esi_7 = data_1299f94

if (esi_7 s> 0)
    int32_t eax_40
    int32_t edx_7
    edx_7:eax_40 = sx.q(ecx_11)
    int32_t eax_42 = (eax_40 - edx_7) s>> 1
    
    if (esi_7 s> eax_42)
        if (esi_7 s> ecx_11)
            esi_7 = ecx_11
        
        data_1299f94 = esi_7
    else
        data_1299f94 = eax_42
else
    data_1299f94 = ecx_11

int32_t esi_8 = data_129a190

if (esi_8 s> 0)
    int32_t eax_44
    int32_t edx_8
    edx_8:eax_44 = sx.q(ecx_11)
    int32_t eax_46 = (eax_44 - edx_8) s>> 1
    
    if (esi_8 s> eax_46)
        if (esi_8 s> ecx_11)
            esi_8 = ecx_11
        
        data_129a190 = esi_8
    else
        data_129a190 = eax_46
else
    data_129a190 = ecx_11

int32_t esi_9 = data_129a38c

if (esi_9 s> 0)
    int32_t eax_48
    int32_t edx_9
    edx_9:eax_48 = sx.q(ecx_11)
    int32_t eax_50 = (eax_48 - edx_9) s>> 1
    
    if (esi_9 s> eax_50)
        if (esi_9 s> ecx_11)
            esi_9 = ecx_11
        
        data_129a38c = esi_9
    else
        data_129a38c = eax_50
else
    data_129a38c = ecx_11

int32_t esi_10 = data_129a588

if (esi_10 s> 0)
    int32_t eax_52
    int32_t edx_10
    edx_10:eax_52 = sx.q(ecx_11)
    int32_t eax_54 = (eax_52 - edx_10) s>> 1
    
    if (esi_10 s> eax_54)
        if (esi_10 s> ecx_11)
            esi_10 = ecx_11
        
        data_129a588 = esi_10
    else
        data_129a588 = eax_54
else
    data_129a588 = ecx_11

int32_t esi_11 = data_129a784

if (esi_11 s<= 0)
    data_129a784 = ecx_11
    return result

int32_t eax_57
int32_t edx_11
edx_11:eax_57 = sx.q(ecx_11)
int32_t eax_59 = (eax_57 - edx_11) s>> 1

if (esi_11 s<= eax_59)
    data_129a784 = eax_59
    return result

if (esi_11 s> ecx_11)
    esi_11 = ecx_11

data_129a784 = esi_11
return result
