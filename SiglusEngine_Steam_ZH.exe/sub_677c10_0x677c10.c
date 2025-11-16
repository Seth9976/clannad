// 函数: sub_677c10
// 地址: 0x677c10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* var_8 = arg1
int32_t var_8_1 = 0
void** eax_2 = *(data_bac49c + 0x10) - 0x18
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
*arg1 = 0
sub_52e3c0(arg1, eax_2, 0, 0xffffffff)
void* ebx = data_bac49c
void* esi = *(ebx + 0x10)

if (*(esi - 4) u>= 8)
    j__free(*(esi - 0x18))

*(esi - 4) = 7
*(esi - 8) = 0
*(esi - 0x18) = 0
*(ebx + 0x10) -= 0x18
return arg1
