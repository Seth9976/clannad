// 函数: sub_5d2170
// 地址: 0x5d2170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* esi = data_bac484
int32_t i = 0
*(esi + 0x138) = 0

if (*(esi + 0x108) s> 0)
    int32_t ebx_1 = 0
    
    do
        void* ecx_3 = *(esi + 0x10c) + 0x4c + ebx_1
        *(ecx_3 + 0xe0) = *(ecx_3 + 8)
        *(ecx_3 + 0xe4) = *(ecx_3 + 0xc)
        sub_5dbf60(ecx_3)
        i += 1
        ebx_1 += 0x2e60
    while (i s< *(esi + 0x108))

int32_t i_1 = 0

if (*(esi + 0x108) s> 0)
    int32_t ecx_4 = 0
    int32_t var_8_1 = 0
    
    do
        void* edi_2 = *(esi + 0x10c) + 0x21c + ecx_4
        sub_5e4fc0(edi_2)
        sub_5e5260(edi_2, 1)
        sub_5f1730(edi_2 + 0x1390)
        *(edi_2 + 0x1b0) = 0
        *(edi_2 + 0x1b4) = 0
        sub_5e5060(edi_2, 0)
        sub_5e5540(edi_2, 0)
        i_1 += 1
        ecx_4 = var_8_1 + 0x2e60
        var_8_1 = ecx_4
    while (i_1 s< *(esi + 0x108))

int32_t i_2 = 0

if (*(esi + 0x108) s> 0)
    int32_t ecx_11 = 0
    int32_t var_8_2 = 0
    
    do
        void* edi_5 = *(esi + 0x10c) + 0x1818 + ecx_11
        sub_5e4fc0(edi_5)
        sub_5e5260(edi_5, 1)
        sub_5f1730(edi_5 + 0x1390)
        *(edi_5 + 0x1b0) = 0
        *(edi_5 + 0x1b4) = 0
        sub_5e5060(edi_5, 0)
        sub_5e5540(edi_5, 0)
        i_2 += 1
        ecx_11 = var_8_2 + 0x2e60
        var_8_2 = ecx_11
    while (i_2 s< *(esi + 0x108))

sub_5e4fc0(esi + 0x418)
sub_5e5260(esi + 0x418, 1)
sub_5f1730(esi + 0x17a8)
*(esi + 0x5c8) = 0
*(esi + 0x5cc) = 0
sub_5e5060(esi + 0x418, 0)
sub_5e5540(esi + 0x418, 0)
sub_5e4fc0(esi + 0x1a14)
sub_5e5260(esi + 0x1a14, 1)
sub_5f1730(esi + 0x2da4)
*(esi + 0x1bc4) = 0
*(esi + 0x1bc8) = 0
sub_5e5060(esi + 0x1a14, 0)
sub_5e5540(esi + 0x1a14, 0)
sub_5e4fc0(esi + 0x3010)
sub_5e5260(esi + 0x3010, 1)
sub_5f1730(esi + 0x43a0)
*(esi + 0x31c0) = 0
*(esi + 0x31c4) = 0
sub_5e5060(esi + 0x3010, 0)
sub_5e5540(esi + 0x3010, 0)
sub_5e4fc0(esi + 0x460c)
sub_5e5260(esi + 0x460c, 1)
sub_5f1730(esi + 0x599c)
*(esi + 0x47bc) = 0
*(esi + 0x47c0) = 0
sub_5e5060(esi + 0x460c, 0)
sub_5e5540(esi + 0x460c, 0)
sub_5e4fc0(esi + 0x5c08)
sub_5e5260(esi + 0x5c08, 1)
sub_5f1730(esi + 0x6f98)
*(esi + 0x5db8) = 0
*(esi + 0x5dbc) = 0
sub_5e5060(esi + 0x5c08, 0)
sub_5e5540(esi + 0x5c08, 0)
sub_5e4fc0(esi + 0x7204)
sub_5e5260(esi + 0x7204, 1)
sub_5f1730(esi + 0x8594)
*(esi + 0x73b4) = 0
*(esi + 0x73b8) = 0
sub_5e5060(esi + 0x7204, 0)
sub_5e5540(esi + 0x7204, 0)
sub_5e4fc0(esi + 0x8800)
sub_5e5260(esi + 0x8800, 1)
sub_5f1730(esi + 0x9b90)
*(esi + 0x89b0) = 0
*(esi + 0x89b4) = 0
sub_5e5060(esi + 0x8800, 0)
sub_5e5540(esi + 0x8800, 0)
sub_5e4fc0(esi + 0x9dfc)
sub_5e5260(esi + 0x9dfc, 1)
sub_5f1730(esi + 0xb18c)
*(esi + 0x9fac) = 0
*(esi + 0x9fb0) = 0
sub_5e5060(esi + 0x9dfc, 0)
sub_5e5540(esi + 0x9dfc, 0)
int32_t ebx_2 = *(esi + 0x130)

for (void* i_3 = *(esi + 0x12c); i_3 != ebx_2; i_3 += 0x138)
    sub_6efc80(i_3 + 8)

*(esi + 0x130) = *(esi + 0x12c)
*(esi + 0x190) = 0
int32_t* ebx_3 = *(esi + 0x194)
*(esi + 0x194) = 0

if (ebx_3 != 0)
    bool cond:0_1 = ebx_3[1] != 1
    ebx_3[1]
    ebx_3[1] -= 1
    
    if (not(cond:0_1))
        (*(*ebx_3 + 4))()
        bool cond:2_1 = ebx_3[2] != 1
        ebx_3[2]
        ebx_3[2] -= 1
        
        if (not(cond:2_1))
            (*(*ebx_3 + 8))()

*(esi + 0x2c8) = 0
int32_t* ebx_4 = *(esi + 0x2cc)
*(esi + 0x2cc) = 0

if (ebx_4 != 0)
    bool cond:1_1 = ebx_4[1] != 1
    ebx_4[1]
    ebx_4[1] -= 1
    
    if (not(cond:1_1))
        (*(*ebx_4 + 4))()
        bool cond:4_1 = ebx_4[2] != 1
        ebx_4[2]
        ebx_4[2] -= 1
        
        if (not(cond:4_1))
            (*(*ebx_4 + 8))()

*(esi + 0x400) = 0
int32_t* ebx_5 = *(esi + 0x404)
*(esi + 0x404) = 0

if (ebx_5 != 0)
    bool cond:3_1 = ebx_5[1] != 1
    ebx_5[1]
    ebx_5[1] -= 1
    
    if (not(cond:3_1))
        (*(*ebx_5 + 4))()
        bool cond:6_1 = ebx_5[2] != 1
        ebx_5[2]
        ebx_5[2] -= 1
        
        if (not(cond:6_1))
            (*(*ebx_5 + 8))()

*(esi + 0x408) = 0
int32_t* ebx_6 = *(esi + 0x40c)
*(esi + 0x40c) = 0

if (ebx_6 != 0)
    bool cond:5_1 = ebx_6[1] != 1
    ebx_6[1]
    ebx_6[1] -= 1
    
    if (not(cond:5_1))
        (*(*ebx_6 + 4))()
        bool cond:8_1 = ebx_6[2] != 1
        ebx_6[2]
        ebx_6[2] -= 1
        
        if (not(cond:8_1))
            (*(*ebx_6 + 8))()

*(esi + 0x410) = 0
int32_t* ebx_7 = *(esi + 0x414)
*(esi + 0x414) = 0

if (ebx_7 != 0)
    bool cond:7_1 = ebx_7[1] != 1
    ebx_7[1]
    ebx_7[1] -= 1
    
    if (not(cond:7_1))
        (*(*ebx_7 + 4))()
        int32_t edi_14 = ebx_7[2]
        ebx_7[2] -= 1
        
        if (edi_14 == 1)
            (*(*ebx_7 + 8))()

sub_6efe60(esi + 0x198)
*(esi + 0x2b8) = 0
*(esi + 0x2bc) = 0
*(esi + 0x2c0) = 0
*(esi + 0x2c4) = 0
sub_6efdb0(esi + 0x198)
sub_6efe60(esi + 0x2d0)
*(esi + 0x3f0) = 0
*(esi + 0x3f4) = 0
*(esi + 0x3f8) = 0
*(esi + 0x3fc) = 0
sub_6efdb0(esi + 0x2d0)
return 0xffffffff
