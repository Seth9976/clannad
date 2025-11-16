// 函数: sub_5572f0
// 地址: 0x5572f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0xba506bb7, esi_1)

if (esi_1 s/ 0x15fc u>= arg2)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x15fc

if (0xba506 - ecx_5 u>= arg2)
    return sub_5573b0(arg1, sub_557360(arg1, ecx_5 + arg2))

sub_743191("vector<T> too long")
noreturn
