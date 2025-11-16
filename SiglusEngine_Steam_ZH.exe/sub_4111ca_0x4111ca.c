// 函数: sub_4111ca
// 地址: 0x4111ca
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void*** var_8 = arg1
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
arg1[0x85] = arg4
*arg1 = &data_ab6990
arg1[0x86] = 4
arg1[0x8b] = 0
arg1[0x8d] = 0
__builtin_memset(&arg1[0x8f], 0, 0x30)
arg1[0x9b] = 1
arg1[0x9c] = 0
arg1[0x8c] = arg2
sub_40889e(&arg1[3], arg3)
arg1[0x8e] = sub_40b39f(&arg1[3], 0)
int32_t var_18_1 = 1
arg1[2] = 0

if (sub_40b3ef(&arg1[3], &arg1[1]) s< 0)
    arg1[1] = 0

int32_t* ecx = arg1[0x85]
arg1[0x87] = 0
arg1[0x89] = 0

if ((ecx:1.b & 2) != 0)
    arg1[0x87] = 1

if ((ecx:1.b & 1) != 0)
    arg1[0x87] = 2

if ((ecx:1.b & 4) != 0)
    arg1[0x89] = 8

void* temp1 = ecx & 2

if (temp1 != 0)
    arg1[0x89] |= 0x20

void* temp2 = ecx & 4

if (temp2 != 0)
    arg1[0x89] |= 0x40

void* temp3 = ecx & 8

if (temp3 != 0)
    arg1[0x89] |= 0x80

void* temp4 = ecx & 0x4000

if (temp4 != 0)
    *(arg1 + 0x225) |= 1

if ((ecx:1.b & 8) != 0)
    *(arg1 + 0x225) |= 2

if ((ecx & 0x10000) != 0)
    arg1[0x89] |= 0x10

arg1[0x88] = 0
arg1[0x8a] = 0

if ((ecx.b & 0x20) != 0)
    arg1[0x88] = 1

if ((ecx.b & 0x10) != 0)
    arg1[0x88] = 2

if ((ecx.b & 0x40) != 0)
    arg1[0x8a] = 8

if (temp1 != 0)
    arg1[0x8a] |= 0x20

if (temp2 != 0)
    arg1[0x8a] |= 0x40

if (temp3 != 0)
    arg1[0x8a] |= 0x80

if (temp4 != 0)
    *(arg1 + 0x229) |= 1

if ((0x80 & ecx.b) != 0)
    *(arg1 + 0x229) |= 2

if (ecx:1.b s< 0)
    arg1[0x8a] |= 0x10

if ((ecx:1.b & 0x10) != 0)
    arg1[0x86] |= 0x20

int32_t* eax_6 = arg1[0x8c]
(*(*eax_6 + 4))(eax_6)
int32_t* eax_7 = arg1[0x8c]
(*(*eax_7 + 0x18))(eax_7, &arg1[0x8b])
return arg1
