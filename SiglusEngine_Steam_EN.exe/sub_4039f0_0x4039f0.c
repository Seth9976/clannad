// 函数: sub_4039f0
// 地址: 0x4039f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = *(arg2 + 0x1c)

if (esi == 0)
    return 1

int32_t* ebx = arg1
char ebp = (esi[0x392]).b
int32_t edx
void* eax_1 = sub_5f1ac0(0, edx, __builtin_memset(ebx, 0, 0x70), 1, 0x88)
ebx[0x1a] = eax_1
ebx[1] = arg2
int32_t edx_1 = esi[2]
int32_t eax_2
int32_t ecx_2
eax_2, ecx_2 = sub_40b560(edx_1)
*(eax_1 + 0x2c) = eax_2
int32_t eax_3
int32_t ecx_3
int32_t edx_2
eax_3, ecx_3, edx_2 = sub_5f1ac0(eax_2, edx_1, ecx_2, 1, 4)
*(eax_1 + 0xc) = eax_3
int32_t eax_4
int32_t ecx_4
int32_t edx_3
eax_4, ecx_4, edx_3 = sub_5f1ac0(eax_3, edx_2, ecx_3, 1, 4)
*(eax_1 + 0x10) = eax_4
int32_t eax_5
int32_t edx_4
eax_5, edx_4 = sub_5f1ac0(eax_4, edx_3, ecx_4, 1, 0x14)
int32_t* ecx_5 = *(eax_1 + 0xc)
*ecx_5 = eax_5
**(eax_1 + 0x10) = sub_5f1ac0(eax_5, edx_4, ecx_5, 1, 0x14)
sub_40a050(**(eax_1 + 0xc), *esi s>> ebp)
int32_t edx_8
int80_t st0_1
st0_1, edx_8 = sub_40a050(**(eax_1 + 0x10), esi[1] s>> ebp)
int16_t top = 0xfffe
*(eax_1 + 4) = sub_40b560(*esi) - 6
*(eax_1 + 8) = sub_40b560(esi[1]) - 6

if (arg3 != 0)
    sub_409e20(eax_1 + 0x14, *esi)
    int32_t ecx_12
    int32_t edx_11
    ecx_12, edx_11 = sub_409e20(eax_1 + 0x20, esi[1])
    
    if (esi[0x2c8] == 0)
        int32_t eax_19 = esi[6]
        int32_t eax_20
        eax_20, ecx_12, edx_11 = sub_5f1ac0(eax_19, edx_11, ecx_12, eax_19, 0x2c)
        esi[0x2c8] = eax_20
        arg1 = nullptr
        
        if (esi[6] s> 0)
            arg3 = 0
            void* ebp_1 = &esi[0x1c8]
            bool cond:5_1
            
            do
                sub_4078a0(esi[0x2c8] + arg3, *ebp_1)
                ecx_12 = esi[6]
                ebp_1 += 4
                edx_11 = arg3 + 0x2c
                cond:5_1 = arg1 + 1 s< ecx_12
                arg1 += 1
                arg3 = edx_11
            while (cond:5_1)
    
    int32_t eax_25 = esi[7]
    *(eax_1 + 0x38) = sub_5f1ac0(eax_25, edx_11, ecx_12, eax_25, 0x34)
    arg1 = nullptr
    
    if (esi[7] s> 0)
        arg3 = 0
        int32_t** ebp_2 = &esi[0x2c9]
        bool cond:4_1
        
        do
            int32_t* ecx_14 = *ebp_2
            int32_t eax_30
            int32_t edx_17
            edx_17:eax_30 = sx.q(esi[*ecx_14])
            sub_404a30(*(eax_1 + 0x38) + arg3, ecx_14, &esi[0x2cd], (eax_30 - edx_17) s>> 1, 
                *(arg2 + 8))
            top -= 1
            unimplemented  {call 0x404a30}
            ebp_2 = &ebp_2[1]
            cond:4_1 = arg1 + 1 s< esi[7]
            arg1 += 1
            arg3 += 0x34
        while (cond:4_1)
    
    *ebx = 1
else if (esi[0x2c8] == 0)
    int32_t ecx_16 = esi[6]
    esi[0x2c8] = sub_5f1ac0(arg3, edx_8, ecx_16, ecx_16, 0x2c)
    arg1 = nullptr
    
    if (esi[6] s> 0)
        arg3 = 0
        void* ebp_3 = &esi[0x1c8]
        bool cond:3_1
        
        do
            sub_407900(esi[0x2c8] + arg3, *ebp_3)
            sub_407820(*ebp_3)
            *ebp_3 = 0
            ebp_3 += 4
            cond:3_1 = arg1 + 1 s< esi[6]
            arg1 += 1
            arg3 += 0x2c
        while (cond:3_1)

ebx[4] = esi[1]
ebx[2] = _malloc(*(arg2 + 4) << 2)
int32_t eax_47
int32_t ecx_21
eax_47, ecx_21 = _malloc(*(arg2 + 4) << 2)
void* edx_26 = arg2
ebx[3] = eax_47
int32_t i = 0

if (*(edx_26 + 4) s> 0)
    do
        int32_t eax_49 = ebx[4]
        int32_t eax_50 = sub_5f1ac0(eax_49, edx_26, ecx_21, eax_49, 4)
        ecx_21 = ebx[2]
        edx_26 = arg2
        *(ecx_21 + (i << 2)) = eax_50
        i += 1
    while (i s< *(edx_26 + 4))

ebx[9] = 0
ebx[0xa] = 0
int32_t eax_53
int32_t edx_27
edx_27:eax_53 = sx.q(esi[1])
int32_t eax_55 = (eax_53 - edx_27) s>> 1
ebx[0xc] = eax_55
ebx[5] = eax_55
int32_t eax_56 = esi[4]
int32_t eax_57
int32_t edx_28
eax_57, edx_28 = sub_5f1ac0(eax_56, edx_27, ecx_21, eax_56, 4)
*(eax_1 + 0x30) = eax_57
int32_t ecx_22 = esi[5]
*(eax_1 + 0x34) = sub_5f1ac0(eax_57, edx_28, ecx_22, ecx_22, 4)
arg1 = nullptr

if (esi[4] s> 0)
    void* ebp_5 = &esi[0x108]
    bool cond:6_1
    
    do
        int32_t eax_62 = (*((&data_632fc0)[*(ebp_5 - 0x100)] + 8))(ebx, *ebp_5)
        void* edx_31 = 0xfffffbe0 - esi + ebp_5
        ebp_5 += 4
        *(edx_31 + *(eax_1 + 0x30)) = eax_62
        cond:6_1 = arg1 + 1 s< esi[4]
        arg1 += 1
    while (cond:6_1)

arg1 = nullptr

if (esi[5] s> 0)
    void* ebp_6 = &esi[0x188]
    bool cond:7_1
    
    do
        int32_t eax_68 = (*((&data_632fc8)[*(ebp_6 - 0x100)] + 8))(ebx, *ebp_6)
        void* edx_34 = 0xfffff9e0 - esi + ebp_6
        ebp_6 += 4
        *(edx_34 + *(eax_1 + 0x34)) = eax_68
        cond:7_1 = arg1 + 1 s< esi[5]
        arg1 += 1
    while (cond:7_1)

return 0
