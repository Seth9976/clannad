// 函数: sub_561c20
// 地址: 0x561c20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0x8c08c08d, esi_1)

if (esi_1 s/ 0x1d4 u>= arg2)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x1d4

if (0x8c08c0 - ecx_5 u>= arg2)
    return sub_561e20(arg1, sub_561dd0(arg1, ecx_5 + arg2))

sub_743191("vector<T> too long")
noreturn
