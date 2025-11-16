// 函数: sub_5cd760
// 地址: 0x5cd760
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* ebx = arg1
void* edi = data_bac510
void* var_1c = ebx
int32_t ecx = *(edi + 0xa47bd0)
int32_t eax_2 = *(edi + &data_a47bcc)
int32_t var_2c = eax_2 + *(edi + 0xa47bd4)
int32_t var_28 = *(edi + 0xa47bd8) + ecx
int32_t var_30 = ecx
int32_t* ecx_1 = ebx + 0x10c
*(ebx + 0xa0) = eax_2.o
*(ebx + 0xb0) = *(edi + 0xa47bdc)
*(ebx + 0xc0) = *(edi + 0xa47bec)
*(ebx + 0xc4) = *(edi + 0xa47d34)
*(ebx + 0xc8) = *(edi + 0xa47d38)
*(ebx + 0xcc) = *(edi + 0xa47d5c)
*(ebx + 0xd0) = *(edi + 0xa47d60)
*(ebx + 0x108) = *(edi + 0xa47f48)
int32_t edi_1 = ecx_1[1]
void* esi_1 = *ecx_1

if (esi_1 != edi_1)
    do
        sub_5d5a00(esi_1)
        esi_1 += 0x2e60
    while (esi_1 != edi_1)
    
    ecx_1 = ebx + 0x10c

ecx_1[1] = *ecx_1
sub_5d4470(ecx_1, *(ebx + 0x108))
int32_t i_2 = 0

if (*(ebx + 0x108) s> 0)
    int32_t edx_1 = 0
    int32_t var_c_1 = 0
    int32_t i
    
    do
        int32_t var_38_1 = 0
        void var_144
        void var_b4
        __builtin_memcpy(&var_144, &var_b4, 0x80)
        sub_5dbdc0(edx_1 + 0x4c + *(ebx + 0x10c), 0)
        void* eax_12 = data_bac510
        int32_t ecx_5 = *(eax_12 + 0xa47bfc)
        int32_t esi_2 = *(eax_12 + 0xa47bf8)
        int32_t edx_2 = *(eax_12 + 0xa47bf4)
        int32_t edi_2 = *(eax_12 + 0xa2ebb8)
        int32_t ecx_6 = *(eax_12 + 0xa47c00)
        int32_t esi_3 = *(eax_12 + 0xa2ebbc)
        int32_t esi_4 = *(eax_12 + 0xa2ebc0)
        void* eax_13 = *(ebx + 0x10c)
        *(eax_13 + var_c_1 + 0x4c) = *(eax_12 + 0xa47bf0)
        *(eax_13 + var_c_1 + 0x54) = 0
        *(eax_13 + var_c_1 + 0x58) = 0
        *(eax_13 + var_c_1 + 0x5c) = 0
        *(eax_13 + var_c_1 + 0x50) = edx_2
        void* edx_3 = eax_13 + var_c_1
        *(edx_3 + 0x68) = ecx_5
        *(edx_3 + 0x64) = esi_2
        *(edx_3 + 0x6c) = ecx_6
        *(edx_3 + 0x84) = esi_2
        *(edx_3 + 0x60) = 0
        *(edx_3 + 0x70) = esi_4
        *(edx_3 + 0x74) = edi_2
        *(edx_3 + 0x78) = esi_3
        *(edx_3 + 0x7c) = 0xa
        *(edx_3 + 0x80) = 0xa
        __builtin_memset(edx_3 + 0x88, 0, 0x18)
        sub_5dbef0(edx_3 + 0x4c)
        ebx = var_1c
        i = i_2 + 1
        edx_1 = var_c_1 + 0x2e60
        i_2 = i
        var_c_1 = edx_1
    while (i s< *(ebx + 0x108))

int32_t edi_3 = *(ebx + 0x130)

for (void* i_1 = *(ebx + 0x12c); i_1 != edi_3; i_1 += 0x138)
    sub_6efc80(i_1 + 8)

*(ebx + 0x130) = *(ebx + 0x12c)
sub_6efe60(ebx + 0x198)
*(ebx + 0x2b8) = 0
*(ebx + 0x2bc) = 0
*(ebx + 0x2c0) = 0
*(ebx + 0x2c4) = 0
sub_6efdb0(ebx + 0x198)
sub_6efe60(ebx + 0x2d0)
*(ebx + 0x3f0) = 0
*(ebx + 0x3f4) = 0
*(ebx + 0x3f8) = 0
*(ebx + 0x3fc) = 0
sub_6efdb0(ebx + 0x2d0)
*(ebx + 0x190) = 0
int32_t* edi_4 = *(ebx + 0x194)
*(ebx + 0x194) = 0

if (edi_4 != 0)
    bool cond:1_1 = edi_4[1] != 1
    edi_4[1]
    edi_4[1] -= 1
    
    if (not(cond:1_1))
        (*(*edi_4 + 4))()
        bool cond:3_1 = edi_4[2] != 1
        edi_4[2]
        edi_4[2] -= 1
        
        if (not(cond:3_1))
            (*(*edi_4 + 8))()

*(ebx + 0x2c8) = 0
int32_t* edi_5 = *(ebx + 0x2cc)
*(ebx + 0x2cc) = 0

if (edi_5 != 0)
    bool cond:2_1 = edi_5[1] != 1
    edi_5[1]
    edi_5[1] -= 1
    
    if (not(cond:2_1))
        (*(*edi_5 + 4))()
        bool cond:5_1 = edi_5[2] != 1
        edi_5[2]
        edi_5[2] -= 1
        
        if (not(cond:5_1))
            (*(*edi_5 + 8))()

*(ebx + 0x400) = 0
int32_t* edi_6 = *(ebx + 0x404)
*(ebx + 0x404) = 0

if (edi_6 != 0)
    bool cond:4_1 = edi_6[1] != 1
    edi_6[1]
    edi_6[1] -= 1
    
    if (not(cond:4_1))
        (*(*edi_6 + 4))()
        bool cond:7_1 = edi_6[2] != 1
        edi_6[2]
        edi_6[2] -= 1
        
        if (not(cond:7_1))
            (*(*edi_6 + 8))()

*(ebx + 0x408) = 0
int32_t* edi_7 = *(ebx + 0x40c)
*(ebx + 0x40c) = 0

if (edi_7 != 0)
    bool cond:6_1 = edi_7[1] != 1
    edi_7[1]
    edi_7[1] -= 1
    
    if (not(cond:6_1))
        (*(*edi_7 + 4))()
        bool cond:9_1 = edi_7[2] != 1
        edi_7[2]
        edi_7[2] -= 1
        
        if (not(cond:9_1))
            (*(*edi_7 + 8))()

*(ebx + 0x410) = 0
int32_t* edi_8 = *(ebx + 0x414)
*(ebx + 0x414) = 0

if (edi_8 != 0)
    bool cond:8_1 = edi_8[1] != 1
    edi_8[1]
    edi_8[1] -= 1
    
    if (not(cond:8_1))
        (*(*edi_8 + 4))()
        int32_t esi_7 = edi_8[2]
        edi_8[2] -= 1
        
        if (esi_7 == 1)
            (*(*edi_8 + 8))()

int32_t result = sub_5ce860(ebx)
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
