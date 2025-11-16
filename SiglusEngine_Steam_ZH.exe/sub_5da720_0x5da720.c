// 函数: sub_5da720
// 地址: 0x5da720
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0x92492493, esi_1)

if (esi_1 s/ 0x1c0 u>= arg2)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x1c0

if (0x924924 - ecx_5 u>= arg2)
    return sub_5da7e0(arg1, sub_5da790(arg1, ecx_5 + arg2))

sub_743191("vector<T> too long")
noreturn
