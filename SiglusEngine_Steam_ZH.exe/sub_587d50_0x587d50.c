// 函数: sub_587d50
// 地址: 0x587d50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_24
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

int16_t* var_2c = ecx_1
int32_t var_28
char result = sub_6af490(eax_4, &var_28, &var_2c, eax_4)
int32_t esi_1 = 0xffffffff

if (result != 0)
    esi_1 = var_28

int32_t var_10

if (var_10 u>= 8)
    result = j__free(var_24)

if (esi_1 s>= 0)
    void* eax_6 = esi_1 * 0x118 + *(arg5 + 0xa4)
    result = sub_5862f0(eax_6, arg4, arg3 - 1, eax_6)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
