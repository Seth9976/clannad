// 函数: sub_631490
// 地址: 0x631490
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0x92492493, esi_1)

if (esi_1 s/ 0x1c u>= arg2)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x1c

if (0x9249249 - ecx_5 u>= arg2)
    return sub_631a50(arg1, sub_631a00(arg1, ecx_5 + arg2))

sub_743191("vector<T> too long")
noreturn
