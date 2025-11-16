// 函数: sub_5d5f50
// 地址: 0x5d5f50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
void* ecx_1 = data_bac510 + 0xa2eb94
void* var_10 = esi
void* edi_1 = ecx_1 + 0x30 + *(esi + 0xa0) * 0xfc
void* var_14 = edi_1
sub_5d9690(esi)
void* ebx = esi + 0x234
sub_5f0c90(ebx + 0x25c)
sub_5f0c90(ebx + 0x418)
sub_5f0c90(ebx + 0x5d4)
void* ebx_1 = esi + 0xf28
sub_5f0c90(ebx_1 + 0x25c)
sub_5f0c90(ebx_1 + 0x418)
sub_5f0c90(ebx_1 + 0x5d4)
sub_5d6540(esi)
sub_5d6470(esi)
void* ebx_2 = esi + 0x228
sub_5da590(ebx_2, 1)
int32_t i = 0

if ((*(ebx_2 + 4) - *ebx_2) s/ 0x1c0 s> 0)
    void* eax_5 = esi + 0xa4
    int32_t var_c_1 = 0
    
    do
        void var_d0
        __builtin_memcpy(&var_d0, eax_5, 0x80)
        esi = var_10
        sub_5dbdc0(*ebx_2 + var_c_1, esi)
        i += 1
        var_c_1 += 0x1c0
        eax_5 = esi + 0xa4
    while (i s< (*(ebx_2 + 4) - *ebx_2) s/ 0x1c0)
    
    edi_1 = var_14

int32_t var_28 = 0

if ((*(ebx_2 + 4) - *ebx_2) s/ 0x1c0 s> 0)
    int32_t var_8 = 0
    
    while (true)
        int32_t eax_14 = *(edi_1 + 0x4c)
        int32_t var_24_1 = eax_14
        
        if (eax_14 s< 0)
            var_24_1 = *(ecx_1 + 0x28)
        
        int32_t ecx_19 = *(edi_1 + 0x48)
        int32_t var_34_1 = ecx_19
        
        if (ecx_19 s< 0)
            var_34_1 = *(ecx_1 + 0x24)
        
        int32_t eax_17 = *(edi_1 + 0x44)
        int32_t var_2c_1 = eax_17
        
        if (eax_17 s< 0)
            var_2c_1 = *(ecx_1 + 0x2c)
        
        int32_t ebx_3 = *(edi_1 + 0xa8)
        int32_t edx_10 = *(edi_1 + 0x6c)
        int32_t eax_19 = *(edi_1 + 0x3c)
        int128_t xmm0_1 = *(edi_1 + 0xd0)
        int32_t ecx_20 = *(edi_1 + 0x34)
        int32_t eax_20 = *(edi_1 + 0x40)
        int32_t edx_11 = *(edi_1 + 0x68)
        int32_t edi_4 = *(edi_1 + 0x54)
        int32_t* ebx_6 = *(var_10 + 0x228) + var_8
        int32_t* var_c_2 = ebx_6
        int32_t esi_2 = *(var_14 + 0x50)
        int32_t edx_13 = *(var_14 + 0x38)
        *ebx_6 = *(edi_1 + 0x30)
        ebx_6[1] = ecx_20
        ebx_6[7] = eax_19
        ebx_6[8] = eax_20
        ebx_6[9] = var_2c_1
        ebx_6[0xa] = var_34_1
        ebx_6[0xb] = var_24_1
        ebx_6[0xf] = edx_11
        ebx_6[2] = 0
        ebx_6[3] = 0
        ebx_6[4] = 0
        ebx_6[5] = 0
        ebx_6[6] = edx_13
        ebx_6[0xc] = esi_2
        ebx_6[0xd] = edi_4
        ebx_6[0xe] = ebx_3
        ebx_6[0x10] = edx_10
        *(ebx_6 + 0x44) = xmm0_1
        int32_t eax_30 = ebx_6[0x14]
        *(ebx_6 + 0xd8) = *ebx_6
        *(ebx_6 + 0xe8) = *(ebx_6 + 0x10)
        *(ebx_6 + 0xf8) = *(ebx_6 + 0x20)
        *(ebx_6 + 0x108) = *(ebx_6 + 0x30)
        *(ebx_6 + 0x118) = *(ebx_6 + 0x40)
        ebx_6[0x4a] = eax_30
        ebx_6[0x3f] = 0xffffffff
        ebx_6[0x40] = 0xffffffff
        ebx_6[0x41] = 0xffffffff
        sub_5dbf60(ebx_6)
        esi = var_10
        var_8 += 0x1c0
        int32_t ebx_9 = var_28 + 1
        var_28 = ebx_9
        
        if (ebx_9 s>= (*(esi + 0x22c) - *(esi + 0x228)) s/ 0x1c0)
            break
        
        edi_1 = var_14

void* edi_6 = esi + 0xc34
void* ecx_24 = edi_6
sub_5df460(ecx_24)
__builtin_memset(esi + 0x192c, 0, 0x28)
int128_t xmm0_7 = *(esi + 0x192c)
*(esi + 0x1928) = 0xffffffff
*(esi + 0x1954) = xmm0_7
*(esi + 0x1964) = *(esi + 0x193c)
*(esi + 0x1974) = *(esi + 0x194c)
int32_t eax_35 = *(esi + 0x19a8)
void* i_1 = *(esi + 0x19a4)
int32_t var_20_2 = eax_35

for (; i_1 != eax_35; i_1 += 0x8c)
    ecx_24 = sub_563780(i_1)

*(esi + 0x19a8) = *(esi + 0x19a4)
void* var_54_1 = ecx_24
*(esi + 0x199c) = 0
*(esi + 0x19a0) = 0
sub_5e2290(ebx)
void* var_54_2 = ebx
int32_t* result = sub_5e2290(ebx_1)

if (arg2 == 0)
    return result

void* ebx_10 = var_10
*edi_6 = *(ebx_10 + 0xa0)
sub_5df4f0(edi_6)
int128_t xmm0_10 = *(edi_6 + 4)
void* eax_38 = edi_6 + 0x60
*(edi_6 + 0x54) = 0xffffffff
*(edi_6 + 0x58) = 0xffffffff
*(edi_6 + 0x2c) = xmm0_10
*(edi_6 + 0x5c) = 0xffffffff
*(edi_6 + 0x3c) = *(edi_6 + 0x14)
*(edi_6 + 0x4c) = *(edi_6 + 0x24)
*(edi_6 + 0x48) = 0xffffffff
*(edi_6 + 0x4c) = 0xffffffff
*(edi_6 + 0x50) = 0xffffffff
bool cond:1_1 = *(eax_38 + 0x14) u< 8
*(eax_38 + 0x10) = 0

if (not(cond:1_1))
    eax_38 = *eax_38

void* var_54_3 = ebx_1
*eax_38 = 0
int32_t var_58_1 = 0
sub_551590(*(edi_6 + 0x88), *(edi_6 + 0x8c))
*(edi_6 + 0x8c) = *(edi_6 + 0x88)
int32_t eax_40 = *(ebx_10 + 0xa0)

if (eax_40 != *(esi + 0x1928))
    *(esi + 0x1928) = eax_40
    sub_5e01d0(esi + 0x1928)
    *(esi + 0x1954) = *(esi + 0x192c)
    *(esi + 0x1964) = *(esi + 0x193c)
    *(esi + 0x1974) = *(esi + 0x194c)
    int32_t eax_41 = *(esi + 0x19a8)
    void* edi_7 = *(esi + 0x19a4)
    int32_t var_18_1 = eax_41
    
    if (edi_7 != eax_41)
        do
            sub_563780(edi_7)
            edi_7 += 0x8c
        while (edi_7 != eax_41)
        
        ebx_10 = var_10
    
    *(esi + 0x19a8) = *(esi + 0x19a4)
    *(esi + 0x199c) = 0
    *(esi + 0x19a0) = 0

int32_t ecx_32 = *(ebx_10 + 0xa0) * 0xfc
int32_t edx_18 = *(var_14 + 0x58)
int32_t esi_4 = *(var_14 + 0xc4)
int32_t eax_44 = data_bac510

if (edx_18 == 0xfffffffe)
    edx_18 = *(ecx_32 + eax_44 + 0xa2ec1c)

if (esi_4 == 0xfffffffe)
    esi_4 = *(ecx_32 + eax_44 + 0xa2ec88)

sub_5e2420(ebx_10 + 0x234, edx_18, 0)
sub_5d91e0(ebx_10)
sub_5e2420(ebx_10 + 0xf28, esi_4, 0)
return sub_5d92d0(ebx_10)
