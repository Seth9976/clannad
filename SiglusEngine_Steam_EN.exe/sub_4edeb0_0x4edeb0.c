// 函数: sub_4edeb0
// 地址: 0x4edeb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx
void* edx
ecx, edx = __chkstk(0x20ac)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t edi = ecx[0x4ecf]
void* eax_3 = edi * 0x3920
void* var_20a0 = &(&data_1090ae4)[edi * 0x75]
int32_t entry_ebx

if ((*(edi * 0x1d4 + &data_1090b2c) != 1 || *(edi * 0x1d4 + &data_1090b6c) == 0xffffffff
        || data_187c51f != 0) && sub_57ce10() != 0)
    sub_57e2b0(edi, 0x3f)
    sub_5f02dd(entry_ebx ^ &__saved_ebp)
    return 1

char* ebx_2 = *(edx + 0x20)
void* var_209c = ebx_2
void* eax_5
eax_5.b = *ebx_2

if (eax_5.b u< 0x80 || (eax_5.b u>= 0xa0 && eax_5.b u<= 0xdf) || eax_5.b u>= 0xfe
        || (zx.d(eax_5.b) << 8 | zx.d(ebx_2[1])) != 0x8179)
    sub_5f02dd(entry_ebx ^ &__saved_ebp)
    return 0

if (edi u<= 0x3f)
    sub_4d6c40(eax_3 + 0xf8c778, eax_3 + 0xf8c77c)
    *(eax_3 + 0xf8c780) = 0
    sub_57e420(eax_3 + &data_f89afc)
    data_1af0b10 = 0

int32_t var_2098 = 0
int32_t var_208c[0x400]
int32_t var_108c[0x400]
char var_8c[0x6c]
int32_t eax_9 = sub_4edbc0(&var_8c, &var_209c, ebx_2, &var_8c, &var_2098, &var_208c, &var_108c)
int32_t eax_10 = sub_542900(&var_8c)
*(eax_3 + &data_f8c790) = eax_10

if (eax_10 != 0xffffffff)
    eax_10 = sub_542860(edi, 1)

BOOL eax_12

if (eax_9 s<= 0)
    sub_4d6960(eax_10, eax_3 + 0xf8c77c, eax_3 + 0xf8c778, 1, "NULLNAME")
    eax_12 = *(eax_3 + 0xf8c77c)
    *eax_12 = 0
else
    eax_12 = sub_4ebec0(&var_8c, eax_3 + 0xf8c77c, eax_3 + 0xf8c778, &var_8c)

if (edi u<= 0x3f)
    eax_12 = sub_460f20(eax_3, *(eax_3 + 0xf8c77c), eax_3 + &data_f8d35c, 0, 0, 0)

if (data_702fc0 != 0)
    sub_4cfdf0(eax_12, *(eax_3 + 0xf8c77c), &data_1af0b10, 0x400)

char var_208d = 0
int32_t ecx_14 = *(var_20a0 + 0x48)

if (ecx_14 != 0)
    if (ecx_14 == 1 && *(var_20a0 + 0x88) != 0xffffffff)
        sub_57e5a0(edi, *(eax_3 + 0xf8c77c))
        var_208d = 1
        sub_498750(*(eax_3 + 0xf8c77c))
    
    *(eax_3 + 0xf8d324) = 2
    *(eax_3 + 0xf8c780) = 0
else
    char* ecx_15 = *(eax_3 + 0xf8c77c)
    *(eax_3 + 0xf8c780) = ecx_15
    sub_498750(ecx_15)

if (*(eax_3 + 0xf8c780) == 0 && edi u<= 0x3f)
    int32_t eax_16 = *(eax_3 + &data_f8c790)
    
    if (eax_16 != 0xffffffff)
        int32_t eax_17 = *(eax_16 * 0x98 + 0x12c9340)
        
        if (eax_17 != 0)
            if (eax_17 == 1 || eax_17 == 2)
                sub_57d6a0(eax_17, *(eax_16 * 0x98 + 0x12c9344), edi, *(eax_16 * 0x98 + 0x12c9348))
            else if (eax_17 == 3)
                *(edi * 0x2d0 + 0x8fcb04) = 0xffffffff
                *(edi * 0x2d0 + &data_8fcb08) = 0xffffffff
    else
        sub_542980(edi)

if (var_208d != 0 && sub_57ce10() != 0)
    sub_57e2b0(edi, 0x3f)
    sub_420170(edi, *(eax_3 + 0xf8c77c))
    sub_5f02dd(entry_ebx ^ &__saved_ebp)
    return 1

int32_t esi_1 = 0
void* eax_22 = var_209c
*(edx + 0x20) = eax_22

if (var_2098 s> 0)
    do
        eax_22 = sub_4ee260(eax_22, var_208c[esi_1], *ecx, var_108c[esi_1])
        esi_1 += 1
    while (esi_1 s< var_2098)

if (var_208d != 0 && *(var_20a0 + 0x4c) != 0 && edi u<= 0x3f)
    *(edi * 0x2d0 + 0x8fcb0c) = *(edi * 0x2d0 + 0x8fcb14)
    *(edi * 0x2d0 + 0x8fcb10) += *(eax_3 + 0xf8d2f0)
    sub_57ea10(edi)

sub_420170(edi, *(eax_3 + 0xf8c77c))
sub_5f02dd(entry_ebx ^ &__saved_ebp)
return 1
