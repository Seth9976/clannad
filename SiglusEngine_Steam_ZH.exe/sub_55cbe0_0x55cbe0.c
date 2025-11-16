// 函数: sub_55cbe0
// 地址: 0x55cbe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0xb70fbb5b, esi_1)

if (esi_1 s/ 0x2cc u>= arg2)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x2cc

if (0x5b87dd - ecx_5 u>= arg2)
    return sub_55cec0(arg1, sub_55ce70(arg1, ecx_5 + arg2))

sub_743191("vector<T> too long")
noreturn
