// 函数: sub_5bed50
// 地址: 0x5bed50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0xb81702e1, esi_1)

if (esi_1 s/ 0x164 u>= arg2)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x164

if (&data_b81700:2 - ecx_5 u>= arg2)
    return sub_5bedc0(arg1, sub_55d0c0(arg1, ecx_5 + arg2))

sub_743191("vector<T> too long")
noreturn
