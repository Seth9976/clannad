// 函数: sub_5e03f0
// 地址: 0x5e03f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = *arg2

if (edx == arg2[1])
    edx = nullptr

*arg1 = *(edx + arg2[3])
arg2[3] += 4
sub_5e01d0(arg1)
int32_t eax_2 = *arg2

if (eax_2 == arg2[1])
    eax_2 = 0

int128_t* ecx = arg2[3]
*(arg1 + 0x2c) = *(ecx + eax_2)
*(arg1 + 0x3c) = *(ecx + eax_2 + 0x10)
*(arg1 + 0x4c) = *(ecx + eax_2 + 0x20)
arg2[3] += 0x28
int32_t eax_3 = *arg2

if (eax_3 == arg2[1])
    eax_3 = 0

arg1[0x1d] = *(arg2[3] + eax_3)
arg2[3] += 4
int32_t eax_5 = *arg2

if (eax_5 == arg2[1])
    eax_5 = 0

eax_5.b = arg2[3][eax_5]
arg1[0x1e].b = eax_5.b
arg2[3] += 1
int32_t eax_6 = *arg2
int32_t ecx_4 = arg2[3] + 4
bool cond:2 = eax_6 == arg2[1]
arg2[3] = ecx_4

if (cond:2)
    eax_6 = 0

sub_5e1060(&arg1[0x1f], *(ecx_4 + eax_6 - 4))
int32_t var_8 = 0
int32_t result = (arg1[0x20] - arg1[0x1f]) s/ 0x8c

if (result s> 0)
    int32_t edi_1 = 0
    int32_t esi_4
    
    do
        int32_t* esi_2 = arg1[0x1f] + edi_1
        bool cond:3_1 = esi_2[8] u< 8
        void** eax_10 = &esi_2[3]
        eax_10[4] = 0
        
        if (not(cond:3_1))
            eax_10 = *eax_10
        
        int32_t* var_1c_1 = arg2
        *eax_10 = nullptr
        int32_t var_20_1 = 0
        sub_551590(esi_2[0x20], esi_2[0x21])
        esi_2[0x21] = esi_2[0x20]
        sub_67d4b0(&esi_2[0xf])
        *esi_2 = 1
        sub_5e16b0(arg1[0x1f] + edi_1, arg2)
        edi_1 += 0x8c
        esi_4 = var_8 + 1
        var_8 = esi_4
        result = (arg1[0x20] - arg1[0x1f]) s/ 0x8c
    while (esi_4 s< result)

return result
