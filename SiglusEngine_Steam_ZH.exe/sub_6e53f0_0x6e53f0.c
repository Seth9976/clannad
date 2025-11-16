// 函数: sub_6e53f0
// 地址: 0x6e53f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
uint32_t result = sub_6ec760(arg1, 0xadc074)

if (result s< 0x10)
    return result

int32_t ecx = arg1[3]
int32_t eax = arg1[2]
int32_t var_8_1 = ecx
int32_t ebx_2 = result & 0x1f
int32_t esi_2 = (result - ebx_2) s>> 4

if (esi_2 == 0)
    return ebx_2 + 6

if (ecx s< esi_2)
    eax = sub_6ec810(arg1, esi_2)
    var_8_1 = arg1[3]

arg1[2] = (eax * 2) << (esi_2.b - 1)
arg1[3] = var_8_1 - esi_2
return (eax u>> (0x20 - esi_2.b)) + ebx_2 + 6
