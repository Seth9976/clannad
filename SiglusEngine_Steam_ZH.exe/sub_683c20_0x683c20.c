// 函数: sub_683c20
// 地址: 0x683c20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* esi = data_bac4d0
int32_t ecx = *(data_bac408 + 0xa4)
int32_t var_14 = ecx + 0x394
int32_t var_10 = ecx + 0xc80
int32_t var_c = ecx + 0x156c
(*(esi[3] + 0x1c))()
(*(esi[0x24a2] + 0x1c))()
(*(esi[0x4941] + 0x1c))()
(*(esi[0x4fd0] + 0x1c))()
(*(esi[0x5310] + 0x1c))()
(*(esi[0x551a] + 0x1c))()
(*(esi[0x567f] + 0x1c))()
(*(esi[0x5a8b] + 0x1c))()
(*(esi[0x5db7] + 0x1c))()
(*(esi[0x5ec6] + 0x1c))()
(*(esi[0x60e0] + 0x1c))()
(*(esi[0x61ef] + 0x1c))()
(*(esi[0x6329] + 0x1c))()
(*(esi[0x64ec] + 0x1c))()
(*(esi[0x66d3] + 0x1c))()
(*(esi[0x6872] + 0x1c))()
(*(esi[0x6f69] + 0x1c))()
(*(esi[0x7197] + 0x1c))()
(*(esi[0x72cb] + 0x1c))()
(*(esi[0x74be] + 0x1c))()
(*(esi[0x76b1] + 0x1c))()

if (*data_bac4a0 != 0)
    (*(esi[0x77b0] + 0x1c))()
    (*(esi[0x7922] + 0x1c))()
    (*(esi[0x7a05] + 0x1c))()
    (*(esi[0x7b18] + 0x1c))()
    (*(esi[0x7c38] + 0x1c))()
    (*(esi[0x7d41] + 0x1c))()
    (*(esi[0x7e4a] + 0x1c))()
    (*(esi[0x7f64] + 0x1c))()
    (*(esi[0x809c] + 0x1c))()
    (*(esi[0x81ba] + 0x1c))()
    (*(esi[0x82d1] + 0x1c))()
    (*(esi[0x84e1] + 0x1c))()
    (*(esi[0x83d9] + 0x1c))()
    (*(esi[0x85e9] + 0x1c))()
    (*(esi[0x8934] + 0x1c))()
    (*(esi[0x8b21] + 0x1c))()
    (*(esi[0x86ee] + 0x1c))()
    (*(esi[0x8c29] + 0x1c))()
    void* edi_1 = &esi[0x99d2]
    int32_t i_3 = 0xd
    int32_t i
    
    do
        (*(*edi_1 + 0x1c))()
        edi_1 += 0x430
        i = i_3
        i_3 -= 1
    while (i != 1)
    void* edi_2 = &esi[0xa76e]
    int32_t i_4 = 0x14
    int32_t i_1
    
    do
        (*(*edi_2 + 0x1c))()
        edi_2 += 0x418
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    (*(esi[0xbbe6] + 0x1c))()
    (*(esi[0xbcee] + 0x1c))()
    (*(esi[0xbdf6] + 0x1c))()
    (*(esi[0xbfeb] + 0x1c))()
    (*(esi[0xc300] + 0x1c))()
    (*(esi[0xc0f0] + 0x1c))()
    
    if (esi[0xc1fc] != i_4)
        sub_58d030(&esi[0xc1fb])
    
    void* edi_3 = &esi[0xc405]
    int32_t i_5 = 6
    int32_t ecx_50
    int32_t i_2
    
    do
        ecx_50 = (*(*edi_3 + 0x1c))()
        edi_3 += 0x418
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    int32_t var_28_1 = ecx_50
    sub_591a20(&esi[0xca29], &var_14)
    (*(esi[0xcc1e] + 0x1c))()
    (*(esi[0xcd26] + 0x1c))()
    (*(esi[0xce2e] + 0x1c))()
    (*(esi[0xcf9f] + 0x1c))()

int32_t edi_4 = 0
int32_t result = esi[1] - *esi

if ((result & 0xfffffffc) s> 0)
    do
        void* ecx_56 = *(*esi + (edi_4 << 2))
        
        if (*(ecx_56 + 4) != 0)
            sub_6c1850(ecx_56)
        
        edi_4 += 1
        result = (esi[1] - *esi) s>> 2
    while (edi_4 s< result)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
