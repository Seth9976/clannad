// 函数: sub_5b1090
// 地址: 0x5b1090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
*(arg1 + 0x10) = *(arg2 + 0x10)
arg1[8] = arg2[8]
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x34) = *(arg2 + 0x34)
*(arg1 + 0x44) = *(arg2 + 0x44)
*(arg1 + 0x54) = *(arg2 + 0x54)
arg1[0x17] = arg2[0x17]
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x90) = *(arg2 + 0x90)
*(arg1 + 0xa0) = *(arg2 + 0xa0)
*(arg1 + 0xb0) = *(arg2 + 0xb0)
arg1[0x2e] = arg2[0x2e]
arg1[0x2f] = arg2[0x2f]
*(arg1 + 0xc0) = *(arg2 + 0xc0)
*(arg1 + 0xd0) = *(arg2 + 0xd0)
*(arg1 + 0xe0) = *(arg2 + 0xe0)
*(arg1 + 0xf0) = *(arg2 + 0xf0)
__builtin_memcpy(&arg1[0x3e], &arg2[0x3e], 0xb8)
__builtin_memcpy(&arg1[0x6c], &arg2[0x6c], 0x670)
void* eax_8

if (arg2 == 0xfffff7e0)
    eax_8 = nullptr
else
    eax_8 = &arg2[0x209]

sub_5b15d0(&arg1[0x209], eax_8)
arg1[0x236] = arg2[0x236]
void* eax_10

if (arg2 == 0xfffff724)
    eax_10 = nullptr
else
    eax_10 = &arg2[0x238]

sub_5b15d0(&arg1[0x238], eax_10)
arg1[0x265] = arg2[0x265]
void* eax_12

if (arg2 == 0xfffff668)
    eax_12 = nullptr
else
    eax_12 = &arg2[0x267]

sub_5b15d0(&arg1[0x267], eax_12)
arg1[0x294] = arg2[0x294]
void* eax_14

if (arg2 == 0xfffff5ac)
    eax_14 = nullptr
else
    eax_14 = &arg2[0x296]

sub_5b15d0(&arg1[0x296], eax_14)
arg1[0x2c3] = arg2[0x2c3]
void* eax_17

if (arg2 == 0xfffff4f0)
    eax_17 = nullptr
else
    eax_17 = &arg2[0x2c5]

sub_5b1650(&arg1[0x2c5], eax_17)

if (&arg1[0x2f2] != &arg2[0x2f2])
    sub_52e3c0(&arg1[0x2f2], &arg2[0x2f2], 0, 0xffffffff)

if (&arg1[0x2f8] != &arg2[0x2f8])
    sub_52e3c0(&arg1[0x2f8], &arg2[0x2f8], 0, 0xffffffff)

int32_t i_1 = 8
void* esi_6 = &arg1[0x2fe]
int32_t i_2 = 8
int32_t i

do
    void** eax_20 = arg2 - arg1 + esi_6
    
    if (esi_6 != eax_20)
        sub_52e3c0(esi_6, eax_20, 0, 0xffffffff)
        i_1 = i_2
    
    esi_6 += 0x18
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)

if (&arg1[0x32e] != &arg2[0x32e])
    sub_52e3c0(&arg1[0x32e], &arg2[0x32e], 0, 0xffffffff)

if (&arg1[0x334] != &arg2[0x334])
    sub_52e3c0(&arg1[0x334], &arg2[0x334], 0, 0xffffffff)

sub_5b1390(&arg1[0x33a], &arg2[0x33a])
void* eax_24

if (arg2 == 0xfffff04c)
    eax_24 = nullptr
else
    eax_24 = &arg2[0x3ee]

sub_5b16d0(&arg1[0x3ee], eax_24)
__builtin_memcpy(&arg1[0x41b], &arg2[0x41b], 0x80)
sub_5b1510(&arg1[0x43b], &arg2[0x43b])
return arg1
