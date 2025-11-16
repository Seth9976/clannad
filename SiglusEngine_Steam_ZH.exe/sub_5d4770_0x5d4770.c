// 函数: sub_5d4770
// 地址: 0x5d4770
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_4 = arg1
int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0xd20d20d3, esi_1)

if (esi_1 s/ 0x138 u>= 1)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x138

if (0xd20d20 - ecx_5 u>= 1)
    return sub_5d4aa0(arg1, sub_5d4a50(arg1, ecx_5 + 1))

sub_743191("vector<T> too long")
noreturn
