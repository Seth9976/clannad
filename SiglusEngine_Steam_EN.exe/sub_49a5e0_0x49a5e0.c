// 函数: sub_49a5e0
// 地址: 0x49a5e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = 0
void* eax = &data_f2e6f8
int32_t var_c = 0
void* esi = &data_f2e718
void* var_8 = &data_f2e6f8

for (void* i = &data_8c52dc; i s< 0x8d02dc; )
    if (ecx u<= 0x3ff)
        *i -= 1
        int32_t eax_1 = sub_4d6c40(eax, eax + 4)
        *(i - 0x28) = 0
        sub_4d1ba0(eax_1, 0x24, i - 0x24, 0)
        ecx = var_c
        *i = 0
        *(eax + 4) = 0
        *var_8 = 0
    
    ecx += 1
    *(esi - 0x20) = *(esi - 4)
    i += 0x2c
    *(esi - 0x1c) = *esi
    *(esi - 0x14) = *(esi + 4)
    *(esi - 0x10) = *(esi + 8)
    *(esi - 0xc) = *(esi + 0xc)
    *(esi - 8) = *(esi + 0x10)
    esi += 0x34
    eax = var_8 + 0x34
    var_c = ecx
    var_8 = eax

sub_4d1c30(eax, 0xf3b6f8, &data_8c52b4, 0xb000)
void* result = &data_f2e718
int32_t i_2 = 0x400
int32_t i_1

do
    *(result - 4) = 0
    result += 0x34
    *(result - 0x34) = 0
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return result
