// 函数: sub_684bc0
// 地址: 0x684bc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0x92492493, esi_1)

if (esi_1 s/ 0x1c u>= 1)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x1c

if (0x9249249 - ecx_5 u>= 1)
    return sub_684c30(arg1, sub_631a00(arg1, ecx_5 + 1))

sub_743191("vector<T> too long")
noreturn
