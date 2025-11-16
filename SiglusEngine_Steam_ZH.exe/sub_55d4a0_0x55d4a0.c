// 函数: sub_55d4a0
// 地址: 0x55d4a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = data_b9c398
int32_t esi
esi.w = arg1

if ((eax_1.b & 1) == 0)
    data_b9c398 = eax_1 | 1
    sub_6ad730()

int32_t result
result.b = *(zx.d(esi.w) + 0xb9c3a0) == 1
return result
