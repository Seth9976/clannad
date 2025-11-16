// 函数: sub_587df0
// 地址: 0x587df0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
int16_t var_24
void* ecx
int16_t* ecx_1 = sub_6c4e40(ecx, &var_24, arg2, 0)
int32_t esi = *(ecx_1 + 0x14)
int16_t* edx

if (esi u< 8)
    edx = ecx_1
else
    edx = *ecx_1

void* eax_4 = &edx[*(ecx_1 + 0x10)]

if (esi u>= 8)
    ecx_1 = *ecx_1

int16_t* var_28 = ecx_1
int32_t esi_1 = 0xffffffff

if (sub_6af490(eax_4, &var_2c, &var_28, eax_4) != 0)
    esi_1 = var_2c

int32_t var_10

if (var_10 u>= 8)
    j__free(var_24.d)

int32_t* result = nullptr
int32_t var_10_1 = 7
int32_t var_14 = 0
var_24 = 0

if (esi_1 s>= 0)
    void* eax_7 = esi_1 * 0x15fc + *(arg5 + 0xa4)
    result = sub_586390(eax_7, arg4, arg3 - 1, eax_7)

sub_745f2b(eax_1 ^ &var_2c)
return result
