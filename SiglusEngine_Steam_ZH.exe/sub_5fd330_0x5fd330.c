// 函数: sub_5fd330
// 地址: 0x5fd330
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0x8d3dcb09, esi_1)

if (esi_1 s/ 0xe8 u>= arg2)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0xe8

if (0x11a7b96 - ecx_5 u>= arg2)
    return sub_5fd3f0(arg1, sub_5fd3a0(arg1, ecx_5 + arg2))

sub_743191("vector<T> too long")
noreturn
